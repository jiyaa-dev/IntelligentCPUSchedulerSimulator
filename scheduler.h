#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process_manager.h"

// Scheduling algorithm declarations
void FCFS_Scheduling(Process processes[], int n);
void SJF_Scheduling(Process processes[], int n);
void RoundRobin_Scheduling(Process processes[], int n, int quantum);
void Priority_Scheduling(Process processes[], int n);

#endif