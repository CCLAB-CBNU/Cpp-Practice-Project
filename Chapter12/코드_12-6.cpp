#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void addEdge(
    vector<vector<int>>& graph,
    int first,
    int second
) {
    graph[first].push_back(second);
    graph[second].push_back(first);
}

void bfs(
    const vector<vector<int>>& graph,
    int start
) {
    vector<bool> visited(
        graph.size(),
        false
    );
    queue<int> waiting;

    visited[start] = true;
    waiting.push(start);

    while (!waiting.empty()) {
        int current = waiting.front();
        waiting.pop();

        cout << current << " ";

        for (int next : graph[current]) {
            if (!visited[next]) {
                visited[next] = true;
                waiting.push(next);
            }
        }
    }
}

void dfsRecursive(
    const vector<vector<int>>& graph,
    int current,
    vector<bool>& visited
) {
    visited[current] = true;
    cout << current << " ";

    for (int next : graph[current]) {
        if (!visited[next]) {
            dfsRecursive(
                graph,
                next,
                visited
            );
        }
    }
}

void dfs(
    const vector<vector<int>>& graph,
    int start
) {
    vector<bool> visited(
        graph.size(),
        false
    );

    dfsRecursive(
        graph,
        start,
        visited
    );
}

int main() {
    vector<vector<int>> graph(6);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 5);

    cout << "BFS 방문 순서: ";
    bfs(graph, 0);

    cout << endl;

    cout << "DFS 방문 순서: ";
    dfs(graph, 0);

    return 0;
}
