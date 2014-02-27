#include <stdio.h>

//
// after sorting, array is increased
//

#define less(A,B) ((A) < (B))
#define cmp(A,B) if (less(A,B))
#define exchange(A,B) {int t = A; A = B; B = t;}
#define cmpexc(A,B) cmp(A,B) exchange(A,B)

void
sort(int array[], unsigned int n) {
	int i;
	int j;
	for (i=0; i<n; i++) {
		for (j=i; j<n; j++) {
			cmpexc(array[j], array[i])
		}
	}
}

int
main(void) {
	int ar[] = {8,1,5,2,4,3,7,12,32,14};

	sort(ar, 10);

	int i;
	for (i=0; i<10; i++)
		printf(" %d ", ar[i]);
	printf("\n");

	return 0;
}
