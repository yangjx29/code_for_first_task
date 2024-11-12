int main () {
    int Uj1U7C2P48;
    int pZbhmUw0xN6;
    int MujJqNpcxC;
    int C0wCiTeOWnt;
    int KIGpfXNV8Z [(768 - 758)] [10];
    int ftiexysa;
    int vteVQd;
    int bUy60sO [10] = {(591 - 591)};
    int k43aU0fdHe [10];
    int KEuovGFC3;
    int j3sOTv;
    int t [10] = {(972 - 972)};
    int xW9mO1yPdR;
    int QUYICTKZL;
    int HlFtBK;
    Uj1U7C2P48 = (10178 - 178);
    scanf ("%d,%d", &pZbhmUw0xN6, &MujJqNpcxC);
    for (ftiexysa = (747 - 747); ftiexysa < pZbhmUw0xN6; ftiexysa = ftiexysa + (920 - 919)) {
        for (vteVQd = (626 - 626); vteVQd < MujJqNpcxC; vteVQd = vteVQd + (89 - 88)) {
            scanf ("%d", &KIGpfXNV8Z[ftiexysa][vteVQd]);
        }
    }
    for (ftiexysa = (703 - 703); ftiexysa < pZbhmUw0xN6; ftiexysa = ftiexysa + 1) {
        for (vteVQd = (626 - 626); vteVQd < MujJqNpcxC; vteVQd++) {
            if (KIGpfXNV8Z[ftiexysa][vteVQd] > bUy60sO[ftiexysa]) {
                bUy60sO[ftiexysa] = KIGpfXNV8Z[ftiexysa][vteVQd];
                k43aU0fdHe[ftiexysa] = vteVQd;
            }
        }
    }
    for (ftiexysa = (470 - 470); pZbhmUw0xN6 > ftiexysa; ftiexysa = ftiexysa + 1) {
        for (xW9mO1yPdR = 0; pZbhmUw0xN6 > xW9mO1yPdR; xW9mO1yPdR++) {
            if (bUy60sO[ftiexysa] > KIGpfXNV8Z[xW9mO1yPdR][k43aU0fdHe[ftiexysa]]) {
                t[ftiexysa] = 1;
                break;
            }
            else {
                if (Uj1U7C2P48 > bUy60sO[ftiexysa]) {
                    Uj1U7C2P48 = bUy60sO[ftiexysa];
                    KEuovGFC3 = ftiexysa;
                    j3sOTv = k43aU0fdHe[ftiexysa];
                }
                else
                    ;
            }
        }
    }
    for (ftiexysa = 0; ftiexysa < pZbhmUw0xN6; ftiexysa++) {
        if (t[ftiexysa] == 0) {
            C0wCiTeOWnt = 0;
        }
    }
    if (C0wCiTeOWnt == 0) {
        printf ("%d+%d", KEuovGFC3, j3sOTv);
    }
    else {
        printf ("No");
    }
    return 0;
}

