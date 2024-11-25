int main () {
    char n0xi8vkeWpfd [(948 - 868)], CbigJydvqoD4 [80];
    gets (n0xi8vkeWpfd);
    gets (CbigJydvqoD4);
    int ZTkGK4ioJH;
    int l2;
    int l;
    int EgdSDfIXWR;
    int YsHu0wZiAyg [80] = {0};
    ZTkGK4ioJH = strlen (n0xi8vkeWpfd);
    l2 = strlen (CbigJydvqoD4);
    if (ZTkGK4ioJH >= l2)
        l = l2;
    else
        l = ZTkGK4ioJH;
    {
        EgdSDfIXWR = 0;
        while (l - 1 >= EgdSDfIXWR) {
            if ((n0xi8vkeWpfd[EgdSDfIXWR] >= (259 - 194)) && (90 >= n0xi8vkeWpfd[EgdSDfIXWR]))
                n0xi8vkeWpfd[EgdSDfIXWR] = n0xi8vkeWpfd[EgdSDfIXWR] + (751 - 719);
            if ((CbigJydvqoD4[EgdSDfIXWR] >= 65) && (90 >= CbigJydvqoD4[EgdSDfIXWR]))
                CbigJydvqoD4[EgdSDfIXWR] = CbigJydvqoD4[EgdSDfIXWR] + 32;
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
            EgdSDfIXWR = EgdSDfIXWR +1;
        };
    }
    for (EgdSDfIXWR = 0; l - 1 >= EgdSDfIXWR; EgdSDfIXWR++) {
        if (n0xi8vkeWpfd[EgdSDfIXWR] == CbigJydvqoD4[EgdSDfIXWR])
            YsHu0wZiAyg[EgdSDfIXWR] = 1;
        else if (n0xi8vkeWpfd[EgdSDfIXWR] > CbigJydvqoD4[EgdSDfIXWR])
            YsHu0wZiAyg[EgdSDfIXWR] = 2;
        else
            YsHu0wZiAyg[EgdSDfIXWR] = 3;
    }
    EgdSDfIXWR = 0;
    while ((YsHu0wZiAyg[EgdSDfIXWR] == 1) && (EgdSDfIXWR <= l - 2))
        EgdSDfIXWR++;
    if (YsHu0wZiAyg[EgdSDfIXWR] == 1)
        ;
    else {
        if (YsHu0wZiAyg[EgdSDfIXWR] == 2)
            printf (">");
        else if (YsHu0wZiAyg[EgdSDfIXWR] == 3)
            printf ("<");
    }
    return 0;
}

