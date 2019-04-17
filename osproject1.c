#include<stdio.h>
#include<stdlib.h>

int main()
{
	int p[5];
	int a[5];
	int q[5];
	int z[5],m,n,i,large,count=0,time;
	//m=process
	double ag=0,t=0,end;//ag= average waiting time
	printf("Enter the number of process =\n");
	scanf("%d",&i);
	printf("Enter Process Id =\n");
	for(m=0;m<i;m++);
		scanf("%d",&p[m]);
		printf("Enter Arrival Time= \n");//Taking Arrival time from user
	for(m=0;m<i;m++)
		scanf("%d",&p[m]);
		printf("Enter Burst Time= \n");//Taking Burst time from user
	for(m=0;m<i;m++)
		scanf("%d",&q[i]);
	for(m=0;m<i;m++)
		z[m]=q[m];
		q[4]=-999;
	for(time=0;count!=i;time++)
	{
		large=4;
			for(m=0;m<i;m++)
			{
				if(p[m]<=time && q[m]>q[large] && q[m]>0)
					large=m;
			}
		q[large]--;
		if(q[large]==0)
		{
			count++;
			end=time+1;
			ag=ag+end-p[large]-z[large];
			t=t+end-a[large];
		}	
	}
	for (i = 0; i < 3; i++) { 
        printf ("%d\t",p[i].processno ); 
        printf("%d\t",p[i].AT ); 
        printf( "%d\t",p[i].BTbackup);
        printf ("%d\t", p[i].CT ); 
        printf("%d\t", p[i].TAT ); 
        printf( "%d\n",p[i].WT );  
    } 
    printf( "Total TAT = %d\n" ,totalTAT); 
    printf( "Average TAT = %f\n" ,(totalTAT/4.0));
    printf("Total WT =%d \n",totalWT);
    printf( "Average WT = %f\n" ,(totalWT/4.0));
     
	printf("\n\n\n\n Average Waiting Time = %f\n",ag/n);
	printf("\n\n\n Average TurnAround Time =%f\n",t/n);
	return 0;
}
