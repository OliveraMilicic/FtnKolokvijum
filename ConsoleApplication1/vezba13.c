// zadatak 8: Skalarni proizvod vektora
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

vezba13();

int n;
double a[50], b[50];

while (1) {
	printf("Unesite duzinu vektora: ");
	scanf_s("%d", &n);
	if (n < 0 || n>50) break;


	printf("Unesite komponente prvog vektora: ");
	for (int i = 0; i < n; i++) { 
		scanf_s("%lf", &a[i]);
	

	printf("Unesite komponente drugog vektora: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%lf", &b[i]);

	double sp = a * b;
	
}


	????????????????????????????????????????????????????????????????????????????????????????
return 0;