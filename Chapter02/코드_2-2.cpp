#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>

int main() {
    std::cout << "=== C++ 기본 데이터 타입 크기 (바이트) ===" << std::endl;
    std::cout << std::left;

    // 정수형 타입
    std::cout << "\n[정수형 타입]" << std::endl;
    std::cout << std::setw(20) << "char:" << sizeof(char) << " byte" << std::endl;
    std::cout << std::setw(20) << "short:" << sizeof(short) << " bytes" << std::endl;
    std::cout << std::setw(20) << "int:" << sizeof(int) << " bytes" << std::endl;
    std::cout << std::setw(20) << "long:" << sizeof(long) << " bytes" << std::endl;
    std::cout << std::setw(20) << "long long:" << sizeof(long long) << " bytes" << std::endl;

    // 부호 없는 정수형
    std::cout << "\n[부호 없는 정수형]" << std::endl;
    std::cout << std::setw(20) << "unsigned char:" << sizeof(unsigned char) << " byte" << std::endl;
    std::cout << std::setw(20) << "unsigned short:" << sizeof(unsigned short) << " bytes" << std::endl;
    std::cout << std::setw(20) << "unsigned int:" << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << std::setw(20) << "unsigned long:" << sizeof(unsigned long) << " bytes" << std::endl;

    // 실수형 타입
    std::cout << "\n[실수형 타입]" << std::endl;
    std::cout << std::setw(20) << "float:" << sizeof(float) << " bytes" << std::endl;
    std::cout << std::setw(20) << "double:" << sizeof(double) << " bytes" << std::endl;
    std::cout << std::setw(20) << "long double:" << sizeof(long double) << " bytes" << std::endl;

    // 논리형 타입
    std::cout << "\n[논리형 타입]" << std::endl;
    std::cout << std::setw(20) << "bool:" << sizeof(bool) << " byte" << std::endl;
    // 포인터 타입
    std::cout << "\n[포인터 타입]" << std::endl;
    std::cout << std::setw(20) << "void*:" << sizeof(void*) << " bytes (시스템 아키텍처에 따름)" << std::endl;

    // 각 타입의 최소/최댓값
    std::cout << "\n=== 각 타입의 값 범위 ===" << std::endl;
    std::cout << "\n[정수형 범위]" << std::endl;
    std::cout << "char: " << static_cast<int>(CHAR_MIN) << " ~ " << static_cast<int>(CHAR_MAX) << std::endl;
    std::cout << "short: " << SHRT_MIN << " ~ " << SHRT_MAX << std::endl;
    std::cout << "int: " << INT_MIN << " ~ " << INT_MAX << std::endl;
    std::cout << "long: " << LONG_MIN << " ~ " << LONG_MAX << std::endl;
    std::cout << "long long: " << LLONG_MIN << " ~ " << LLONG_MAX << std::endl;

    std::cout << "\n[부호 없는 정수형 범위]" << std::endl;
    std::cout << "unsigned char: 0 ~ " << static_cast<int>(UCHAR_MAX) << std::endl;
    std::cout << "unsigned short: 0 ~ " << USHRT_MAX << std::endl;
    std::cout << "unsigned int: 0 ~ " << UINT_MAX << std::endl;
    std::cout << "unsigned long: 0 ~ " << ULONG_MAX << std::endl;

    std::cout << "\n[실수형 정밀도]" << std::endl;
    std::cout << "float: " << FLT_DIG << " 자리 정밀도" << std::endl;
    std::cout << "double: " << DBL_DIG << " 자리 정밀도" << std::endl;
    std::cout << "long double: " << LDBL_DIG << " 자리 정밀도" << std::endl;

    return 0;
}
