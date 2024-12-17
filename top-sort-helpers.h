#pragma once

#include <unordered_map>

#include "weighted-graph.hpp"
#include "graph-types.h"

template <typename T>
void computeIndegrees(const WeightedGraph<T> &graph, std::unordered_map<value_type<T>, int> &indegrees)
{
    for (const auto &[vertex, neighbors] : graph)
    {
        indegrees[vertex] = 0;
    }

    for (const auto &[vertex, neighbors] : graph)
    {
        for (const auto &[adj_vertex, weight] : neighbors)
        {
            indegrees[adj_vertex]++;
        }
    }
}
