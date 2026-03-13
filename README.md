# undirected-graph-analysis-c
Random undirected graph generation using C with adjacency matrix and time complexity analysis (O(n²)).
# Random Undirected Graph Generation & Analysis (C)

## Project Overview
This mini project was developed for the **Discrete Mathematics (CSE106)** course.  
The goal of the project is to generate random undirected graphs using the **C programming language** and analyze their properties.

The graph is represented using an **Adjacency Matrix**, and several experiments are performed to observe how computation time changes as the number of vertices increases.

## Features
- Random generation of **undirected graphs**
- Graph representation using **Adjacency Matrix**
- Calculation of:
  - Number of edges
  - Vertex degrees
- Verification of the **Handshaking Theorem**
- Measurement of **computational time**
- Analysis of **time complexity**

## Experiment Setup
Graphs were generated with the following number of vertices:

| Vertices (n) | Computation Time (ms) |
|---------------|----------------------|
| 1000 | 25 |
| 2000 | 72 |
| 3000 | 165 |
| 4000 | 242 |
| 5000 | 435 |

The results show that computational time increases as the number of vertices increases.

## Time Complexity
The experimental results suggest that the algorithm follows:

O(n²)

This is expected because the **adjacency matrix requires checking n × n possible edges**.

## Technologies Used
- C Programming
- Adjacency Matrix Representation
- Basic Graph Theory Concepts

## Key Concept Verified
**Handshaking Theorem:**

Sum of all vertex degrees = 2 × Number of edges

## Conclusion
The project demonstrates that analyzing graphs using an adjacency matrix leads to **quadratic time complexity** as the number of vertices increases. While this method works for moderately large graphs, more efficient approaches may be required for very large networks.

## Team Members
- Md. Shafiur Alam
- Sadia Afrin
- **Esrat Jahan Jerin**

## Supervisor
Dr. Md. Mozammel Huq Azad Khan  
Professor, Department of CSE  
East West University
