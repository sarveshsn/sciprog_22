#include<stdio.h>
#include<math.h>

float deg_rad(float theta)
{
	return M_PI * theta/180 ;
}

float trap_rule(float a, float b, int N, float function_array[N+1])
{
	float sum = function_array[0] + function_array[N];
	int i=0;
	for(i=1; i<N; i++)
	{
		sum = sum + 2*function_array[i];	
	}
	return (b-a)*(sum) / (2*N);	 
}

int main(void)
{
	
	float start=0, end=60, step_size=5;
	int i, N=12;
	float tan_arr[N+1];
	
	for(i=0 ; i<=N ; i++)
	{
		tan_arr[i]=tan(deg_rad(step_size * i));
	}
	float ans= trap_rule(deg_rad(start), deg_rad(end), N, tan_arr);
	printf(" The answer is %f \n", ans);
	printf("The actual value is %f \n", logf(2));
	return 0;
	

	
}
