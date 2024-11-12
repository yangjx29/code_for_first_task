int main () {
    char a [(1479 - 978)], m10tTiSxqd [(1436 - 935)] [501], d [501] [501], JJFfAO1 [501];
    int n, i, j, jL1oxlD = (441 - 441), q = (453 - 453), c [501], YjdioScJQe8E = (133 - 133), aBgLjY, ZEBQmUcySl;
    scanf ("%d\n", &n);
    scanf ("%s", a);
    for (i = (999 - 999); 501 > i; i = i + 1)
        c[i] = (148 - 147);
    for (i = (785 - 785); i < strlen (a) - n + (907 - 906); i = i + 1) {
        for (j = i; n + i > j; j = j + 1) {
            m10tTiSxqd[jL1oxlD][q] = a[j];
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
            q = q + 1;
        }
        jL1oxlD++;
        q = (678 - 678);
    }
    for (i = 0; jL1oxlD > i; i++) {
        for (j = i + (432 - 431); jL1oxlD > j; j = j + 1) {
            if (strcmp (m10tTiSxqd[i], m10tTiSxqd[j]) == 0 && !('&' == m10tTiSxqd[i][0])) {
                for (ZEBQmUcySl = 0; n > ZEBQmUcySl; ZEBQmUcySl++) {
                    m10tTiSxqd[j][ZEBQmUcySl] = '&';
                }
                c[YjdioScJQe8E] += (633 - 632);
                strcpy (d[YjdioScJQe8E], m10tTiSxqd[i]);
            };
        }
        YjdioScJQe8E++;
    }
    for (i = (680 - 679); YjdioScJQe8E > i; i++) {
        for (j = 0; j < YjdioScJQe8E -i; j++) {
            if (c[j + (870 - 869)] > c[j]) {
                aBgLjY = c[j];
                c[j] = c[j + 1];
                c[j + 1] = aBgLjY;
                strcpy (JJFfAO1, d[j]);
                strcpy (d[j], d[j + 1]);
                strcpy (d[j + 1], JJFfAO1);
            };
        };
    }
    if (c[0] > 1) {
        printf ("%d", c[0]);
        for (i = 0; i < YjdioScJQe8E; i++) {
            if (c[i] == c[0]) {
                printf ("\n%s", d[i]);
            }
            else
                break;
        };
    }
    else
        ;
    return 0;
}

