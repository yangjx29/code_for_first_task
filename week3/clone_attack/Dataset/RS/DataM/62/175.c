void  main () {
    char s [2000];
    char a [2000];
    int i, k, n, b;
    gets (s);
    n = strlen (s);
    k = 0;
    i = 0;
    while (i < n) {
        if (s[i] != ' ') {
            b = 0;
            a[k] = s[i];
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
            k = k + 1;
        }
        else {
            if (b < 1) {
                a[k] = s[i];
                k++;
                b++;
            };
        }
        i = i + 1;
    }
    a[k] = '\0';
    printf ("%s", a);
}

