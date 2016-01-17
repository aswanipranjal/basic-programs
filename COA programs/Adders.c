#include<stdio.h>

int exor(int a, int b)
{
	return !(!(!a|!b)|!(a|b)); //using boolian logic used for XOR logic gate
}

int *half_adder(int a, int b)
{
	int *arr = malloc(sizeof(int)*2);
	int sum, carry;
	*(arr+0) = exor(a,b); //sum
	*(arr+1) = a&b; //carry
	return arr;
}

int *full_adder(int x, int y, int z)
{
	int temp, sum, carry;
	int *arr = malloc(sizeof(int)*2);
	temp = exor(x,y);
	sum = exor(temp,z);
	carry = (x & y)|(temp & z);
	*(arr+0) = sum;
	*(arr+1) = carry;
	return arr;
}

int main()
{
	int *nope;
	int sum, carry;
	printf("HALF ADDER:\n");
	printf("a\tb\tsum\tcarry\n");
	nope = half_adder(0,0);
	printf("0\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = half_adder(0,1);
	printf("0\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = half_adder(1,0);
	printf("1\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = half_adder(1,1);
	printf("1\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	printf("\n\n");
	printf("FULL ADDER:\n");
	printf("a\tb\tc\tsum\tcarry\n");
	nope = full_adder(0,0,0);
	printf("0\t0\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(0,0,1);
	printf("0\t0\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(0,1,0);
	printf("0\t1\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(0,1,1);
	printf("0\t1\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(1,0,0);
	printf("1\t0\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(1,0,1);
	printf("1\t0\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(1,1,0);
	printf("1\t1\t0\t%d  \t%d    \n",*(nope+0),*(nope+1));
	nope = full_adder(1,1,1);
	printf("1\t1\t1\t%d  \t%d    \n",*(nope+0),*(nope+1));
	return 0;
}