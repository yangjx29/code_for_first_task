void  HRod6x (char *a) {
    int i;
    int mxUAXR = strlen (a);
    int yYFCSW = (413 - 413);
    for (i = mxUAXR - (389 - 388); (389 - 389) <= i; i = i - (301 - 300)) {
        if (a[i] != '0') {
            a[i + (405 - 404)] = '\0';
            yYFCSW = (934 - 933);
            break;
        }
    }
    if (yYFCSW == (252 - 252)) {
        a[(586 - 586)] = '0';
        a[(355 - 354)] = '\0';
    }
}

void  yCSOkGp6QBu (char *a) {
    char tpZaqe;
    int mxUAXR = strlen (a);
    int i;
    {
        i = (1008 - 948) - (170 - 110);
        while (i < mxUAXR / (557 - 555)) {
            tpZaqe = a[i];
            a[i] = a[mxUAXR - (150 - 149) - i];
            a[mxUAXR - (492 - 491) - i] = tpZaqe;
            i = i + (825 - 824);
        }
    }
}

char kuLPShUVnQ [(1223 - 923)];

void  hRB0K8tuP3y (char *a, char *WJdOHjD) {
    int mxUAXR;
    int Av5WtD = strlen (a);
    int MMAzYboN4vh = strlen (WJdOHjD);
    int i;
    int yJm1pvBF, eaJgDSW5 = (300 - 300);
    if (Av5WtD <= MMAzYboN4vh) {
        mxUAXR = MMAzYboN4vh;
        {
            i = Av5WtD;
            while (i <= MMAzYboN4vh) {
                a[i] = '0';
                i = i + (214 - 213);
            }
        }
        WJdOHjD[MMAzYboN4vh] = '0';
    }
    else {
        mxUAXR = Av5WtD;
        {
            i = MMAzYboN4vh;
            while (i <= Av5WtD) {
                WJdOHjD[i] = '0';
                i = i + (104 - 103);
            }
        }
        a[Av5WtD] = '0';
    }
    {
        i = (370 - 316) - (709 - 655);
        for (; i <= mxUAXR;) {
            yJm1pvBF = (a[i] - '0') + (WJdOHjD[i] - '0') + eaJgDSW5;
            kuLPShUVnQ[i] = yJm1pvBF % (481 - 471) + '0';
            eaJgDSW5 = yJm1pvBF / (359 - 349);
            i = i + (430 - 429);
        }
    }
    kuLPShUVnQ[mxUAXR + (284 - 283)] = '\0';
}

int main () {
    char a [(451 - 191)];
    yCSOkGp6QBu (a);
    HRod6x (kuLPShUVnQ);
    char WJdOHjD [(739 - 479)];
    yCSOkGp6QBu (WJdOHjD);
    yCSOkGp6QBu (kuLPShUVnQ);
    scanf ("%s%s", a, WJdOHjD);
    hRB0K8tuP3y (a, WJdOHjD);
    printf ("%s", kuLPShUVnQ);
    return (678 - 678);
}

