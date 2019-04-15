
#include<iostream>
using namespace std;

struct process
{
	char process_name;
	int arrival_time, burst_time, ct, waiting_time, turnaround_time, priority;
	int status;
}process_queue[10];

int limit;

void Arrival_Time_Sorting()
{
	struct process temp;
	int i, j;
	for(i = 0; i < limit - 1; i++)
	{
		for(j = i + 1; j < limit; j++)
		{
			if(process_queue[i].arrival_time > process_queue[j].arrival_time)
			{
				temp = process_queue[i];
				process_queue[i] = process_queue[j];
				process_queue[j] = temp;
			}
		}
	}
}

int main()
{
	int i, time = 0, burst_time = 0, largest;
	char c;
        float wait_time = 0, turnaround_time = 0, average_waiting_time, average_turnaround_time;
//	printf("\nEnter Total Number of Processes:\t");
 //	scanf("%d", &limit);
 	limit=4;
 	
 /*	for(i = 0, c = 'A'; i < limit; i++, c++)
 	{
 		process_queue[i].process_name = c;
		printf("\nEnter Details For Process[%C]:\n", process_queue[i].process_name);
		printf("Enter Arrival Time:\t");
		scanf("%d", &process_queue[i].arrival_time );
		printf("Enter Burst Time:\t");
		scanf("%d", &process_queue[i].burst_time);
		printf("Enter Priority:\t");
		scanf("%d", &process_queue[i].priority);
 		process_queue[i].status = 0;
 		burst_time = burst_time + process_queue[i].burst_time;
	}*/
	process_queue[1].arrival_time=4;
	process_queue[1].burst_time=2;
	burst_time = burst_time + process_queue[1].burst_time;
	process_queue[1].process_name='A';
	process_queue[2].process_name='B';
	process_queue[3].process_name='C';
	process_queue[4].process_name='D';
	process_queue[2].arrival_time=2;
	process_queue[1].status = 0;
	process_queue[2].status = 0;
	process_queue[3].status = 0;
	process_queue[4].status = 0;
	
	process_queue[2].burst_time=2;
	burst_time = burst_time + process_queue[2].burst_time;
	
	process_queue[3].arrival_time=3;
	process_queue[3].burst_time=3;
	burst_time = burst_time + process_queue[3].burst_time;
	
	process_queue[4].arrival_time=4;
	process_queue[4].burst_time=2;
	burst_time = burst_time + process_queue[4].burst_time;
	
	
