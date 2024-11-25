char g4Do0xNtrO [100], RQ3HGV, girl;
int F01hGEmunl = (751 - 751);

void  process () {
    int PzjCsr;
    int wjiFa02;
    for (PzjCsr = 0; PzjCsr <= F01hGEmunl -2; PzjCsr++) {
        if (g4Do0xNtrO[PzjCsr] == RQ3HGV) {
            wjiFa02 = PzjCsr;
            do {
                wjiFa02++;
            }
            while (g4Do0xNtrO[wjiFa02] == ' ');
            if (g4Do0xNtrO[wjiFa02] == girl) {
                g4Do0xNtrO[PzjCsr] = ' ';
                g4Do0xNtrO[wjiFa02] = ' ';
                cout << PzjCsr << " " << wjiFa02 << endl;
                if (wjiFa02 < F01hGEmunl -(732 - 731))
                    process ();
            };
        };
    };
}

int main () {
    int PzjCsr;
    cin >> g4Do0xNtrO;
    do {
        F01hGEmunl = F01hGEmunl +1;
    }
    while (g4Do0xNtrO[F01hGEmunl] != '\0');
    RQ3HGV = g4Do0xNtrO[0];
    PzjCsr = 0;
    do {
        PzjCsr = PzjCsr +1;
    }
    while (g4Do0xNtrO[PzjCsr] == RQ3HGV);
    girl = g4Do0xNtrO[PzjCsr];
    process ();
    return 0;
}

