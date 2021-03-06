/****************************************************************************************************************
Implement the following three functions:
1) PTR Add_Node_List(PTR list, player ps)
2) int Best_Team(player tp[], int np, player team[])
3) player Read_Player_Info(player q)
Please read the comments inside the functions for details regarding their functionality.
The following utility function is given to you that can be used for testing:
void Print_List(PTR list)
Note:
1) You have to upload only the three functions implementations in the appropriate boxes on uploading site.
2) You are not suppose to modify any of the structure and typedefinitions given in the question.
3) You can assume all user inputs (where ever applicable) are valid and correct.
**************************************************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef enum {GL=1,DD,KKR,SRH,RPS,MI,KXIP,RCB,WORLDTEAM} team_name;
typedef enum {ROHIT=1,PRAVEEN,DHONI,SMITH,RAINA,GAUTI} player_name;
typedef int match_played;
typedef int highest_score;

typedef struct {
player_name pname;
team_name tname;
match_played mp;
highest_score hs;
} player;

struct node;
typedef struct node NODE;
typedef  NODE* PTR;
struct node {
player p;
PTR link;
};

PTR Add_Node_List(PTR list, player ps) {
/*This function inserts a new node (with player ps in it) in the list if the highest_score of the player ps is greater than atleast one of the existing players highest_score in the list.
The new node should be inserted in the list such that all the nodes in the list are in increasing order with respect to the match_played by the players.     MAX MARKS[30]
This function will have partial marking*/




}
int Best_Team(player tp[], int np, player team[]) {
/* A player is a star player if he has played more than 100 matches and his highest score is greater than and equal to 100.
This function finds and copies all the star players from tp[] to team[]. The tp[] contains np number of players.
Change the team name for every star player in team[] to WORLDTEAM (as defined at the top in team_name).
The function returns the number of players that had been copied from tp[] to team[].    MAX MARKS[12.5]
This function has binary grading (either 0 or 12.5M) */




}

player Read_Player_Info(player q) {
/* This function takes the details of player q as user input and returns the player q.
Read the details in the following order: player name, team name, match played, and highest score. MAX MARKS[10]
This function has binary grading (either 0 or 10M) */


}


void Print_List(PTR list) {
PTR t;
t=list;
while(t!= NULL) {
printf("(%d %d %d %d)-->",t->p.pname,t->p.tname, t->p.mp, t->p.hs);
t=t->link;
}
printf("NULL");
}

int main() {
/* Here you can declare appropriate variables, do initializations and function calls to test your function implementations */


}