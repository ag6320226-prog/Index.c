import java.util.*;
class Node{
    int data;
    Node next;

    public Node(int data){
        this.data=data;
        this.next=null;
    }
}
public class Mylinkedlist{
    Node head;
    void insertbegning(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;

    }
    void insertAtend(int data){
        Node newNode =new Node(data);
        if(head==null){
            head=newNode;
        }
        Node temp=head;
        while(temp.next!=null){
            temp =temp.next;
        }
        temp.next=newNode;

        


    }
    void deletefirst(){
        if(head==null)
{
    System.out.println("list is empty");
}
else{
    head=head.next;


}



} 
void newNodeCreated(int data){
    Node newNode=new Node(data);
    if(head==null){
        head=newNode;
        return;
    }
    Node temp=head;
    while(temp.next!=null){
        temp=temp.next;

    }
    temp.next=newNode;

}       
    
    void display(){
        Node temp=head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
        System.out.println("null");

    }



    public static void main(String[] args) {
        Mylinkedlist l=new Mylinkedlist();

        l.insertbegning(10);
        l.insertbegning(20);
        l.insertbegning(25);
        l.insertbegning(35);
          
        l.insertAtend(40);
        l.deletefirst();
        l.newNodeCreated(80);
      l.display();
        l.newNodeCreated(80);
      
    }
}
