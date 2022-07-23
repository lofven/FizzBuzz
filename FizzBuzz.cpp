/**  Bunch of libs we use frquently  **/
#include <stdio.h>              /*  Usual suspects          */
#include <iostream>

#include <math.h>
#include <time.h>               /*  Read clock              */

#include <vector>
#include <string>
#include <cstring>              /*  Allow strcpy etc        */
#include <sstream>              /*  Stream to string        */
#include <fstream>              /*  File-handling           */

#include <chrono>               /*  Sleep for <time>        */
#include <thread>               /*  Multithread, sleep_for   */
#include <typeinfo>             /*  Dubugging, typeid       */


/**  Mostly we work here  **/
using namespace std;


/**  Shortcuts  **/
#define ULL unsigned long long
#define noop                                                        /*  No-op "function"                                    */
#define NL "\n"                                                     /*  Stringify output                                    */
const string    nl              = "\n";                             /*  Stringify output                                    */



string checkFizz (unsigned riff) {
    bool fizz=false;
    bool buzz=false;
    bool fizzbuzz=false;

    string note = to_string (riff);
    string chord = note;

    if (riff%3==0) {
        fizz = true;
        chord = note + "\tfizz";
    }

    if (riff%5==0) {
        buzz = true;
        chord = note + "\tbuzz";
    }

    if ( fizz && buzz ) {
        fizzbuzz = true;
        chord = note + "\tfizzbuzz";
    }

    return chord;
}




int main (int argc, char* argv[]) {

    string choir = "";

    for (int i=100000; i < 110000; i++) {
        string choir = checkFizz(i);
        cout << choir << nl;
    }

    return 0;
}
