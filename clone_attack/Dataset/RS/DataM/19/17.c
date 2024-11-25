void  main () {
    int d;
    int l;
    int svS172pHlinK;
    int j;
    int XDsZfx;
    d = (388 - 387);
    char str [(1081 - 981)], *p, imIH1ka2T [(279 - 179)], FKZWlx2i [(598 - 498)], RxWOcq [100] [20];
    gets (str);
    scanf ("%s %s", imIH1ka2T, FKZWlx2i);
    l = strlen (str);
    p = str;
    {
        j = 688 - 688;
        svS172pHlinK = 531 - 531;
        while (1) {
            if (str[svS172pHlinK] == ' ')
                break;
            else
                RxWOcq[(528 - 528)][j] = str[svS172pHlinK];
            j = j + 1;
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
            svS172pHlinK = svS172pHlinK + 1;
        };
    }
    RxWOcq[(301 - 301)][j] = '\0';
    {
        svS172pHlinK = 0;
        while (l > svS172pHlinK) {
            if (*(p + svS172pHlinK - (296 - 295)) == ' ' && *(p + svS172pHlinK) != ' ') {
                {
                    XDsZfx = svS172pHlinK;
                    j = 0;
                    while (1) {
                        if (str[XDsZfx] == ' ')
                            break;
                        else
                            RxWOcq[d][j] = *(p + XDsZfx);
                        j++;
                        XDsZfx++;
                    };
                }
                RxWOcq[d][j] = '\0';
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
                d = d + 1;
            }
            svS172pHlinK++;
        };
    }
    {
        svS172pHlinK = 0;
        while (svS172pHlinK < d) {
            if (strcmp (RxWOcq[svS172pHlinK], imIH1ka2T) == 0)
                strcpy (RxWOcq[svS172pHlinK], FKZWlx2i);
            svS172pHlinK++;
        };
    }
    {
        svS172pHlinK = 0;
        while (svS172pHlinK < d - 1) {
            printf ("%s ", RxWOcq[svS172pHlinK]);
            svS172pHlinK++;
        };
    }
    printf ("%s", RxWOcq[d - 1]);
}

