#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct node {
 	struct node *prev;
 	int info;
 	struct node *link;
 } *start;
 
 void create_list(int data);
 void addatbeg(int data);
 void addafter(int data,int pos);
 void addlast(int data);
 void search(int data);
 
  void main()  {
  	clrscr();
  	int choice,n,m,position,i;
  	start=NULL;
  	while (1) {
  		printf("\n 1. Create list: ");
  		printf("\n 2. Add at begining: ");
  		printf("\n 3. Add after: ");
  		printf("\n 4. Add last: ");
  		printf("\n 5. Deletion: ");
  		printf("\n 6. Display: ");
  		printf("\n 7. Search: ");
  		printf("\n 8. Quit: ");
  		
  		printf("\n Enter the preferred choice: ");
  		scanf("%d",&choice);
	  }
	  
	  switch (choice)  {
	  	case 1: printf("\n How many node you want");
	  	scanf("%d",&n);
	  	 for(i=0;i<n;i++) {
	  	 	printf("\n Enter the elements: ");
	  	 	scanf("%d",m);
	  	 	void create_list(m);
		   }
		   break;
	  }
	  
	    case 2: printf("\n Enter the elements: ");
	    		scanf("%d",&m);
	    		addatbeg(m);
	    		break;
	    																	
	    case 3: printf("\n Enter the elements: ");
	    		scanf("%d",&m);
	    		printf("\n Enter the position after which this element is entered: ");
	    		scanf("%d",&position);
	    		addafter(m,position);
	    		break;
	    		
	    case 4: printf("\n Enter the element: ");
	    		scanf("%d",&m);
	    		addlast(m);
	    		break;
	    		
	    case 5: if(start==NULL) {
	    	     printf("\n List is empty\n");
	    	     continue;
		        }
		        printf("\n Enter the element for deletion: ");
		        scanf("%d",&m);
		        del(m);
		        break;
		        
		case 6: display();
				break;
				
		case 7: printf("\n Enter the element to be searched: ");
				scanf("%d",&m);
				seach(m);
				break;
				
		case 8: exit(0);
		
		 default: printf("\n Wrong choice");
  }
  
  
  
  
  
      void create_list(int data)  {
      	struct node *q, *temp;
      	temp = (struct node *) malloc(sizeof(struct node));
      	temp->info=date;
      	temp->link=NULL;
      	if(start==NUll) {
      		start=temp;
		  }
		  else {
		  	q=start;
		  	while(q->link!=NULL) {
		  		q=q->link;
			  }
			  q->link=temp;
		  }
	  }
	  
	  void addatbeg(int data) {
	  	struct node *temp;
	  	temp = (node *) malloc(sizeof(struct node));
	  	temp->info=data;
	  	temp->link=start;
	  	start->prev =temp;
	  	start=temp;
	  }
	  
	  void addafter(int data,int pos) {
	  	struct node *temp, *q;
	  	int i;
	  	q=start;
	  	 for(i=0;i<pos-1;i++) {
	  	 	q=q->link;
	  	 	 if(q==NULL) {
	  	 	 	printf("\n There is less %d elements",pos);
				}
		   }
		   temp = (node*) malloc(sizeof(struct node));
		   temp->link=q->link;
		   temp->info=data;
		   q->link=tmep;
	  }
	  
	  void addlast(int data) {
	  	struct node*temp, *q;
	  	q=start;
	  	 while(q->link!=NULL) {
	  	 	q=q->link;
		   }
		   temp = (struct node*) malloc(sizeof(node));
		   temp ->info=data;
		   temp ->link=NULL;
		   q->link=temp;
		   temp->prev=q;
	  }
	  
	  void del(int data) {
	  	struct node *temp, *q;
	  	if(start->info==data) {
	  		temp=start;
	  		start=start->link;
	  		free(temp); 
	  		return;
		  }
		  q=start;
		   while(q->link!=NULL) {
		   	if(q->link->info==data) {
		   		temp=q->link;
		   		q->link=temp->link;
		   		temp->link->prev=q;
		   		free(temp); 
		   		return;
			   }
			   q=q->link;
		   }
		   if(q->link->info==data) {
		   	temp=q->link;
		   	free(temp); 
		   	q->link==NULL;
		   	return;
		   }
		   printf("\n Entered %d not found",data);
	  }
	  
	  void display() {
	  	struct node *q;
	  	if(start==NULL) {
	  		printf("\n List is empty");
		  }
		  else {
		  	q=start;
		  	 while(q!=NULL) {
		  	 	printf("%d",q->info);
		  	 	q=q->link;
			   }
			   printf("\n");
		  }
	  }
	  
	  void search(int data) {
	  	struct node *ptr=start;
	  	int pos=1;
	  	while(ptr!=NULL) {
	  		if(ptr->info==data) {
	  			printf("Item is found %d",data);
	  			return;
			  }
			  ptr=ptr->link;
			  pos++;
		  }
		  if(ptr==NULL) {
		  	
		  }
	  }
