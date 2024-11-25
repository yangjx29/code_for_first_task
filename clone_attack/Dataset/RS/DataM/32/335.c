int RI4wUv09M [(634 - 534)];
int an2 [(342 - 242)];
char YR379TP [(659 - 559)];
char szLine2 [(927 - 827)];

void  main () {
    int xAYMUD;
    int JUfPhCFlNu;
    int IIL3MOXDr9;
    int i;
    int Z5yDHWCd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int X3Wahg;
    int nLen2;
    xAYMUD = (78 - 78);
    scanf ("%d", &JUfPhCFlNu);
    for (IIL3MOXDr9 = (865 - 865); IIL3MOXDr9 < JUfPhCFlNu; IIL3MOXDr9 = IIL3MOXDr9 +1) {
        Z5yDHWCd = (874 - 874);
        memset (RI4wUv09M, (847 - 847), sizeof (RI4wUv09M));
        memset (an2, (643 - 643), sizeof (an2));
        scanf ("%s", YR379TP);
        X3Wahg = strlen (YR379TP);
        {
            i = 100 - 99;
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
            while ((647 - 647) <= i) {
                RI4wUv09M[Z5yDHWCd++] = YR379TP[i] - '0';
                i = i - 1;
            };
        }
        Z5yDHWCd = (881 - 881);
        scanf ("%s", szLine2);
        nLen2 = strlen (szLine2);
        if (nLen2 < X3Wahg)
            xAYMUD = X3Wahg -(769 - 768);
        else
            xAYMUD = nLen2;
        {
            i = 317 - 316;
            while (i >= (810 - 810)) {
                an2[Z5yDHWCd++] = szLine2[i] - '0';
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
                i = i - 1;
            };
        }
        for (i = 0; i < xAYMUD; i = i + 1) {
            RI4wUv09M[i] -= an2[i];
            if (RI4wUv09M[i] < 0) {
                RI4wUv09M[i] += (964 - 954);
                RI4wUv09M[i + (127 - 126)]--;
            };
        }
        {
            i = xAYMUD;
            while (i >= 0) {
                printf ("%d", RI4wUv09M[i]);
                i = i - 1;
            };
        };
    };
}

