#include <iostream>

using namespace std;

class node
{
    public:
        char data;
        node *next;

        node(char x)
        {
            data = x;
            next = NULL;
        }
};

class LinkedList
{
    public:
        node *head;

        LinkedList()
        {
            head = NULL;
        }

        bool isEmpty()
        {
            return head == NULL;
        }

        void printList()
        {
            node *ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
        }

        void addAtFront(node *n)
        {
            n->next = head;
            head = n;
        }

        void addAtEnd(node *n)
        {
            if (head == NULL)
            {
                head = n;
                n->next = NULL;
            }
            else
            {
                node *lastNode = getLastNode();
                lastNode->next = n;
            }
        }

        node* getLastNode()
        {
            node* ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            return ptr;
        }

        // Mengembalikan urutan posisi pertama kali ditemukannya x di dalam list, -1 jika x tidak ada di dalam list
        int getPositionX(char x)
        {
            int pos = -1;

            // Implement here
            node* ptr = head;
			while (ptr!= NULL){
				pos++;
				if (ptr->data == x){  //dicek apakah pointer sudah sama dengan yang kita cari
					
					return pos;
				} else{
				
					ptr = ptr->next;
				}
			}
			
            return -1;
        }
};

int main()
{
    // Inisialisasi linked list L
    LinkedList L;

    // Buat node dengan karakter nama Anda
	node *n1 = new node('m');
	node *n2 = new node('i');
	node *n3 = new node('f');
	node *n4 = new node('t');
	node *n5 = new node('a');


    // Panggil AddAtEnd untuk setiap node karakter yang dibuat
	L.addAtEnd(n1);
	L.addAtEnd(n2);
	L.addAtEnd(n3);
	L.addAtEnd(n4);
	L.addAtEnd(n5);

    L.printList();
    cout << endl;

    // Buat node lain berisi karakter
	node *n6 = new node('8');
	node *n7 = new node('1');
	node *n8 = new node('i');
	node *n9 = new node('s');

    // Panggil AddAtFront untuk setiap node karakter yang dibuat
	L.addAtFront(n6);
	L.addAtFront(n7);
	L.addAtFront(n8);
	L.addAtFront(n9);
	
   L.printList();
   cout << endl;

    // Contoh pemanggilan fungsi getPositionX
   cout << L.getPositionX('a') << endl;

    return 0;
}
