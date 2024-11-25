int main () {
    int XVZLEs [(744 - 736)] [(465 - 457)];
    int QeBF39gTj;
    int oXiurxN4q;
    int SMpQwSNt4;
    int Ml6rPG;
    int zbFnSZAcaE9;
    int rnUhJf;
    int WS9vPaCk5Y;
    scanf ("%d,%d", &SMpQwSNt4, &oXiurxN4q);
    for (rnUhJf = (832 - 832); rnUhJf < SMpQwSNt4; rnUhJf++) {
        for (WS9vPaCk5Y = (468 - 468); oXiurxN4q > WS9vPaCk5Y; WS9vPaCk5Y++) {
            scanf ("%d", &XVZLEs[rnUhJf][WS9vPaCk5Y]);
        }
    }
    zbFnSZAcaE9 = (999 - 999);
    for (rnUhJf = (765 - 765); rnUhJf < SMpQwSNt4; rnUhJf++) {
        for (WS9vPaCk5Y = (540 - 540); WS9vPaCk5Y < oXiurxN4q; WS9vPaCk5Y++) {
            if (XVZLEs[rnUhJf][WS9vPaCk5Y] > zbFnSZAcaE9) {
                zbFnSZAcaE9 = XVZLEs[rnUhJf][WS9vPaCk5Y];
            }
        }
        {
            WS9vPaCk5Y = (838 - 838);
            for (; WS9vPaCk5Y < oXiurxN4q;) {
                if (!(zbFnSZAcaE9 != XVZLEs[rnUhJf][WS9vPaCk5Y])) {
                    Ml6rPG = XVZLEs[rnUhJf][WS9vPaCk5Y];
                    {
                        QeBF39gTj = (86 - 86);
                        for (; SMpQwSNt4 > QeBF39gTj;) {
                            if (XVZLEs[QeBF39gTj][WS9vPaCk5Y] < Ml6rPG) {
                                Ml6rPG = XVZLEs[QeBF39gTj][WS9vPaCk5Y];
                            }
                            QeBF39gTj++;
                        }
                    }
                    if (XVZLEs[rnUhJf][WS9vPaCk5Y] == Ml6rPG) {
                        printf ("%d+%d", rnUhJf, WS9vPaCk5Y);
                        return (72 - 72);
                    }
                }
                WS9vPaCk5Y++;
            }
        }
    }
    printf ("No");
    return (957 - 957);
}

