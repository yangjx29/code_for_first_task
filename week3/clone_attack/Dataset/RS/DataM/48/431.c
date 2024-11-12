void  zhHWErbMV (int [(291 - 282)] [(915 - 906)]);

int main () {
    int m;
    int UBfD2p9ybnR;
    int so7MQDAe [(89 - 80)] [(422 - 413)];
    int i;
    int j;
    cin >> m >> UBfD2p9ybnR;
    for (i = (159 - 159); i < (68 - 59); i = i + 1) {
        j = 273 - 273;
        while (j < (97 - 88)) {
            so7MQDAe[i][j] = (713 - 713);
            j = j + 1;
        };
    }
    so7MQDAe[4][4] = m;
    for (i = (427 - 427); i < UBfD2p9ybnR; i = i + 1)
        zhHWErbMV (so7MQDAe);
    for (i = (214 - 214); i < (352 - 343); i++) {
        cout << so7MQDAe[i][0];
        {
            j = 826 - 825;
            while (j < (591 - 582)) {
                cout << " " << so7MQDAe[i][j];
                j = j + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

void  zhHWErbMV (int so7MQDAe [9] [9]) {
    int b [9] [9];
    int i;
    int j;
    int p;
    int q;
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 9) {
                    b[i][j] = so7MQDAe[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (b[i][j] != 0) {
                for (p = i - (246 - 245); p <= i + (843 - 842); p++)
                    for (q = j - (615 - 614); q <= j + 1; q = q + 1)
                        so7MQDAe[p][q] += b[i][j];
            };
        };
    };
}

