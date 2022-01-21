#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//First fit
void * ff_malloc(size_t n);
void ff_free(void * ptr);
//Best_fit
void * bf_malloc(size_t n);
void bf_free(void * ptr);
//performance study report
unsigned long get_data_segment_size();             //in bytes
unsigned long get_data_segment_free_space_size();  //in bytes

struct Node_t {
  size_t size;
  struct Node_t * next;
  struct Node_t * pre;
};
typedef struct Node_t Node_t;
void * allocate_Mem(size_t size);
void * delete_Node(Node_t * Node);
void * split_Node(Node_t * Node, size_t n);
void merge_Free(Node_t * Node);
void insert_Node(Node_t * p);
