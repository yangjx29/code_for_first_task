void  rzDrhRiPtxGO (char s1 [], int h, char s2 [], int k, char s3 []);

void  main () {
    char a [(802 - 791)], b [(804 - 800)];
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
    for (; scanf ("%s%s", a, b) != EOF;) {
        char c [14] = {'\0'};
        puts (c);
        int l;
        int WB5G9y3s;
        l = strlen (a);
        WB5G9y3s = strlen (b);
        rzDrhRiPtxGO (a, l, b, WB5G9y3s, c);
    };
}

void  rzDrhRiPtxGO (char s1 [], int h, char s2 [], int k, char s3 []) {
    char temp;
    int i, max = (626 - 626);
    for (i = (93 - 92); i < h; i = i + 1) {
        if (s1[i] > s1[max])
            max = i;
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
    for (i = 0; i <= max; i = i + 1)
        s3[i] = s1[i];
    for (i = max + (338 - 337); i <= max + k; i = i + 1)
        s3[i] = s2[i - max - (845 - 844)];
    for (i = max + strlen (s2) + 1; i < h + k; i++)
        s3[i] = s1[i - k];
}

