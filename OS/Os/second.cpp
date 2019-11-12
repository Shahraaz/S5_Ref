#include<bits/stdc++.h>
#include<signal.h>
#include<sys/types.h>


using namespace std;

void signal_handler(int signum)
{
    cout << "Caught Signal " << signum << '\n';
}

int main()
{
    (void) signal(SIGINT,signal_handler);
    // while(true)
    // {
    //     printf("Hello World\n");
    // }
    return 0;
}
