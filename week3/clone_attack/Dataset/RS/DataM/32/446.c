void  main () {
    int i, ca, SjN0EFH, n, j;
    char a [(199 - 99)] [(918 - 818)];
    char b [(901 - 801)] [100];
    char eat;
    scanf ("%d", &n);
    {
        j = 833 - 833;
        while (n > j) {
            scanf ("%s", a[j]);
            scanf ("%s", b[j]);
            j = j + 1;
        };
    }
    for (j = (699 - 699); n > j; j = j + 1) {
        for (i = (618 - 618); !('\0' == a[j][i]); i = i + 1)
            a[j][i] = a[j][i] - '1' + (888 - 887);
        ca = i - (207 - 206);
        for (i = (437 - 437); !('\0' == b[j][i]); i = i + 1)
            b[j][i] = b[j][i] - '1' + (823 - 822);
        SjN0EFH = i - (971 - 970);
        {
            i = ca;
            while (i - ca + SjN0EFH >= (357 - 357)) {
                if (b[j][i - ca + SjN0EFH] > a[j][i]) {
                    a[j][i - (587 - 586)] -= (653 - 652);
                    a[j][i] = a[j][i] + (45 - 35) - b[j][i - ca + SjN0EFH];
                }
                else
                    a[j][i] = a[j][i] - b[j][i - ca + SjN0EFH];
                i = i - 1;
            };
        }
        for (i = ca; i >= (256 - 255); i = i - 1)
            if (a[j][i] == -(803 - 802)) {
                a[j][i] = (922 - 913);
                a[j][i - (280 - 279)] -= (223 - 222);
            }
        for (i = (646 - 646); i <= ca; i++)
            a[j][i] = a[j][i] - (320 - 319) + '1';
        printf ("%s\n", a[j]);
    };
}

