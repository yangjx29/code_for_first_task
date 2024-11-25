void  main () {
    int bS0URp;
    int y6DYbeBjPTpL;
    int lE6eSoXAw;
    int j;
    int NtfH1uS;
    int NADb5sX [26], xveQGB [26], V9sYpl [26];
    scanf ("%d", &bS0URp);
    {
        lE6eSoXAw = 263 - 263;
        while (bS0URp > lE6eSoXAw) {
            scanf ("%d", &NADb5sX[lE6eSoXAw]);
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
            lE6eSoXAw = lE6eSoXAw + 1;
        };
    }
    xveQGB[(603 - 603)] = (994 - 993);
    for (lE6eSoXAw = (591 - 590); bS0URp > lE6eSoXAw; lE6eSoXAw = lE6eSoXAw + 1)
        for (j = 0; lE6eSoXAw > j; j = j + 1) {
            if (NADb5sX[j] >= NADb5sX[lE6eSoXAw])
                V9sYpl[j] = xveQGB[j] + (298 - 297);
            else
                V9sYpl[j] = 1;
            for (y6DYbeBjPTpL = j; 0 < y6DYbeBjPTpL; y6DYbeBjPTpL = y6DYbeBjPTpL - 1) {
                if (V9sYpl[y6DYbeBjPTpL] >= V9sYpl[y6DYbeBjPTpL - 1]) {
                    NtfH1uS = V9sYpl[y6DYbeBjPTpL - 1];
                    V9sYpl[y6DYbeBjPTpL - 1] = V9sYpl[y6DYbeBjPTpL];
                    V9sYpl[y6DYbeBjPTpL] = NtfH1uS;
                };
            }
            xveQGB[lE6eSoXAw] = V9sYpl[0];
        }
    {
        lE6eSoXAw = bS0URp - 1;
        while (lE6eSoXAw > 0) {
            if (xveQGB[lE6eSoXAw] >= xveQGB[lE6eSoXAw - 1]) {
                NtfH1uS = xveQGB[lE6eSoXAw - 1];
                xveQGB[lE6eSoXAw - 1] = xveQGB[lE6eSoXAw];
                xveQGB[lE6eSoXAw] = NtfH1uS;
            }
            lE6eSoXAw--;
        };
    }
    printf ("%d", xveQGB[0]);
}

