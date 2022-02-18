/*
 * =====================================================================================
 *
 *       Filename:  graph.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22-02-18 01:14:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "gluethread/glthread.h"

#define NODE_NAME_SIZE      ( 16 )
#define IF_NAME_SIZE        ( 16 )
#define MAX_INTF_PER_NODE   ( 10 )

/*  forward declarations */
typedef struct node_ node_t;
typedef struct link_ link_t;


typedef struct interface_ {

    char if_name[IF_NAME_SIZE];
     struct node_ *att_node; // pointer to owner node ,
                            //  where this interface is connected
     struct link_ *link; //link for which this intrface is conected to
}interface_t;


struct link_ {
    interface_t intf1;
    interface_t intf2;
    unsigned int cost;

};

struct node_ {
  char node_name[NODE_NAME_SIZE];
  interface_t *intf[MAX_INTERF_PER_NODE];
  glthread_t graph_glue;

};

typedef struct graph_{

    char topology_name[ 32 ] ;
    glthread_t  node_list;


};







