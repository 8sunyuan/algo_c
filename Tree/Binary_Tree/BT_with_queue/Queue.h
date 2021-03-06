#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

class Queue
{
	public:
	
		Queue();
		~Queue();
		
		void push(void * v);
		void * pop();
		void emptyQueue();
		int isEmpty();
		void showlist();
		
	private:
	
		linkedlist *pList;


};

#endif