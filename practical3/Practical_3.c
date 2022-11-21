#include<stdio.h>
#include<math.h>

int main(void){
	
	int N=12, i;
	float a=0.0 , b_deg=60.0;
	float b_rad , area, mult_rad;
	
	/*Convert b_degree to radian*/
	
	b_rad=(M_PI * b_deg)/180;
	printf(" pi/3 in radians : %f \n", b_rad);
	
	// Sum tan(a) + tan(b) 
	
	area= tan(a) + tan(b_rad);
	
	//for loop increments 60/12 = 5 
	for(i=5 ; i<60 ; i=i+5){
	
	/* calculate the area at pts x1,x2,....,x11 
	   by multiplying by 2
	*/	
		area=area + 2*tan((M_PI*i)/180.0);
		
	}
	
	//Multiply partial area by (pi/3)/(2*12)
	//Convert to radians first
	
	mult_rad=(M_PI*(b_deg)/(2*N))/180.0;
	area=mult_rad*area;
	
	printf("Approximated : %f , Exact : %f \n" , area, log(2.0));
	
	
	return 0;
	
}
