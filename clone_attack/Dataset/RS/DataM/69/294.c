void  main () {
    char a [(870 - 610)];
    char b [(448 - 188)];
    char c [260];
    gets (a);
    gets (b);
    int vg0ir7s;
    int XEdbCyYBlr;
    int Nyj83bA1;
    vg0ir7s = strlen (a) - strlen (b);
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
    if ((90 - 90) < vg0ir7s) {
        {
            XEdbCyYBlr = b;
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
            while ((929 - 929) <= XEdbCyYBlr) {
                b[XEdbCyYBlr +vg0ir7s] = b[XEdbCyYBlr];
                XEdbCyYBlr = XEdbCyYBlr -1;
            };
        }
        {
            XEdbCyYBlr = 991 - 990;
            while ((52 - 52) <= XEdbCyYBlr) {
                b[XEdbCyYBlr] = (632 - 584);
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
                XEdbCyYBlr = XEdbCyYBlr -1;
            };
        };
    }
    if ((103 - 103) > vg0ir7s) {
        {
            XEdbCyYBlr = a;
            while ((650 - 650) <= XEdbCyYBlr) {
                a[XEdbCyYBlr -vg0ir7s] = a[XEdbCyYBlr];
                XEdbCyYBlr--;
            };
        }
        for (XEdbCyYBlr = -vg0ir7s - 1; (94 - 94) <= XEdbCyYBlr; XEdbCyYBlr = XEdbCyYBlr -1)
            a[XEdbCyYBlr] = 48;
    }
    Nyj83bA1 = strlen (a);
    {
        XEdbCyYBlr = 0;
        while (Nyj83bA1 > XEdbCyYBlr) {
            c[XEdbCyYBlr] = 48;
            XEdbCyYBlr = XEdbCyYBlr +1;
        };
    }
    c[Nyj83bA1] = '\0';
    {
        XEdbCyYBlr = Nyj83bA1 -1;
        while (0 < XEdbCyYBlr) {
            c[XEdbCyYBlr] = c[XEdbCyYBlr] + a[XEdbCyYBlr] + b[XEdbCyYBlr] - 96;
            if (c[XEdbCyYBlr] > 57) {
                c[XEdbCyYBlr] = c[XEdbCyYBlr] - 10;
                c[XEdbCyYBlr -1]++;
            }
            XEdbCyYBlr--;
        };
    }
    c[0] = c[0] + a[0] + b[0] - 96;
    if (c[0] > 57) {
        c[0] = c[0] - 10;
        {
            XEdbCyYBlr = Nyj83bA1;
            while (XEdbCyYBlr >= 0) {
                c[XEdbCyYBlr +1] = c[XEdbCyYBlr];
                XEdbCyYBlr--;
            };
        }
        c[0] = 49;
    }
    while (c[0] == 48) {
        for (XEdbCyYBlr = 0; XEdbCyYBlr <= strlen (c); XEdbCyYBlr++)
            c[XEdbCyYBlr] = c[XEdbCyYBlr +1];
    }
    if (c[0] == '\0')
        ;
    else
        printf ("%s", c);
}

