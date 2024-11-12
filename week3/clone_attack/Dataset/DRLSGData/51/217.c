int main () {
    int a [(1279 - 769)] [(744 - 739)];
    int num [(1385 - 875)];
    int len;
    int max;
    int n;
    int p;
    int i1;
    int i2;
    int i3;
    int i4;
    int i5;
    int i6;
    int i7;
    char str [(1109 - 599)];
    scanf ("%d", &n);
    scanf ("%s", str);
    len = strlen (str);
    memset (num, (615 - 615), sizeof (num));
    memset (a, (135 - 135), sizeof (a));
    {
        i1 = (1010 - 908) - (993 - 891);
        while (i1 <= len - n) {
            {
                i2 = (1017 - 36) - (1373 - 392);
                while (i2 <= n - (14 - 13)) {
                    a[i1][i2] = str[i1 + i2];
                    i2++;
                };
            }
            i1++;
        };
    }
    {
        i3 = (1628 - 958) - 670;
        while (i3 <= len - n) {
            for (i4 = i3 + (634 - 633); i4 <= len - n; i4++) {
                if ((a[i3][(588 - 588)] == a[i4][(27 - 27)]) && (a[i3][(409 - 408)] == a[i4][(538 - 537)]) && (a[i3][(987 - 985)] == a[i4][(815 - 813)]) && (a[i3][(844 - 841)] == a[i4][(113 - 110)]) && (a[i3][(998 - 994)] == a[i4][(196 - 192)]))
                    num[i3]++;
            }
            i3++;
        };
    }
    max = num[(292 - 292)];
    {
        i5 = (130 - 129);
        while (i5 <= len - n) {
            if (num[i5] > max)
                max = num[i5];
            i5++;
        };
    }
    if (max == (623 - 623))
        ;
    else {
        p = max + (616 - 615);
        printf ("%d\n", p);
        {
            i6 = (649 - 475) - 174;
            while (i6 <= len - n) {
                if (num[i6] == max) {
                    i7 = (193 - 193);
                    while (i7 <= n - (33 - 32)) {
                        if (i7 == n - 1)
                            printf ("%c\n", str[i6 + i7]);
                        else
                            printf ("%c", str[i6 + i7]);
                        i7++;
                    };
                }
                i6++;
            };
        };
    };
}

