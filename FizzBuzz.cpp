#include <MyInclude.h>


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
