s
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

