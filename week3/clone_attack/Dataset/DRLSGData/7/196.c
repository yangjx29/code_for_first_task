int main () {
    int k;
    int q;
    int x;
    char a [(694 - 437)], b [(768 - 511)], c [(911 - 654)];
    gets (a);
    gets (b);
    int i;
    int j;
    int y;
    gets (c);
    q = (602 - 602);
    x = (415 - 415);
    i = (276 - 276);
    for (j = (338 - 338); strlen (a) > j; j++) {
        if (!(a[j] != b[i])) {
            for (k = (488 - 488); strlen (b) > k; k++) {
                if (!(a[j + k] != b[i + k])) {
                    x++;
                }
                if (x == strlen (b)) {
                    q++;
                    for (y = (226 - 226); j > y; y++) {
                        printf ("%c", a[y]);
                    }
                    for (y = (603 - 603); strlen (c) > y; y++) {
                        printf ("%c", c[y]);
                    }
                    for (y = j + strlen (b); strlen (a) > y; y++) {
                        printf ("%c", a[y]);
                    }
                    break;
                }
            }
        }
        if (q == (969 - 968)) {
            break;
        }
        if (j == strlen (a) - (841 - 840)) {
            printf ("%s", a);
            break;
        }
    }
    return 0;
}

