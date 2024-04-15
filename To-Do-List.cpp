#include<iostream>
#include<string>
using namespace std;

void Add(string Task[], int& n);
void Delete(string Task[], int& n);
void MarkStatus(string Task[], int n);

int main() {
    int n, choice;
    string Task[300];

    cout<<"Enter the number of tasks you want to perform for the To-Do list: ";
    cin>>n;
    cin.ignore();

    cout<<"Please enter your tasks in phrases/chunks..."<<endl;
    for(int i = 0; i < n; i++) {
        cout<<"Enter your Task no. "<<i + 1<<": ";
        getline(cin, Task[i]);
        cout<<endl;
    }

    cout<<"* * * To-Do List * * * "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Task no. "<<i + 1<<": "<<Task[i]<<endl;
        
    }
    abc:
    cout<<"* * * * * * * * * * * * * *"<<endl;
    cout<<"To Add a new task Press 1\n";
    cout<<"To delete a task Press 2\n";
    cout<<"To mark task status Press 3\n";
    cout<<"To Quit the program press 4\n";
    cout<<"* * * * * * * * * * * * * *"<<endl;

    cin>>choice;
    switch (choice) {
    case 1:
        Add(Task, n);
        goto abc;
        break;
    case 2:
        Delete(Task, n);
        goto abc;
        break;
    case 3:
        MarkStatus(Task, n);
        goto abc;
        break;
        case 4:
        return 0;
    default:
        cout<<"Please enter a valid choice..."<<endl;
        goto  abc;
        break;
    }

    return 0;
}

void Add(string Task[], int& n) {
    int additionalTasks;
    cout<<"Enter the number of additional tasks: ";
    cin>>additionalTasks;
    cin.ignore();

    cout<<"Please enter your tasks in phrases/chunks..."<<endl;
    for (int i = n; i < n + additionalTasks; i++) {
        cout<<"Enter your Task no. "<<i + 1<<": ";
        getline(cin, Task[i]);
        cout<<endl;
    }
    n += additionalTasks; 
    cout<<"* * * Updated To-Do List * * * "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Task no. "<<i + 1<<": "<<Task[i]<<endl;
    }
    
}

void Delete(string Task[], int& n) {
    int taskNumber;
    cout<<"Enter the task number you want to delete: ";
    cin>>taskNumber;

    if (taskNumber < 1 || taskNumber > n) {
        cout<<"Invalid task number."<<endl;
        return;
    }

    for (int i = taskNumber - 1; i < n - 1; i++) {
        Task[i] = Task[i + 1];
    }
    n--; 
    cout<<"Task " << taskNumber<<" deleted successfully."<<endl;
}

void MarkStatus(string Task[], int n) {
    int taskNumber;
    char status;
    cout<<"Enter the task number you want to mark status for: ";
    cin>>taskNumber;

    if (taskNumber<1||taskNumber>n) {
        cout<<"Invalid task number."<<endl;
        return;
    }

    cout<<"Enter status (C for completed, P for pending): ";
    cin>>status;

    if (status == 'C' || status == 'c') {
        Task[taskNumber - 1] += " (Completed)";
        cout<<"Task "<<taskNumber<<" marked as completed."<<endl;
    } else if (status == 'P' || status == 'p') {
        Task[taskNumber - 1] += " (Pending)";
        cout<<"Task "<<taskNumber<<" marked as pending."<<endl;
    } else {
        cout<<"Invalid status."<<endl;
    }
}
