#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()

{

	int queue[20],n,head,i,j,k,seek=0,max,diff,temp,queue1[20],queue2[20],
	
	temp1=0,temp2=0;
	
	float avg;
	
	printf("Enter The Max Range Of Disk\n");
	
	scanf("%d",&max);
	
	printf("Enter The Current Head Position\n");
	
	scanf("%d",&head);
	
	printf("Enter The Size Of Queue\n");
	
	scanf("%d",&n);
	
	printf("Enter The Queue Of Pending Requests in FIFO Order \n");
	
	for(i=1;i<=n;i++)
	
	{
	
		scanf("%d",&temp);
	
		if(temp>=head)
		
		{
		
			queue1[temp1]=temp;
			
			temp1++;
		
		}
		
		else
		
		{
		
			queue2[temp2]=temp;
			
			temp2++;
		
		}
	
	}
	
	for(i=0;i<temp1-1;i++)
	
	{
	
		for(j=i+1;j<temp1;j++)
		
		{
		
			if(queue1[i]>queue1[j])
			
			{
			
				temp=queue1[i];
				
				queue1[i]=queue1[j];
				
				queue1[j]=temp;
			
			}
		
		}
	
	}
	
	for(i=0;i<temp2-1;i++)
	
	{
	
		for(j=i+1;j<temp2;j++)
		
		{
		
			if(queue2[i]<queue2[j])
			
			{
			
				temp=queue2[i];
				
				queue2[i]=queue2[j];
				
				queue2[j]=temp;
			
			}
			
		}
	
	}
}
