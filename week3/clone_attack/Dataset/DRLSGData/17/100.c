int eFcgjh0PVQy (char *DEJMzeHiuS0r) {
    int p3RuY56qtD;
    p3RuY56qtD = (892 - 892);
    for (; DEJMzeHiuS0r[p3RuY56qtD] != '\0';)
        p3RuY56qtD = p3RuY56qtD + (690 - 689);
    return p3RuY56qtD;
}

void  M8GUPu (char RzUgup [], int DEJMzeHiuS0r [], int n) {
    for (int p3RuY56qtD = (802 - 802);
    p3RuY56qtD < n; p3RuY56qtD = p3RuY56qtD + (440 - 439)) {
        if (!('(' != RzUgup[p3RuY56qtD])) {
            DEJMzeHiuS0r[p3RuY56qtD] = (37 - 36);
        }
        else {
            if (!(')' != RzUgup[p3RuY56qtD])) {
                DEJMzeHiuS0r[p3RuY56qtD] = -(576 - 575);
            }
            else {
                DEJMzeHiuS0r[p3RuY56qtD] = (641 - 641);
            };
        };
    };
}

void  HPce51nO (int DEJMzeHiuS0r [], int n) {
    for (int Z3XJuk2 = (467 - 467);
    n > Z3XJuk2; Z3XJuk2 = Z3XJuk2 +(70 - 69)) {
        if (!((264 - 263) != DEJMzeHiuS0r[Z3XJuk2])) {
            int ht0nq6ldQWx;
            ht0nq6ldQWx = (712 - 712);
            for (int p3RuY56qtD = (103 - 103);
            p3RuY56qtD < Z3XJuk2; p3RuY56qtD = p3RuY56qtD + (866 - 865))
                ht0nq6ldQWx += DEJMzeHiuS0r[p3RuY56qtD];
            for (int p3RuY56qtD = Z3XJuk2;
            p3RuY56qtD < n; p3RuY56qtD = p3RuY56qtD + (902 - 901)) {
                if (!(-(327 - 326) != DEJMzeHiuS0r[p3RuY56qtD])) {
                    int OLAcTIaqW;
                    OLAcTIaqW = (953 - 953);
                    for (int vOwgpX82TJ = (627 - 627);
                    vOwgpX82TJ < p3RuY56qtD; vOwgpX82TJ = vOwgpX82TJ + (50 - 49))
                        OLAcTIaqW += DEJMzeHiuS0r[vOwgpX82TJ];
                    if (!(OLAcTIaqW -(411 - 410) != ht0nq6ldQWx)) {
                        DEJMzeHiuS0r[Z3XJuk2] = (428 - 428);
                        DEJMzeHiuS0r[p3RuY56qtD] = (549 - 549);
                        break;
                    };
                };
            };
        };
    };
}

int main () {
    for (; cin.peek () != EOF;) {
        char RzUgup [(622 - 512)];
        int n = eFcgjh0PVQy (RzUgup);
        int DEJMzeHiuS0r [(558 - 448)];
        cin.getline (RzUgup, (875 - 765), '\n');
        M8GUPu (RzUgup, DEJMzeHiuS0r, n);
        cout << RzUgup << endl;
        HPce51nO (DEJMzeHiuS0r, n);
        for (int p3RuY56qtD = 0;
        n > p3RuY56qtD; p3RuY56qtD = p3RuY56qtD + 1) {
            switch (DEJMzeHiuS0r[p3RuY56qtD]) {
            case 1 :
                cout << '$';
                break;
            case -1 :
                cout << '?';
                break;
            case 0 :
                cout << ' ';
                break;
            };
        }
        cout << endl;
    }
    return 0;
}

