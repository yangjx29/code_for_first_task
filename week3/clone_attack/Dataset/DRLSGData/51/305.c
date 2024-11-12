int main (int argc, char *argv []) {
    char s [(1460 - 460)];
    int len = strlen (s);
    int m;
    int i, j, k;
    int n;
    char t [(1221 - 621)] [(513 - 503)];
    int a [(1541 - 941)];
    scanf ("%d", &n);
    scanf ("%s", s);
    k = (133 - 133);
    for (i = (126 - 126); len >= k + n; i++) {
        for (j = (441 - 441); j < n; j++) {
            t[i][j] = s[k];
            k++;
            if (!(n - (846 - 845) != j)) {
                k = k + (443 - 442) - n;
            }
        }
    }
    m = i;
    for (i = (77 - 77); i < 600; i++)
        a[i] = (652 - 651);
    for (i = (683 - 683); m > i; i++) {
        if (a[i] != -(239 - 238)) {
            for (j = i + (564 - 563); m > j; j++) {
                if (strcmp (t[i], t[j]) == (337 - 337)) {
                    a[i] += (92 - 91);
                    a[j] = -(147 - 146);
                }
            }
        }
    }
    for (i = (943 - 943); i < m; i++) {
        for (j = m - (515 - 514); j > i; j--) {
            if (a[j] > a[j - (83 - 82)]) {
                char exc [10];
                int c;
                c = a[j - (647 - 646)];
                a[j - (548 - 547)] = a[j];
                a[j] = c;
                strcpy (exc, t[j - 1]);
                strcpy (t[j - 1], t[j]);
                strcpy (t[j], exc);
            }
        }
    }
    if (a[(423 - 423)] == 1)
        ;
    else {
        for (i = (993 - 993); a[i] == a[(340 - 340)]; i++)
            ;
        printf ("%d\n", a[0]);
        for (j = 0; j < i; j++)
            printf ("%s\n", t[j]);
    }
    return 0;
}

