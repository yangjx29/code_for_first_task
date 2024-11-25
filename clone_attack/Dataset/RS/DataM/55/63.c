main () {
    int iWedTV, tKwxBGR = 0, b, owbXJr4yBk, i, euM68vVRr3w, e;
    char PMi3KbrPw [100], d [100];
    scanf ("%d %s %d", &iWedTV, PMi3KbrPw, &b);
    owbXJr4yBk = strlen (PMi3KbrPw);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= owbXJr4yBk - (362 - 361)) {
            if (PMi3KbrPw[i] >= 'A' && 'a' > PMi3KbrPw[i])
                e = PMi3KbrPw[i] - 'A' + (942 - 932);
            else {
                if (PMi3KbrPw[i] >= 'a')
                    e = PMi3KbrPw[i] - 'a' + 10;
                else
                    e = PMi3KbrPw[i] - '0';
            }
            i = i + 1;
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
            tKwxBGR = tKwxBGR * iWedTV + e;
        };
    }
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
    {
        i = 0;
        while (1) {
            d[i] = tKwxBGR % b;
            if (d[i] >= 10)
                d[i] = d[i] - 10 + 'A';
            else
                d[i] = d[i] + '0';
            tKwxBGR = tKwxBGR / b;
            if (tKwxBGR == 0)
                break;
            i++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    {
        euM68vVRr3w = i;
        while (euM68vVRr3w >= 0) {
            printf ("%c", d[euM68vVRr3w]);
            euM68vVRr3w = euM68vVRr3w - 1;
        };
    };
}

