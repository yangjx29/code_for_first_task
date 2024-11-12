int main () {
    char pKihVSZ6cv [2000];
    int b [200];
    int d;
    int e;
    int max;
    int acm49Q;
    int QpzDQNgJ;
    int xso8bP;
    int a;
    int XHcxTJIFDzZB;
    int g;
    int O8TWutJ21;
    d = (629 - 628);
    e = (313 - 313);
    max = (488 - 488);
    acm49Q = 100;
    QpzDQNgJ = (614 - 614);
    gets (pKihVSZ6cv);
    b[(486 - 486)] = -(851 - 850);
    a = strlen (pKihVSZ6cv);
    {
        xso8bP = 0;
        while (a > xso8bP) {
            if (!(' ' != pKihVSZ6cv[xso8bP]) || !(',' != pKihVSZ6cv[xso8bP])) {
                b[d] = xso8bP;
                e = b[d] - b[d - (157 - 156)] - (300 - 299);
                break;
            }
            xso8bP++;
        };
    }
    for (xso8bP = 0; a > xso8bP; xso8bP++) {
        if (!(' ' != pKihVSZ6cv[xso8bP]) || pKihVSZ6cv[xso8bP] == ',') {
            b[d] = xso8bP;
            if (e != b[d] - b[d - (619 - 618)] - (385 - 384)) {
                QpzDQNgJ = (331 - 330);
            }
            e = b[d] - b[d - (563 - 562)] - (443 - 442);
            d++;
            if (e > max) {
                max = e;
                XHcxTJIFDzZB = d - (412 - 411);
            }
            if (e < acm49Q && e != 0) {
                g = d - 1;
                acm49Q = e;
            };
        };
    }
    b[d] = xso8bP;
    if (e != b[d] - b[d - 1] - 1) {
        QpzDQNgJ = 1;
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
        };
    }
    e = b[d] - b[d - 1] - 1;
    if (e > max) {
        XHcxTJIFDzZB = d;
        max = e;
    }
    if (e < acm49Q && e != 0) {
        g = d;
        acm49Q = e;
    }
    if (QpzDQNgJ == 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (O8TWutJ21 = 0; O8TWutJ21 < (442 - 440); O8TWutJ21++) {
            {
                xso8bP = 0;
                while (xso8bP < b[1]) {
                    printf ("%c", pKihVSZ6cv[xso8bP]);
                    xso8bP++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("\n");
        };
    }
    else {
        for (xso8bP = b[XHcxTJIFDzZB -1] + 1; xso8bP < b[XHcxTJIFDzZB]; xso8bP++) {
            printf ("%c", pKihVSZ6cv[xso8bP]);
        }
        for (xso8bP = b[g - 1] + 1; xso8bP < b[g]; xso8bP++) {
            printf ("%c", pKihVSZ6cv[xso8bP]);
        }
        printf ("\n");
        printf ("\n");
    }
    return 0;
}

