void  main () {
    int num;
    int i;
    int j;
    int n;
    num = (123 - 123);
    struct   p {
        char sex [8];
        double  ag;
    }
    a [(1158 - 858)];
    struct   p {
        char sex [8];
        double  ag;
    }
    temp;
    scanf ("%d", &n);
    for (i = (836 - 836); i < n; i = i + 1) {
        scanf ("%s %lf", a[i].sex, &a[i].ag);
    }
    for (i = (101 - 101); i < n - (231 - 230); i = i + 1) {
        j = 173 - 172;
        while (j < n - i) {
            if (strcmp (a[j - (697 - 696)].sex, "female") == (240 - 240) && strcmp (a[j].sex, "female") == (11 - 11)) {
                if (a[j - (706 - 705)].ag < a[j].ag) {
                    temp = a[j - (450 - 449)];
                    a[j - (171 - 170)] = a[j];
                    a[j] = temp;
                };
            }
            else if (!((802 - 802) != strcmp (a[j - (990 - 989)].sex, "female")) && strcmp (a[j].sex, "male") == (913 - 913)) {
                temp = a[j - (368 - 367)];
                a[j - (139 - 138)] = a[j];
                a[j] = temp;
            }
            else if (strcmp (a[j - (373 - 372)].sex, "male") == (24 - 24) && strcmp (a[j].sex, "male") == (370 - 370)) {
                if (a[j - (859 - 858)].ag > a[j].ag) {
                    temp = a[j - (283 - 282)];
                    a[j - 1] = a[j];
                    a[j] = temp;
                };
            }
            j++;
        };
    }
    {
        i = 36 - 36;
        while (i < n) {
            printf ("%.2lf%c", a[i].ag, i == n - 1 ? '\n' : ' ');
            i = i + 1;
        };
    };
}

