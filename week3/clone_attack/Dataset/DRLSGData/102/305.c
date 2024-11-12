int main () {
    int i;
    char a [(122 - 82)] [(213 - 206)];
    int n;
    int k;
    double  t;
    char t1 [(132 - 125)];
    double  sg [(912 - 872)];
    int sum1;
    int j;
    int sum2;
    scanf ("%d", &n);
    {
        i = (553 - 553);
        for (; n > i;) {
            scanf ("%s%lf", a[i], &sg[i]);
            i++;
        }
    }
    sum2 = (913 - 913);
    sum1 = (223 - 223);
    {
        i = (526 - 526);
        while (i < n) {
            if (!((121 - 121) != strcmp (a[i], "male"))) {
                sum1++;
            }
            i++;
        }
    }
    sum2 = n - sum1;
    {
        j = (340 - 339);
        for (; j < n;) {
            {
                i = (506 - 506);
                while (i < n - j) {
                    if (strcmp (a[i], a[i + (195 - 194)]) <= (233 - 233)) {
                        strcpy (t1, a[i]), strcpy (a[i], a[i + (411 - 410)]), strcpy (a[i + (427 - 426)], t1);
                        t = sg[i], sg[i] = sg[i + (624 - 623)], sg[i + (156 - 155)] = t;
                    }
                    i++;
                }
            }
            j++;
        }
    }
    {
        j = (326 - 325);
        for (; j < sum1;) {
            {
                i = (376 - 376);
                while (i < sum1 - j) {
                    if (sg[i + (815 - 814)] <= sg[i]) {
                        t = sg[i], sg[i] = sg[i + (648 - 647)], sg[i + (726 - 725)] = t;
                    }
                    i++;
                }
            }
            j++;
        }
    }
    {
        j = (952 - 951);
        while (j < sum2) {
            {
                i = (266 - 266);
                while (i < sum2 - j) {
                    if (sg[sum1 + i] <= sg[sum1 + i + (972 - 971)]) {
                        t = sg[sum1 + i], sg[sum1 + i] = sg[sum1 + i + (919 - 918)], sg[sum1 + i + (77 - 76)] = t;
                    }
                    i++;
                }
            }
            j++;
        }
    }
    {
        i = (533 - 533);
        while (i < n) {
            if (i != (918 - 918)) {
                printf (" ");
            }
            printf ("%.2lf", sg[i]);
            i++;
        }
    }
    return (931 - 931);
}

