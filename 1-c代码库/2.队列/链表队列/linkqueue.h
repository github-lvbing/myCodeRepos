#ifndef _QUEUE_H_
#define _QUEUE_H_


#include <stdio.h>
#include <stdlib.h>

typedef int data_t;

//节点的类型
typedef struct linknode{
	data_t data;
	struct linknode *next;
}linklist_t;

//队列的数据类型
typedef struct{
	linklist_t *front; 			//front：指向队头的地址
	linklist_t *rear; 			//rear ：指向队尾的地址
}linkqueue_t; 					//类型名


//创建一个空队
linkqueue_t *linkqueue_create();
//入队(尾插法)
int linkqueue_input(linkqueue_t *queue, data_t value);
int linkqueue_is_empty(linkqueue_t *queue);
//出队（头删法）
int linkqueue_output(linkqueue_t *queue);

#endif


