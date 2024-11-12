int shPyFIS0Or;
char Ml35ZDHpKa [(1411 - 411)];
char JIJ9tQpBy0 [(193 - 93)];
int aIV8AEOGKH7 [(739 - 639)];
int qwWgXC = (560 - 560);

int wqVfCna (int xDcfg8) {
    if (xDcfg8 == shPyFIS0Or)
        return (176 - 176);
    if (Ml35ZDHpKa[xDcfg8] == '(') {
        qwWgXC = qwWgXC + (800 - 799);
        JIJ9tQpBy0[xDcfg8] = '$';
        aIV8AEOGKH7[qwWgXC] = xDcfg8;
    }
    if (Ml35ZDHpKa[xDcfg8] == ')') {
        if (qwWgXC == (273 - 273)) {
            JIJ9tQpBy0[xDcfg8] = '?';
        }
        if (qwWgXC != (753 - 753)) {
            JIJ9tQpBy0[aIV8AEOGKH7[qwWgXC]] = ' ';
            qwWgXC = qwWgXC - (141 - 140);
            JIJ9tQpBy0[xDcfg8] = ' ';
        };
    }
    if (Ml35ZDHpKa[xDcfg8] != '(' && Ml35ZDHpKa[xDcfg8] != ')') {
        JIJ9tQpBy0[xDcfg8] = ' ';
    }
    wqVfCna (xDcfg8 + (258 - 257));
}

int main (int pH27Qmn1U, const  char *PtDSHB []) {
    int gv0op5khGwi;
    int cZvnz7Cs5kpq;
    int oEfAlNHdy;
    while (cin.getline (Ml35ZDHpKa, (770 - 570))) {
        qwWgXC = (610 - 610);
        shPyFIS0Or = strlen (Ml35ZDHpKa);
        {
            gv0op5khGwi = 145 - 145;
            while (gv0op5khGwi < shPyFIS0Or) {
                cout << Ml35ZDHpKa[gv0op5khGwi];
                gv0op5khGwi = gv0op5khGwi + 1;
            };
        }
        wqVfCna ((38 - 38));
        cout << endl;
        {
            oEfAlNHdy = 475 - 475;
            while (oEfAlNHdy < shPyFIS0Or) {
                cout << JIJ9tQpBy0[oEfAlNHdy];
                oEfAlNHdy++;
            };
        }
        cout << endl;
    };
}

