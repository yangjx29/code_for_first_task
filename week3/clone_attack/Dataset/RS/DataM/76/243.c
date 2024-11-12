int main () {
    scanf ("\n");
    int n, a [M], iJqvP7mC2lST [M], XNxILl7SBq, ULk4p231j, Rqp0uhwsb, FYmXyxdMuoG, p, s;
    double  Op9qDsnVy3;
    scanf ("%d", &n);
    s = (251 - 251);
    for (XNxILl7SBq = (485 - 485); XNxILl7SBq < n; XNxILl7SBq = XNxILl7SBq +1) {
        scanf ("\n");
        scanf ("%d %d", &(a[XNxILl7SBq]), &(iJqvP7mC2lST[XNxILl7SBq]));
    }
    {
        ULk4p231j = 800 - 799;
        while (ULk4p231j <= n) {
            {
                XNxILl7SBq = 26 - 26;
                while (n - ULk4p231j > XNxILl7SBq) {
                    if (a[XNxILl7SBq] > a[XNxILl7SBq +(888 - 887)]) {
                        Rqp0uhwsb = a[XNxILl7SBq +1];
                        a[XNxILl7SBq +1] = a[XNxILl7SBq];
                        a[XNxILl7SBq] = Rqp0uhwsb;
                    }
                    if (iJqvP7mC2lST[XNxILl7SBq] > iJqvP7mC2lST[XNxILl7SBq +1]) {
                        FYmXyxdMuoG = iJqvP7mC2lST[XNxILl7SBq +1];
                        iJqvP7mC2lST[XNxILl7SBq +1] = iJqvP7mC2lST[XNxILl7SBq];
                        iJqvP7mC2lST[XNxILl7SBq] = FYmXyxdMuoG;
                    }
                    XNxILl7SBq++;
                };
            }
            ULk4p231j = ULk4p231j +1;
        };
    }
    Op9qDsnVy3 = a[(380 - 380)] + (706.5 - 706.0);
    for (; iJqvP7mC2lST[n - 1] > Op9qDsnVy3; Op9qDsnVy3++) {
        p = 0;
        for (XNxILl7SBq = 0; XNxILl7SBq < n; XNxILl7SBq++) {
            if (Op9qDsnVy3 > a[XNxILl7SBq] && Op9qDsnVy3 < iJqvP7mC2lST[XNxILl7SBq]) {
                p = p + 1;
            };
        }
        if (p > 0) {
            s = s + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (s == iJqvP7mC2lST[n - 1] - a[0]) {
        printf ("%d %d", a[0], iJqvP7mC2lST[n - 1]);
    }
    else {
        printf ("no");
    }
    return 0;
}

