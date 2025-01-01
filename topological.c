#include<stdio.h>
#include<stdlib.h>
#define Max 100
int adj[Max][Max];
int in_degree [Max];
int i;
int num_vertex;
void add_edge (int u,int v){
adj[u][v]=1;
in_degree[v]++;
}
void topological_sort(){
int queue[Max],front=0,rear=0;
int topo_order[Max];
int visited_nodes=0;
for (int i=0;i<num_vertex;i++){
if(in_degree[i]==0){
queue[rear++]=i;}}
while(front<rear){
int node=queue[front++];
topo_order[visited_nodes++]==node;
for(int i=0;i<num_vertex;i++){
if(adj[node][1]){
in_degree[i]--;
if(in_degree[1]==0){
queue[rear++]=i;
}}}}
if(visited_nodes!=num_vertex){
printf("The graph has a cycle or in invalid for topological sorting");
}else
{
 printf("Topological sort order:");
 for(int i=0;i<num_vertex;i+=0){
 printf("%d",topo_order[i]);
 }
 printf("\n");
 }}
 int main(){
 int numedges,u,v;
 printf("enter the number of vertices:");
 scanf("%d",&num_vertex);
 for(int i=0;i<num_vertex;i++){
 for(int j=0;j<num_vertex;j++){
 adj[i][j]=0;
 }
 in_degree[i]=0;
 }
 printf("Enter the number of edges:");
 scanf("%d",&numedges);
 printf("enter edges (u,v):");
 for(i=0;i<numedges;i++){
 scanf("%d%d",&u,&v);
 add_edge(u,v);
 }
 topological_sort();
 return 0;
 }
