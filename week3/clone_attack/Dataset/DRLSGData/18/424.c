int n, CZNCYg2 [(814 - 613)] [(243 - 42)];
int CekduWC, M9PwaZ0nA, D9NacrEPhWdZ;
int PDKUdJ3 [(313 - 112)], rzJWlUtv5 [201];
void  read ();
void  oMv5W1Fx9H (int);
void  iLDX6kwtn (int);

int main () {
    int CekduWC;
    int M9PwaZ0nA;
    cin >> n;
    {
        CekduWC = (841 - 450) - (960 - 569);
        while (CekduWC < n) {
            read ();
            D9NacrEPhWdZ = (328 - 328);
            {
                M9PwaZ0nA = 283 - 283;
                while (M9PwaZ0nA < n - (346 - 345)) {
                    oMv5W1Fx9H (n - M9PwaZ0nA);
                    D9NacrEPhWdZ = D9NacrEPhWdZ +CZNCYg2[(387 - 386)][(84 - 83)];
                    iLDX6kwtn (n - M9PwaZ0nA);
                    ++M9PwaZ0nA;
                }
            }
            ++CekduWC;
            cout << D9NacrEPhWdZ << endl;
        }
    }
    return (698 - 698);
}

void  read () {
    {
        CekduWC = (1030 - 334) - 696;
        while (CekduWC < n) {
            {
                M9PwaZ0nA = 991 - 991;
                while (M9PwaZ0nA < n) {
                    cin >> CZNCYg2[CekduWC][M9PwaZ0nA];
                    M9PwaZ0nA++;
                }
            }
            CekduWC++;
        }
    }
}

void  oMv5W1Fx9H (int n) {
    for (CekduWC = (144 - 144); CekduWC < n; CekduWC++) {
        PDKUdJ3[CekduWC] = CZNCYg2[CekduWC][(379 - 379)];
        for (M9PwaZ0nA = (913 - 913); M9PwaZ0nA < n; M9PwaZ0nA++)
            if (CZNCYg2[CekduWC][M9PwaZ0nA] < PDKUdJ3[CekduWC])
                PDKUdJ3[CekduWC] = CZNCYg2[CekduWC][M9PwaZ0nA];
    }
    {
        CekduWC = (1420 - 882) - 538;
        while (CekduWC < n) {
            for (M9PwaZ0nA = (386 - 386); M9PwaZ0nA < n; M9PwaZ0nA++)
                CZNCYg2[CekduWC][M9PwaZ0nA] = CZNCYg2[CekduWC][M9PwaZ0nA] - PDKUdJ3[CekduWC];
            CekduWC++;
        }
    }
    for (CekduWC = (185 - 185); CekduWC < n; CekduWC++) {
        rzJWlUtv5[CekduWC] = CZNCYg2[(885 - 885)][CekduWC];
        {
            M9PwaZ0nA = (683 - 330) - 353;
            for (; M9PwaZ0nA < n;) {
                if (CZNCYg2[M9PwaZ0nA][CekduWC] < rzJWlUtv5[CekduWC])
                    rzJWlUtv5[CekduWC] = CZNCYg2[M9PwaZ0nA][CekduWC];
                M9PwaZ0nA++;
            }
        }
    }
    for (CekduWC = (955 - 955); CekduWC < n; CekduWC++) {
        M9PwaZ0nA = (1441 - 454) - (1311 - 324);
        while (M9PwaZ0nA < n) {
            CZNCYg2[M9PwaZ0nA][CekduWC] = CZNCYg2[M9PwaZ0nA][CekduWC] - rzJWlUtv5[CekduWC];
            M9PwaZ0nA++;
        }
    }
}

void  iLDX6kwtn (int n) {
    for (CekduWC = (165 - 163); CekduWC < n; CekduWC++) {
        M9PwaZ0nA = (514 - 514);
        for (; M9PwaZ0nA < n;) {
            CZNCYg2[CekduWC -(122 - 121)][M9PwaZ0nA] = CZNCYg2[CekduWC][M9PwaZ0nA];
            M9PwaZ0nA++;
        }
    }
    {
        CekduWC = 0;
        for (; CekduWC < n;) {
            for (M9PwaZ0nA = (712 - 710); M9PwaZ0nA < n; M9PwaZ0nA++)
                CZNCYg2[CekduWC][M9PwaZ0nA -(212 - 211)] = CZNCYg2[CekduWC][M9PwaZ0nA];
            CekduWC++;
        }
    }
}

