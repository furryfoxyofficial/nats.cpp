#include <iostream>
using namespace std;

#include "natsSystem.h"

/*
 * file struct is:
 * [mainSettings]
 * Ip:127.0.0.1
 * Port:9080
 *
 * [Set]
 * option:value
 */

int main()
{
    // Header of project is here
    cout << "Hello NATS!\n" << "\nThis is furry foxy official version \
    \nproject of nats.io" << endl;

    natsSystem *nts = new natsSystem;
    nts->initiationSystem();
    delete nts;
}
