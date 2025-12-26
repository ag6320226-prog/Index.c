// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define null 0
// typedef struct node
// {
//   int data;
//    struct node *next;
// }node;
// node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
// *ntemp,*nttemp;

// void init()
// {
//  first=temp=ttemp=null;
// }
// void addnode(int val)
// {
//   temp=first;
//   while(temp->next!=null)
//   {
//   temp=temp->next;

//   }
//   ttemp=(node*)malloc(sizeof(node));
//   ttemp->data=val;
//   ttemp->next=null;
//   temp->next=ttemp;
// }
// void createfirst(int val)
// {
//  first=(node*)malloc (sizeof(node));
//   first->data=val;
//   first->next=null;
// }
// /*void reverse(node *p,node *q)
// {
// 	if(p!=null)
// 	{
// 		r=p->next;
// 		p->next=q;
// 		q=p;
// 		reverse(r,q);
		
// 	}
// 	first=q;
// }*/
// void disp()
// {
//  temp=first;
//  while(temp!=null)
//  {
//    printf("\n%d",temp->data);
//    temp=temp->next;
//  }
// }
// int main()
// {
//   int n,m;
//   char i;
//   printf("\nEnter data for first node :");
//   scanf("%d",&n);
//   createfirst(n);
//   printf("\nFirst Node Created :\n");
//   while(1)
//   {
//   printf("\nDo u Want to continue :");
//   scanf(" %c",&i);
//   if(i=='n' ||i=='N')
//   break;
//   printf("\n Enter Data for New Node :");
//   scanf("%d",&n);
//   addnode(n);

//   }
//   printf("\nThis Is Your Final List :");
//   disp();
//   temp=null;
//   //reverse(first,temp);
//   printf("\nThis Is Your Reversed List :");
//   disp();
// }
