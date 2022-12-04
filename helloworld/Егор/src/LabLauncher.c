#define _CRT_SECURE_NO_WARNINGS
//#pragma warning (disable:4996)

#include <stdio.h>
#include <string.h>

#include "Lab0110.h"
#include "Lab0116.h"
#include "Lab0117.h"
#include "Lab0118.h"
#include "Lab0119.h"
#include "Lab0201.h"
#include "Lab0202.h"
#include "Lab0301.h"
#include "Lab0302.h"
#include "Lab0401.h"
#include "Lab0402.h"
#include "Lab0403.h"
#include "Lab0500.h"
#include "Lab0600.h"
#include "Lab0701.h"
#include "Lab0702.h"

int main() {
	printf("Enter the lab number to launch:\n");
	printf(">> Lab0110\n");
	printf(">> Lab0116\n");
	printf(">> Lab0117\n");
	printf(">> Lab0118\n");
	printf(">> Lab0119\n");
	printf(">> Lab0201\n");
	printf(">> Lab0202\n");
	printf(">> Lab0301\n");
	printf(">> Lab0302\n");
	printf(">> Lab0401\n");
	printf(">> Lab0402\n");
	printf(">> Lab0403\n");
	printf(">> Lab0500\n");
	printf(">> Lab0600\n");
	printf(">> Lab0701\n");
	printf(">> Lab0702\n");

	char name[255];

	for (;;) {
		scanf("%s", name);
		fflush(stdin);
		if (strcmp(name, "0110") == 0) {
			launchLab0110();
		} else if (strcmp(name, "0116") == 0) {
			launchLab0116();
		} else if (strcmp(name, "0117") == 0) {
			launchLab0117();
		} else if (strcmp(name, "0118") == 0) {
			launchLab0118();
		} else if (strcmp(name, "0119") == 0) {
			launchLab0119();
		} else if (strcmp(name, "0201") == 0) {
			launchLab0201();
		} else if (strcmp(name, "0202") == 0) {
			launchLab0202();
		} else if (strcmp(name, "0301") == 0) {
			launchLab0301();
		} else if (strcmp(name, "0302") == 0) {
			launchLab0302();
		} else if (strcmp(name, "0401") == 0) {
			launchLab0401();
		} else if (strcmp(name, "0402") == 0) {
			launchLab0402();
		} else if (strcmp(name, "0403") == 0) {
			launchLab0403();
		} else if (strcmp(name, "0500") == 0) {
			launchLab0500();
		} else if (strcmp(name, "0600") == 0) {
			launchLab0600();
		} else if (strcmp(name, "0701") == 0) {
			launchLab0701();
		} else if (strcmp(name, "0702") == 0) {
			launchLab0702();
		} else if (strcmp(name, "exit") == 0) {
			break;
		}
	}
	return 0;
}
