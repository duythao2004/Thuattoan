#include <stdio.h>
#include<math.h>

int main() {
	int a[100][100];
	int b[100][100];
	long long c[100][100];
	printf("Nhap vao 3 so n, m, p: ");
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	printf("Nhap ma tran A:\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Nhap ma tran B:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j ++ ) {
			c[i][j] = 0;
			for (int k = 0; k < m; k++) {
				c[i][j] += 1ll * a[i][k] * b[k][j];
			}
		}
	}
	printf("Ma tran A:\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran B:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran C:\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			printf("%lld ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}