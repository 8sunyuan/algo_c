// =============================================================
// Preorder traversal sequence : (root, left, right)
// Inorder traversal sequence  : (left, root, right)
// Postorder traversal sequence: (left, right, root)
// =============================================================

# include <stdio.h>
# include <stdlib.h>

#define maxN 100

const int M = 4;
int H[] = {15, 7, 3, 1};

// Just like playing poker cards sorted them on the way of picking up new cards
void indexarrayshell(int a[], int p[], int n)
{
	int i;
	int j;
	int m;
	int h;
	int move = 0;
	int total = 0;
	int temp;
	
	printf("\nYou entered N = %d elements\n", n);
	
	// a[] array current order
	for (i = 0; i < n; i++)
	{
		p[i] = i;
	}
	
	for (m = 0; m < M; m++)
	{
		h = H[m];
		move = 0;
	
		for (i = h; i < n; i++)
		{
			temp = p[i];
			
			// j is back checking the sorted poker cards in your hand
			for (j = i; j >= h; j-=h)
			{
				if ( a[p[j-h]] > a[temp])
				{
					p[j] = p[j-h];
					move++;
				}
				else
					break;
			}
			p[j] = temp;
		}
		printf("\n\n Movements = %d for h = %d \n\n", move, h);
		total = total + move;
	}
	
	printf("\n\n Total_Movements  = %d \n", total);
	return;
}

void main() 
{
	int n  = 0;
	int i = 0;
	int a[maxN];
	int p[maxN];
	
	printf("Michael Sun: Hello World! Please enter a number, then return \n\n");
	// get the input integers into array a[]
	while (scanf("%d", &a[n]) != EOF)
	{
		printf("Please enter another number or end with ctrl-D\n");
		n++;
	}
	
	// sort the arrary a[]
	indexarrayshell(a, p, n);
	
	printf("\n\nHere is your sorted list by method of indexarray sort\n\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[p[i]]);
	}
	printf("\n");
}

