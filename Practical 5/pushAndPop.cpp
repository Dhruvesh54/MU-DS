#include <iostream>
#define n 10
using namespace std;

int top = 0;
int st[n];

int st_push(int);
int st_pop();
void st_display();

int main()
{
    int ch, x, ind, rpindex, rpvalue;
    char con;
    do
    {
        cout << "Press 1 for Push\n";
        cout << "Press 2 for Pop\n";\
        cout << "Enter your choice::\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "Enter Element you want to insert\n";
            cin >> x;
            st_push(x);
            break;
        }
        case 2:
        {
            st_pop();
            break;
        }
        default:
        {
            cout << "Enter valid choice\n";
        }
        }

        cout << "Do you want to continue (y/n)?\n";
        cin >> con;
    } while (con == 'y');
    
    return 0;
}

int st_push(int x)
{
    if (top >= n)
    {
        cout << "Overflow on stack \n";
        return 0;
    }
    top++;
    st[top] = x;
    cout << "The new top value is " << top << "\n";
    st_display();
    return 0;
}

int st_pop()
{
    if (top <= 0)
    {
        cout << "Underflow on stack \n";
        return 0;
    }
    cout << "Element deleted from stack is " << st[top] << "\n";
    top = top - 1;
    st_display();
    return 0;
}

void st_display()
{
    for (int i = 1; i <= top; i++)
    {
        cout << i << "th element from stack is " << st[i] << "\n";
    }
}
