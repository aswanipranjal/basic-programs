#include<stdio.h>

int exor(int a, int b)
{
	return !(!(!a|!b)|!(a|b)); //using boolian logic used for XOR logic gate
}

int *half_subtractor(int a, int b)
{
	int *arr = malloc(sizeof(int)*2);
	int diff, borrow;
	diff= exor(a,b); //difference
	borrow= !a&b; //borrow
	*(arr+0) =diff;
	*(arr+1) = borrow; 
	return arr;
}

int *full_subtractor(int x, int y, int z)
{
	int temp, diff, borrow;
	int *arr = malloc(sizeof(int)*2);
	temp = exor(x,y);
	diff = exor(temp,z);
	borrow = (!x&y)|(z&!temp);
	*(arr+0) = diff;
	*(arr+1) = borrow;
	return arr;
}

int main()
{
	int *nope;
	printf("HALF ADDER:\n");
	printf("a\tb\tdiff\tborrow\n");
	nope = half_subtractor(0,0);
	printf("0\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope =half_subtractor(0,1);
	printf("0\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope =half_subtractor(1,0);
	printf("1\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope =half_subtractor(1,1);
	printf("1\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	printf("\n\n");
	printf("FULL ADDER:\n");
	printf("a\tb\tc\tdiff\tborrow\n");
	nope = full_subtractor(0,0,0);
	printf("0\t0\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(0,0,1);
	printf("0\t0\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(0,1,0);
	printf("0\t1\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(0,1,1);
	printf("0\t1\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(1,0,0);
	printf("1\t0\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(1,0,1);
	printf("1\t0\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(1,1,0);
	printf("1\t1\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_subtractor(1,1,1);
	printf("1\t1\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	return 0;
}