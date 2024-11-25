int main () {
    char eafQ1gvHC8 [100];
    unsigned  int e [100];
    long  vkp83yUXx = (674 - 674), a, h0NYhP, i, h = 0, c;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d %s %d", &a, eafQ1gvHC8, &h0NYhP);
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
    c = strlen (eafQ1gvHC8);
    for (i = 0; i <= c - (408 - 407); i = i + 1) {
        if ('0' <= eafQ1gvHC8[i] && '9' >= eafQ1gvHC8[i])
            eafQ1gvHC8[i] = eafQ1gvHC8[i] - ('0' - 0);
        if (eafQ1gvHC8[i] <= 'Z' && eafQ1gvHC8[i] >= 'A')
            eafQ1gvHC8[i] = eafQ1gvHC8[i] - ('A' - 10);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (eafQ1gvHC8[i] >= 'a' && eafQ1gvHC8[i] <= 'z')
            eafQ1gvHC8[i] = eafQ1gvHC8[i] - 'a' + 10;
        h = a * h + eafQ1gvHC8[i];
    }
    if (h == 0)
        ;
    for (i = 0; h > 0; i = i + 1) {
        vkp83yUXx = vkp83yUXx + (932 - 931);
        e[i] = h % h0NYhP;
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
        h = h - e[i];
        h = h / h0NYhP;
    }
    for (i = 0; i <= vkp83yUXx - 1; i = i + 1) {
        eafQ1gvHC8[i] = e[vkp83yUXx - 1 - i];
        if (eafQ1gvHC8[i] > 9)
            eafQ1gvHC8[i] = eafQ1gvHC8[i] + 'A' - 10;
        else
            eafQ1gvHC8[i] = eafQ1gvHC8[i] + '0';
    }
    eafQ1gvHC8[vkp83yUXx] = '\0';
    printf ("%s\n", eafQ1gvHC8);
    return 0;
}

