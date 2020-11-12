#include<math.h>
#include<cmath.h>

#define MAXLen 1000

int Flag_ARR[MAXLen];

void uinit()
{
	int i=0;
	for (i=0;i<MAXLen;i++)
	{
		Flag_ARR[i]=0;
	}
}
void SlectNode(int DemA, int DemB, double *Weight, int K, int *Res_ARR)
{
	int i=0;
	int j=0;
	int totalNode=K;
	uinit();
	int k=0;
	// the outer loop
	//
	double MaxTM=0;
	int indexi=0;
	int indexj=0;
	for (k=0;k<totalNode;k++)
	{
		MaxTM=0;
		indexi=0;
		indexj=0;
		for (i=0;i<DemA;i++)
		{
			if (Flag_ARR[i]>0) 
			{
				break;
			}
			for (j=0;j<DemB;j++)
			{
				if (MaxTM<Weight[i*DemB+j])
				{
					MaxTM=Weight[i*DemB+j];
					indexi=i;
					indexj=j;
				}
										
			}

		}
		Flag_ARR[indexi]=1;
	}
	for (i=0;i<DemA;i++)
	{
		Res_ARR[i]=FLag_ARR[i];
	}

}
