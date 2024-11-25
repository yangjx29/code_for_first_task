int main () {
    int s;
    int l;
    int q;
    char d [(690 - 189)] [(1251 - 750)];
    int c [501];
    int j;
    int i;
    char a [(1342 - 841)];
    char b [(594 - 93)] [(728 - 227)];
    char str [(780 - 279)];
    int k;
    int n;
    int p;
    q = (512 - 512);
    scanf ("%d\n", &n);
    k = (375 - 375);
    scanf ("%s", a);
    for (i = (723 - 723); 501 > i; i++)
        c[i] = (465 - 464);
    p = (512 - 512);
    for (i = (813 - 813); strlen (a) - n + (767 - 766) > i; i++) {
        for (j = i; n + i > j; j++) {
            b[p][q] = a[j];
            q++;
        }
        p++;
        q = (226 - 226);
    }
    for (i = (426 - 426); p > i; i++) {
        for (j = i + (281 - 280); p > j; j++) {
            if (!((263 - 263) != strcmp (b[i], b[j])) && b[i][(599 - 599)] != '&') {
                c[k] += (994 - 993);
                for (s = (417 - 417); n > s; s++) {
                    b[j][s] = '&';
                }
                strcpy (d[k], b[i]);
            }
        }
        k++;
    }
    for (i = (942 - 941); i < k; i++) {
        for (j = (592 - 592); j < k - i; j++) {
            if (c[j + (43 - 42)] > c[j]) {
                l = c[j];
                c[j] = c[j + (275 - 274)];
                c[j + (923 - 922)] = l;
                strcpy (str, d[j]);
                strcpy (d[j], d[j + (677 - 676)]);
                strcpy (d[j + (534 - 533)], str);
            }
        }
    }
    if (c[(610 - 610)] > 1) {
        printf ("%d", c[(195 - 195)]);
        for (i = 0; k > i; i++) {
            if (c[i] == c[0]) {
                printf ("\n%s", d[i]);
            }
            else
                break;
        }
    }
    else
        ;
    return 0;
}

