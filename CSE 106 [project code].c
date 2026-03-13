#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int addjacency_matrix[10000][10000];
int main() {
  int n, i, j, k, random_number, edges = 0, degree = 0;
  printf("\nEnter Number of Vertices: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      random_number = rand() % 2;
      addjacency_matrix[i][j] = random_number;
      addjacency_matrix[j][i] = random_number;
    }
  }
  // Determining number of edges in the graph
  int start = clock();
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      if ((addjacency_matrix[i][j] == 1) && (addjacency_matrix[j][i] == 1)) {
        edges++;
      }
    }
  }
  printf("Number of Edges in %d Vertices graph is : %d\n", n, edges);
  // Derermining Number of degree
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (addjacency_matrix[i][j] == 1) {
        degree++;
        if (i == j) {
          degree++;
        }
      }
    }
  }
  printf("Number of Degree in %d Vertices graph is : %d\n", n, degree);
  // Checking Handshaking Logic
  if ((2 * edges) == degree) {
    printf("2|E| = Total degree, So handshaking logic holds\n");
  }
  int end = clock();
  double time = (double)(end - start);
  time = time / CLOCKS_PER_SEC;
  printf("When n = %d Computational time is (in ms): %f", n, (time * 1000));
  return 0;
}
