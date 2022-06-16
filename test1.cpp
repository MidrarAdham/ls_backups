#include <sys/time.h>
#include <unistd.h>
#include <iostream>

using namespace std;
int main()
{

    int i = 0;
    timeval snap;
    timeval now;
    gettimeofday(&snap,NULL);
    int diff = 0;
    while (i<100){

        gettimeofday(&now,NULL);
        cout<<"now: "<<now.tv_sec<<" orig: "<<snap.tv_sec<<endl;
        diff = now.tv_sec  - snap.tv_sec;
        cout<<" cal: "<<diff<<" % 10 = "<<diff%10<<endl;

        sleep(1);
        i+=1;
    }

    return 0;
}
