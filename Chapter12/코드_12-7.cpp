#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <stdexcept>
#include <utility>
#include <vector>
using namespace std;
using namespace chrono;

int partition(
    vector<int>& numbers,
    int left,
    int right
) {
    int pivot = numbers[right];
    int smallerIndex = left - 1;

    for (int current = left;
         current < right;
         current++) {
        if (numbers[current] <= pivot) {
            smallerIndex++;

            swap(
                numbers[smallerIndex],
                numbers[current]
            );
        }
    }

    swap(
        numbers[smallerIndex + 1],
        numbers[right]
    );

    return smallerIndex + 1;
}

void quickSort(
    vector<int>& numbers,
    int left,
    int right
) {
    if (left >= right) {
        return;
    }

    int pivotIndex = partition(
        numbers,
        left,
        right
    );

    quickSort(
        numbers,
        left,
        pivotIndex - 1
    );

    quickSort(
        numbers,
        pivotIndex + 1,
        right
    );
}

long long measureQuickSort(
    const vector<int>& original
) {
    vector<int> data = original;

    auto start = steady_clock::now();

    if (!data.empty()) {
        quickSort(
            data,
            0,
            static_cast<int>(data.size()) - 1
        );
    }

    auto end = steady_clock::now();

    if (!is_sorted(
            data.begin(),
            data.end()
        )) {
        throw runtime_error(
            "퀵 정렬 결과가 올바르지 않습니다."
        );
    }

    return duration_cast<microseconds>(
        end - start
    ).count();
}

long long measureStdSort(
    const vector<int>& original
) {
    vector<int> data = original;

    auto start = steady_clock::now();

    sort(data.begin(), data.end());

    auto end = steady_clock::now();

    if (!is_sorted(
            data.begin(),
            data.end()
        )) {
        throw runtime_error(
            "std::sort 결과가 올바르지 않습니다."
        );
    }

    return duration_cast<microseconds>(
        end - start
    ).count();
}

long long calculateMedian(
    vector<long long> times
) {
    sort(times.begin(), times.end());

    return times[times.size() / 2];
}
int main() {
    const int dataSize = 50000;
    const int testCount = 5;

    mt19937 generator(42);

    uniform_int_distribution<int> distribution(
        1,
        1000000
    );

    vector<int> original(dataSize);

    for (int& number : original) {
        number = distribution(generator);
    }

    vector<long long> quickSortTimes;
    vector<long long> stdSortTimes;

    try {
        for (int test = 0;
             test < testCount;
             test++) {
            quickSortTimes.push_back(
                measureQuickSort(original)
            );

            stdSortTimes.push_back(
                measureStdSort(original)
            );
        }
    }
    catch (const exception& error) {
        cout << "측정 오류: "
             << error.what()
             << endl;

        return 1;
    }

    cout << "[측정 조건]" << endl;
    cout << "데이터 개수: "
         << dataSize
         << endl;

    cout << "반복 횟수: "
         << testCount
         << endl;

    cout << endl;

    cout << "[실행 시간 중앙값]" << endl;

    cout << "직접 구현 퀵 정렬: "
         << calculateMedian(quickSortTimes)
         << " μs"
         << endl;

    cout << "std::sort: "
         << calculateMedian(stdSortTimes)
         << " μs"
         << endl;

    return 0;
}
