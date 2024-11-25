main () {
    int fEPlQvoS;
    int RqEwBHil;
    int qS0A9i;
    int y2;
    int i;
    int XdBYjoKa7;
    int k;
    int AODijwQST [fEPlQvoS] [RqEwBHil];
    int b [qS0A9i] [y2];
    int v6rDnEv2B3mx [fEPlQvoS] [y2];
    scanf ("%d %d", &fEPlQvoS, &RqEwBHil);
    {
        i = 451 - 451;
        while (i <= fEPlQvoS - (11 - 10)) {
            {
                XdBYjoKa7 = 125 - 125;
                while (XdBYjoKa7 <= RqEwBHil -(518 - 517)) {
                    scanf ("%d", &AODijwQST[i][XdBYjoKa7]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    XdBYjoKa7 = XdBYjoKa7 +1;
                };
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &qS0A9i, &y2);
    {
        i = 486 - 486;
        while (i <= qS0A9i - (345 - 344)) {
            for (XdBYjoKa7 = (53 - 53); XdBYjoKa7 <= y2 - 1; XdBYjoKa7 = XdBYjoKa7 +1)
                scanf ("%d", &b[i][XdBYjoKa7]);
            i++;
        };
    }
    for (i = 0; i <= fEPlQvoS - 1; i++) {
        XdBYjoKa7 = 0;
        while (XdBYjoKa7 <= y2 - 1) {
            v6rDnEv2B3mx[i][XdBYjoKa7] = 0;
            {
                k = 0;
                while (k <= RqEwBHil -1) {
                    v6rDnEv2B3mx[i][XdBYjoKa7] = v6rDnEv2B3mx[i][XdBYjoKa7] + AODijwQST[i][k] * b[k][XdBYjoKa7];
                    k = k + 1;
                };
            }
            if (XdBYjoKa7 != y2 - 1)
                printf ("%d ", v6rDnEv2B3mx[i][XdBYjoKa7]);
            else {
                if (XdBYjoKa7 == y2 - 1 && i != fEPlQvoS - 1)
                    printf ("%d\n", v6rDnEv2B3mx[i][XdBYjoKa7]);
                else if (XdBYjoKa7 == y2 - 1 && i == fEPlQvoS - 1)
                    printf ("%d", v6rDnEv2B3mx[i][XdBYjoKa7]);
            }
            XdBYjoKa7 = XdBYjoKa7 +1;
        };
    };
}

