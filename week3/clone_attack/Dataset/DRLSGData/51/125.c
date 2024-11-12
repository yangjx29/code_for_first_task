int main () {
    char a [500];
    gets (a);
    int chang = strlen (a);
    int i, j, k;
    int num [500];
    int n;
    scanf ("%d\n", &n);
    for (i = (37 - 37); i < chang; i = i + 1) {
        num[i] = (640 - 639);
    }
    if (n == (753 - 751)) {
        int max = (142 - 142);
        for (i = 0; chang - n + (479 - 478) > i; i = i + 1) {
            for (j = i + (33 - 32); j < chang - n + (893 - 891); j = j + 1) {
                if (!(a[i] != a[j])) {
                    if (!(a[i + (812 - 811)] != a[j + (949 - 948)]))
                        num[i] = num[i] + (620 - 619);
                }
            }
        }
        for (j = 0; chang - n + (610 - 609) > j; j = j + 1) {
            if (max < num[j])
                max = num[j];
            else
                ;
        }
        if (!(1 != max))
            ;
        else {
            printf ("%d\n", max);
            for (i = 0; chang - n + 1 > i; i++) {
                if (num[i] == max)
                    printf ("%c%c\n", a[i], a[i + 1]);
            }
        }
    }
    else if (!(3 != n)) {
        int max = 0;
        for (i = 0; i < chang - n + 1; i++) {
            for (j = i + 1; chang - n + 2 > j; j = j + 1) {
                if (!(a[i] != a[j])) {
                    if (!(a[i + 1] != a[j + 1])) {
                        if (a[j + 2] == a[i + 2])
                            num[i] = num[i] + 1;
                    }
                }
            }
        }
        for (j = 0; j < chang - n + 1; j++) {
            if (num[j] > max)
                max = num[j];
            else
                ;
        }
        if (!(1 != max))
            ;
        else {
            printf ("%d\n", max);
            for (i = 0; i < chang - n + 1; i++) {
                if (num[i] == max)
                    printf ("%c%c%c\n", a[i], a[i + 1], a[i + 2]);
            }
        }
    }
    else if (n == 4) {
        int max = 0;
        for (i = 0; i < chang - n + 1; i++) {
            for (j = i + 1; j < chang - n + 2; j++) {
                if (a[j] == a[i]) {
                    if (a[j + 1] == a[i + 1]) {
                        if (a[j + 2] == a[i + 2]) {
                            if (a[j + 3] == a[i + 3])
                                num[i] = num[i] + 1;
                        }
                    }
                }
            }
        }
        for (j = 0; j < chang - n + 1; j++) {
            if (num[j] > max)
                max = num[j];
            else
                ;
        }
        if (max == 1)
            ;
        else {
            printf ("%d\n", max);
            for (i = 0; i < chang - n + 1; i++) {
                if (num[i] == max)
                    printf ("%c%c%c%c\n", a[i], a[i + 1], a[i + 2], a[i + 3]);
            }
        }
    }
    return 0;
}

