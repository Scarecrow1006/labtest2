
/****************************************
 Implement the following three functions
 1) LINK InsertTwoNodesAfterPos(LINK start, university u1, university u2, int pos);
 2) void Sort(university * univ, int size);
 3) float Compute_Avg_Rank(LINK start);

 Please read the comments inside the functions for details regarding their purpose.
 You have to upload only the three function implementations in the appropriate boxes on uploading site.

 The following is a utility function given to you that can be used for testing.
 void print(LINK start);
 Note:
1) You have to upload only the three functions implementations in the appropriate boxes on uploading site.
2) You are not suppose to modify any of the structure and typedefinitions given in the question.
3) You can assume all user inputs (where ever applicable) are valid and correct.
 ****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct university;
typedef enum {TIER_I, TIER_II, TIER_III} tier_type;
typedef struct {
	char uname[35];
	int rank;
	tier_type tier;
} university;

struct node;
typedef struct node NODE;
typedef NODE * LINK;
struct node {
	university univ;
	LINK next;
};

/* Function Prototype Declarations */
LINK InsertTwoNodesAfterPos(LINK start, university u1, university u2, int pos);
void Sort(university * univ, int size);
float Compute_Avg_Rank(LINK start);

LINK InsertTwoNodesAfterPos(LINK start, university u1, university u2, int pos)
{
    /*  This function inserts two new nodes in the list whose first node is pointed by start in such a way that AFTER INSERTION the new nodes corresponding
	to university u1 and u2 are at positions pos+1 and pos+2 respectively.  Finally the function should return the address of the first node of the modified list.
	However if the nodes cannot be inserted at specified position, it should simply return the unmodified list. 
	You can assume that pos is always a nonnegative integer. [Example: If the list has 5 nodes and pos is 5, the new nodes will be inserted at positions 6 and 7. 
	If the list has 8 items and pos has a value of 10, the two nodes cannot be inserted.]  MAX_MARKS 30      This function will have some partial marking. */
	LINK trav=start;
	LINK prev=trav;
	int i;
	for (i=0; i<pos; i++){
		if(trav==NULL){
			return start;
		}
		prev=trav;
		trav=trav->next;
	}
	LINK cur1=(LINK) malloc(sizeof(NODE));
	LINK cur2=(LINK) malloc(sizeof(NODE));
	cur1->univ=u1;
	cur2->univ=u2;
	cur1->next=cur2;
	cur2->next=trav;
	prev->next=cur1;
	return start;
}

void Sort(university * univ, int size)
{
    /* This function takes array of type university and size (number of university)  as input arguments.
    The function sorts the array based on the tier_type, in the order: TIER_I, followed by TIER_II and then followed by TIER_III.  
	MAX_MARKS 12.5 This function has binary grading (either 0 or 12.5M) */
	int i,j;
	university temp;
	for (i=0; i<size; i++){
		for(j=0; j<size; j++){
			if((univ[j]).tier<univ[i].tier){
				temp=univ[j];
				univ[j]=univ[i];
				univ[i]=temp;
			}
		}
	}
}


float Compute_Avg_Rank(LINK start)
{
    /* This function takes a pointer to first node of the linked list as an argument.  The function computes and returns the average rank of TIER_I universities. 
	Assume there is at_least one TIER_I university in the linked list.
	MAX_MARKS 10  This function has binary grading (0 or 10). */
	int count=1;
	float sum=0, avg=0;
	LINK trav=start;
	while(trav->next!=NULL){
		sum=sum+(trav->univ).rank;
		count++;
		trav=trav->next;
	}
	avg=sum/count;
	return avg;
}

/* This is just a utility function that you can use for testing */
void print(LINK start)
{
    LINK tmp = start;
    while(tmp!= NULL)
    {
        printf("%s ", tmp->univ.uname);
        tmp=tmp->next;
    }
}

int main(void) {
    /* You can test your implementations from here*/
	LINK start=(LINK) malloc(sizeof(node));
	LINK trav=start;
	university u;
	strcpy(u.uname, "IITB")

    return 0;
}
