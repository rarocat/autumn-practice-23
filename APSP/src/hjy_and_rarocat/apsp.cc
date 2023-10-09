#include "graph.hh"

Graph Graph::apsp() {
    Graph result_(*this);

    const int v = vertex_num_;
    int * const result = result_.Distance_;

    for (int k = 0; k < v; ++k) {
#pragma omp parallel for
        for (int i = 0; i < v; ++i) {
            for (int j = 0; j < v; ++j) {
                result[i * v + j] = std::min(result[i * v + j], result[i * v + k] + result[k * v + j]);
            }
        }
    }
    return result_;
}
