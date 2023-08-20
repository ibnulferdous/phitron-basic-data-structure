#include <bits/stdc++.h>

using namespace std;

class Student 
{
    public:
        string name;
        int roll;
        int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
    public:
        bool operator() (Student a, Student b)
        {
            if (a.marks < b.marks) return true;
            else if (a.marks == b.marks)
            {
                if (a.roll > b.roll) return true;
                else return false;
            }
            else return false;
        }
};

int main()
{
    priority_queue< Student, vector<Student>, cmp > pq;

    string name;
    int roll, marks;

    int t, q;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        cin>>name>>roll>>marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    cin>>q;

    while (q > 0)
    {
        int command;
        cin>>command;
        
        if (command == 0)
        {
            cin>>name>>roll>>marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if (command == 1)
        {
            if (!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
        else if (command == 2)
        {
            if (!pq.empty()) pq.pop();

            if (!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }

        q--;
    }

    return 0;
}
