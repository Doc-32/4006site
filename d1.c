#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
int ar[4];
scanf("%d %d %d %d",&ar[0],&ar[1],&ar[2],&ar[3]);
int b = (ar[0]>ar[1]?ar[0]:ar[1]);
int i = (ar[2]>ar[3]?ar[2]:ar[3]);
int c = i+b;
if(c<ar[0]+ar[1] || c<ar[3]+ar[2])printf("NO\n");
else printf("YES\n");
}

}