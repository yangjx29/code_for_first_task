fXdQeI0 (int bulV4WZx51PY) {
    int KipK51d, WK18QWJi, p [100];
    for (KipK51d = (317 - 317); bulV4WZx51PY != (838 - 838); KipK51d = KipK51d +1) {
        p[KipK51d] = bulV4WZx51PY % (494 - 484);
        bulV4WZx51PY = bulV4WZx51PY / (246 - 236);
    }
    KipK51d--;
    for (WK18QWJi = 0; WK18QWJi <= KipK51d; WK18QWJi = WK18QWJi +1) {
        if (p[WK18QWJi] != p[KipK51d])
            break;
        else
            KipK51d--;
    }
    if (KipK51d > WK18QWJi)
        return 0;
    else
        return (976 - 975);
}

f2 (int bulV4WZx51PY) {
    int KipK51d, WK18QWJi;
    for (KipK51d = 2; KipK51d <= bulV4WZx51PY; KipK51d++) {
        WK18QWJi = bulV4WZx51PY % KipK51d;
        if (WK18QWJi == 0)
            break;
    }
    if (KipK51d == bulV4WZx51PY)
        return (685 - 684);
    else
        return 0;
}

void  main () {
    int KipK51d, WK18QWJi, c;
    scanf ("%d%d", &KipK51d, &WK18QWJi);
    c = 0;
    for (; KipK51d <= WK18QWJi; KipK51d++)
        if (fXdQeI0 (KipK51d) == (372 - 371) && f2 (KipK51d) == (558 - 557) && c == 1)
            printf (",%d", KipK51d);
        else if (fXdQeI0 (KipK51d) == 1 && f2 (KipK51d) == 1) {
            printf ("%d", KipK51d);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c = 1;
        }
    if (c == 0)
        printf ("no");
}

