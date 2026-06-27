#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Queue Size: ";
    cin >> size;

    int arr[size];
    int front = -1;
    int rear = -1;

    int choice;

    do
    {
        cout << "\n\n===== QUEUE MENU =====";
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Front";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // Enqueue
                if(rear == size - 1)
                {
                    cout << "Queue Overflow";
                }
                else
                {
                    if(front == -1)
                    {
                        front = 0;
                    }

                    rear++;
                    cout << "Enter element: ";
                    cin >> arr[rear];

                    cout << "Element Inserted Successfully";
                }
                break;

            case 2:
                // Dequeue
                if(front == -1)
                {
                    cout << "Queue Underflow";
                }
                else
                {
                    cout << "Deleted Element: " << arr[front];

                    front++;

                    if(front > rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                }
                break;

            case 3:
                // Front
                if(front == -1)
                {
                    cout << "Queue is Empty";
                }
                else
                {
                    cout << "Front Element: " << arr[front];
                }
                break;

            case 4:
                // Display
                if(front == -1)
                {
                    cout << "Queue is Empty";
                }
                else
                {
                    cout << "Queue Elements: ";

                    for(int i = front; i <= rear; i++)
                    {
                        cout << arr[i] << " ";
                    }
                }
                break;

            case 5:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    }while(choice != 5);

    return 0;
}