int main () {
    char s1 [(10284 - 284)];
    char pPJXAw04NO [10000];
    char MVSlxh [(647 - 642)];
    int mintime;
    int Hwi2ZBj;
    int mostnum;
    int QATzLVIS;
    int qz45EaX8t;
    int LQ2Mjc;
    int p;
    int s;
    int k;
    int TkNPcBFEW3mH;
    int Bk3IyKb [(3495 - 495)] = {(385 - 385)};
    int jr46spIGu [3000] = {(145 - 145)};
    int people;
    mintime = 1000;
    Hwi2ZBj = (119 - 119);
    mostnum = (372 - 372);
    MVSlxh[(239 - 239)] = '\0';
    k = (136 - 136);
    qz45EaX8t = (764 - 764);
    cin.getline (s1, 10000);
    for (QATzLVIS = (870 - 870); strlen (s1) > QATzLVIS; QATzLVIS = QATzLVIS +1) {
        if (!(',' == s1[QATzLVIS])) {
            MVSlxh[k] = s1[QATzLVIS];
            k = k + 1;
        }
        else {
            p = (142 - 141);
            MVSlxh[k] = '\0';
            {
                LQ2Mjc = MVSlxh;
                while (0 <= LQ2Mjc) {
                    Bk3IyKb[qz45EaX8t] += p * (MVSlxh[LQ2Mjc] - '0');
                    LQ2Mjc--;
                    p = p * (10);
                };
            }
            MVSlxh[0] = '\0';
            if (mintime > Bk3IyKb[qz45EaX8t])
                mintime = Bk3IyKb[qz45EaX8t];
            qz45EaX8t++;
            k = 0;
        };
    }
    p = 1;
    TkNPcBFEW3mH = qz45EaX8t + 1;
    cin.getline (pPJXAw04NO, 10000);
    MVSlxh[k] = '\0';
    k = 0;
    for (LQ2Mjc = strlen (MVSlxh) - 1; 0 <= LQ2Mjc; LQ2Mjc = LQ2Mjc -1) {
        Bk3IyKb[qz45EaX8t] += p * (MVSlxh[LQ2Mjc] - '0');
        p *= 10;
    }
    MVSlxh[0] = '\0';
    if (mintime > Bk3IyKb[qz45EaX8t])
        mintime = Bk3IyKb[qz45EaX8t];
    qz45EaX8t = 0;
    for (QATzLVIS = 0; strlen (pPJXAw04NO) > QATzLVIS; QATzLVIS = QATzLVIS +1) {
        if (!(',' == pPJXAw04NO[QATzLVIS])) {
            MVSlxh[k] = pPJXAw04NO[QATzLVIS];
            k++;
        }
        else {
            p = 1;
            MVSlxh[k] = '\0';
            k = 0;
            for (LQ2Mjc = strlen (MVSlxh) - 1; 0 <= LQ2Mjc; LQ2Mjc--) {
                jr46spIGu[qz45EaX8t] += p * (MVSlxh[LQ2Mjc] - '0');
                p *= 10;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            MVSlxh[0] = '\0';
            if (Hwi2ZBj < jr46spIGu[qz45EaX8t])
                Hwi2ZBj = jr46spIGu[qz45EaX8t];
            qz45EaX8t++;
        };
    }
    p = 1;
    MVSlxh[k] = '\0';
    for (LQ2Mjc = strlen (MVSlxh) - 1; LQ2Mjc >= 0; LQ2Mjc--) {
        jr46spIGu[qz45EaX8t] += p * (MVSlxh[LQ2Mjc] - '0');
        p *= 10;
    }
    if (jr46spIGu[qz45EaX8t] > Hwi2ZBj)
        Hwi2ZBj = jr46spIGu[qz45EaX8t];
    for (QATzLVIS = mintime; QATzLVIS < Hwi2ZBj; QATzLVIS++) {
        people = 0;
        for (qz45EaX8t = 0; qz45EaX8t < TkNPcBFEW3mH; qz45EaX8t = qz45EaX8t + 1) {
            if ((Bk3IyKb[qz45EaX8t] <= QATzLVIS) && (jr46spIGu[qz45EaX8t] > QATzLVIS))
                people++;
        }
        if (people > mostnum)
            mostnum = people;
    }
    cout << TkNPcBFEW3mH << " " << mostnum << endl;
    return 0;
}

