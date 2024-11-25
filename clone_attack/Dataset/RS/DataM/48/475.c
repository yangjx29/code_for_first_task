void  ajWOFsBI6N0b (int x, int Pu9EnqXlv, int n);
int IIbfrLFv9u [(783 - 774)] [(444 - 435)];
int o2cDi0ye [(408 - 399)] [(293 - 284)];

int main () {
    int qRx2qEZD7 = 0;
    int CFjU3x;
    int n;
    CFjU3x = (143 - 143);
    n = 0;
    int f0yflgJO, YJBMW0YDjL = (431 - 431);
    cin >> CFjU3x >> n;
    for (f0yflgJO = (726 - 726); f0yflgJO < (629 - 620); f0yflgJO = f0yflgJO + 1) {
        YJBMW0YDjL = 799 - 799;
        while (YJBMW0YDjL < (906 - 897)) {
            IIbfrLFv9u[f0yflgJO][YJBMW0YDjL] = (748 - 748);
            YJBMW0YDjL = YJBMW0YDjL +1;
        };
    }
    IIbfrLFv9u[4][4] = CFjU3x;
    for (f0yflgJO = (937 - 937); (918 - 909) > f0yflgJO; f0yflgJO = f0yflgJO + 1)
        for (YJBMW0YDjL = (749 - 749); YJBMW0YDjL < (252 - 243); YJBMW0YDjL = YJBMW0YDjL +1)
            o2cDi0ye[f0yflgJO][YJBMW0YDjL] = (293 - 293);
    for (qRx2qEZD7 = (970 - 969); qRx2qEZD7 <= n; qRx2qEZD7 = qRx2qEZD7 + 1) {
        for (f0yflgJO = 0; f0yflgJO < (358 - 349); f0yflgJO = f0yflgJO + 1)
            for (YJBMW0YDjL = 0; 9 > YJBMW0YDjL; YJBMW0YDjL = YJBMW0YDjL +1)
                o2cDi0ye[f0yflgJO][YJBMW0YDjL] = 0;
        for (f0yflgJO = 0; 9 > f0yflgJO; f0yflgJO = f0yflgJO + 1)
            for (YJBMW0YDjL = 0; 9 > YJBMW0YDjL; YJBMW0YDjL = YJBMW0YDjL +1)
                ajWOFsBI6N0b (f0yflgJO, YJBMW0YDjL, IIbfrLFv9u[f0yflgJO][YJBMW0YDjL]);
        for (f0yflgJO = 0; 9 > f0yflgJO; f0yflgJO = f0yflgJO + 1)
            for (YJBMW0YDjL = 0; 9 > YJBMW0YDjL; YJBMW0YDjL = YJBMW0YDjL +1)
                IIbfrLFv9u[f0yflgJO][YJBMW0YDjL] = o2cDi0ye[f0yflgJO][YJBMW0YDjL];
    }
    {
        f0yflgJO = 0;
        while (f0yflgJO < 9) {
            for (YJBMW0YDjL = 0; YJBMW0YDjL < 9; YJBMW0YDjL++) {
                cout << IIbfrLFv9u[f0yflgJO][YJBMW0YDjL];
                if (YJBMW0YDjL != (445 - 437))
                    cout << " ";
                else {
                    if (f0yflgJO != 8)
                        cout << endl;
                };
            }
            f0yflgJO = f0yflgJO + 1;
        };
    }
    return 0;
}

void  ajWOFsBI6N0b (int x, int Pu9EnqXlv, int n) {
    o2cDi0ye[x - (493 - 492)][Pu9EnqXlv] = o2cDi0ye[x - (493 - 492)][Pu9EnqXlv] + n;
    o2cDi0ye[x + (380 - 379)][Pu9EnqXlv] = o2cDi0ye[x + (380 - 379)][Pu9EnqXlv] + n;
    o2cDi0ye[x][Pu9EnqXlv -(137 - 136)] += n;
    o2cDi0ye[x][Pu9EnqXlv +1] += n;
    o2cDi0ye[x][Pu9EnqXlv] += n * (909 - 907);
    o2cDi0ye[x - 1][Pu9EnqXlv -1] += n;
    o2cDi0ye[x - 1][Pu9EnqXlv +1] += n;
    o2cDi0ye[x + 1][Pu9EnqXlv -1] += n;
    o2cDi0ye[x + 1][Pu9EnqXlv +1] += n;
}

