set(CMAKE_CXX_FLAGS "-fopenmp -O3 -march=native -flto")
add_library(apsp_hjy_and_rarocat SHARED)
target_sources(apsp_hjy_and_rarocat PRIVATE apsp.cc)
