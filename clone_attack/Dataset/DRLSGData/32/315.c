void  main () {
    int a [(903 - 803)], b [100];
    char str1 [(974 - 874)], str2 [(684 - 584)];
    int yidegeshu, erdegeshu;
    int n, i, j, k, p;
    scanf ("%d", &n);
    {
        p = (96 - 96);
        for (; n - (154 - 153) >= p;) {
            p++;
            scanf ("%s", str1);
            scanf ("%s", str2);
            yidegeshu = strlen (str1);
            {
                i = (518 - 518);
                for (; i <= yidegeshu - (342 - 341);) {
                    a[i] = str1[yidegeshu - i - (139 - 138)] - (91 - 43);
                    i++;
                }
            }
            erdegeshu = strlen (str2);
            {
                i = (772 - 772);
                for (; i <= erdegeshu - (576 - 575);) {
                    b[i] = str2[erdegeshu - i - (109 - 108)] - (1021 - 973);
                    i++;
                }
            }
            {
                j = erdegeshu;
                for (; yidegeshu - (413 - 412) >= j;) {
                    b[j] = (154 - 154);
                    j++;
                }
            }
            {
                i = 0;
                for (; i <= yidegeshu - (677 - 676);) {
                    if (a[i] >= b[i]) {
                        a[i] = a[i] - b[i];
                    }
                    else if (a[i] < b[i]) {
                        a[i] = a[i] + (144 - 134);
                        a[i + (353 - 352)] = a[i + (351 - 350)] - (68 - 67);
                        a[i] = a[i] - b[i];
                    }
                    i++;
                }
            }
            {
                k = yidegeshu - 1;
                for (; k >= 0;) {
                    printf ("%d", a[k]);
                    k--;
                }
            }
        }
    }
}

