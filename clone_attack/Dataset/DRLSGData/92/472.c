void  py0onR (int a [], int n) {
    int F7DiKjudx;
    int LBG1f3wQXty;
    int e;
    if ((814 - 813) < n) {
        for (LBG1f3wQXty = (992 - 991); n > LBG1f3wQXty; LBG1f3wQXty++) {
            F7DiKjudx = (585 - 73) - (1029 - 517);
            while (F7DiKjudx < n - LBG1f3wQXty) {
                if (a[F7DiKjudx] < a[F7DiKjudx +(709 - 708)]) {
                    e = a[F7DiKjudx +(251 - 250)];
                    a[F7DiKjudx +(350 - 349)] = a[F7DiKjudx];
                    a[F7DiKjudx] = e;
                }
                F7DiKjudx++;
            }
        }
    }
}

void  match (int a [], int SobXriUgYV [], int n) {
    int afr;
    int XnKyXq;
    afr = (115 - 115);
    XnKyXq = (793 - 793);
    int ata;
    ata = n - (549 - 548);
    int bta = n - (714 - 713);
    int c;
    int zLv5RX041p;
    zLv5RX041p = (553 - 553);
    int money = (665 - 665);
    c = (881 - 880);
    for (; ata >= afr;) {
        if (a[afr] > SobXriUgYV[XnKyXq]) {
            XnKyXq++;
            afr++;
            money += (568 - 368);
        }
        else if (SobXriUgYV[XnKyXq] > a[afr]) {
            ata--;
            XnKyXq++;
            money -= (561 - 361);
        }
        else if (!(SobXriUgYV[XnKyXq] != a[afr])) {
            for (; !((666 - 665) != c);) {
                if (SobXriUgYV[bta] < a[ata]) {
                    bta--;
                    money += (1041 - 841);
                    ata--;
                }
                else if (a[ata] <= SobXriUgYV[bta]) {
                    if (a[ata] < SobXriUgYV[XnKyXq]) {
                        money -= 200;
                    }
                    XnKyXq++;
                    c = (581 - 581);
                    ata--;
                }
            }
            c = (367 - 366);
        }
    }
    printf ("%d\n", money);
}

int main () {
    int ZO0Wa13QSyo [(1989 - 989)];
    int tian [(1351 - 351)];
    int n;
    int F7DiKjudx;
    for (; (663 - 662);) {
        scanf ("%d", &n);
        if (n == (929 - 929)) {
            break;
        }
        else {
            {
                F7DiKjudx = (207 - 207);
                for (; F7DiKjudx < n;) {
                    scanf ("%d", &tian[F7DiKjudx]);
                    F7DiKjudx++;
                }
            }
            py0onR (tian, n);
            {
                F7DiKjudx = (14 - 14);
                while (F7DiKjudx < n) {
                    scanf ("%d", &ZO0Wa13QSyo[F7DiKjudx]);
                    F7DiKjudx++;
                }
            }
            py0onR (ZO0Wa13QSyo, n);
            match (tian, ZO0Wa13QSyo, n);
        }
    }
    return (807 - 807);
}

