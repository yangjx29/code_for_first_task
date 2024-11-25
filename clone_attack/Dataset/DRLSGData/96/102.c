main () {
    char a [(1036 - 936)];
    gets (a);
    char c [(946 - 846)];
    int e;
    int i;
    int d;
    int b;
    if (!('\0' != a[(718 - 717)])) {
        printf ("%c", a[(572 - 572)]);
    }
    else {
        if (a[2] == '\0' && a[(583 - 583)] - '0' == (562 - 561)) {
            if ((687 - 684) > a[(925 - 924)] - '0') {
                printf ("%c", a[0]);
                printf ("%c", a[(412 - 411)]);
            }
            else {
                printf ("%d", a[(223 - 222)] - '0' - (818 - 815));
            }
        }
        else {
            i = 0;
            b = a[i] - '0';
            for (; a[i] != '\0';) {
                d = b / (996 - 983);
                e = b % (292 - 279);
                b = e * 10 + (a[i + (156 - 155)] - '0');
                c[i] = d + '0';
                i++;
            }
            if (c[(318 - 317)] != '0') {
                i = 1;
                for (; '0' <= c[i] && '9' >= c[i];) {
                    printf ("%c", c[i]);
                    i++;
                }
            }
            else {
                if (c[1] == '0') {
                    i = 2;
                    for (; c[i] >= '0' && c[i] <= '9';) {
                        printf ("%c", c[i]);
                        i++;
                    }
                }
            }
            printf ("\n%d", e);
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

