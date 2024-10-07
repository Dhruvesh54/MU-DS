#include <iostream>
#define n 10
using namespace std;

int top = 0;
int st[n];

int st_push(int);
int st_pop();
// int st_peep(int);
// int st_change(int, int);
void st_display();

int main()
{
    int ch, x, ind, rpindex, rpvalue;
    char con;
    do
    {
        cout << "Press 1 for Push\n";
        cout << "Press 2 for Pop\n";
        // cout << "Press 3 for Peep\n";
        // cout << "Press 4 for Change\n";
        // cout << "Press 5 for Display\n";
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
        // case 3:
        // {
        //     cout << "Enter index you want to fetch\n";
        //     cin >> ind;
        //     st_peep(ind);
        //     break;
        // }
        // case 4:
        // {
        //     cout << "Enter index you want to replace\n";
        //     cin >> rpindex;
        //     cout << "Enter value you want to replace\n";
        //     cin >> rpvalue;
        //     st_change(rpindex, rpvalue);
        //     break;
        // }
        // case 5:
        // {
        //     st_display();
        //     break;
        // }
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

// int st_peep(int ind)
// {
//     if (top - ind + 1 <= 0)
//     {
//         cout << "Underflow on stack \n";
//         return 0;
//     }
//     cout << ind << "th element from top of stack is " << st[top - ind + 1] << "\n";
//     st_display();
//     return 0;
// }

// int st_change(int ind, int replac)
// {
//     if (top - ind + 1 <= 0)
//     {
//         cout << "Underflow on stack \n";
//         return 0;
//     }
//     st[top - ind + 1] = replac;
//     cout << ind << "th element from top of stack is " << st[top - ind + 1] << "\n";
//     st_display();
//     return 0;
// }

void st_display()
{
    for (int i = 1; i <= top; i++)
    {
        cout << i << "th element from stack is " << st[i] << "\n";
    }
}
