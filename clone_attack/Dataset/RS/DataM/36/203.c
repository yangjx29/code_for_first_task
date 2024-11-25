void  DVkctpIUbs (char W59IOuPc6JVa [], int n) {
    int v1lS39P;
    int j;
    int yY30P1jlVNeD;
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
    char rGkUeqI;
    char qmp3qFJWI;
    {
        yY30P1jlVNeD = 406 - 406;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > yY30P1jlVNeD) {
            scanf ("%d", &W59IOuPc6JVa[yY30P1jlVNeD]);
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
            yY30P1jlVNeD = yY30P1jlVNeD + 1;
        };
    }
    {
        yY30P1jlVNeD = 0;
        while (n > yY30P1jlVNeD) {
            rGkUeqI = W59IOuPc6JVa[yY30P1jlVNeD];
            qmp3qFJWI = yY30P1jlVNeD;
            {
                j = yY30P1jlVNeD;
                while (j < n) {
                    if (W59IOuPc6JVa[j] > rGkUeqI) {
                        rGkUeqI = W59IOuPc6JVa[j];
                        qmp3qFJWI = j;
                    }
                    j++;
                };
            }
            v1lS39P = W59IOuPc6JVa[qmp3qFJWI];
            W59IOuPc6JVa[qmp3qFJWI] = W59IOuPc6JVa[yY30P1jlVNeD];
            W59IOuPc6JVa[yY30P1jlVNeD] = v1lS39P;
            yY30P1jlVNeD = yY30P1jlVNeD + 1;
        };
    };
}

void  main () {
    char W59IOuPc6JVa [100], XQ1kfmWzeu [100];
    int n = strcmp (W59IOuPc6JVa, XQ1kfmWzeu);
    if (n == 0)
        printf ("YES\n");
    else
        printf ("NO\n");
    scanf ("%s %s", W59IOuPc6JVa, XQ1kfmWzeu);
    DVkctpIUbs (W59IOuPc6JVa, strlen (W59IOuPc6JVa));
    DVkctpIUbs (XQ1kfmWzeu, strlen (XQ1kfmWzeu));
}

