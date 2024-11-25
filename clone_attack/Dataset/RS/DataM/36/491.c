int main () {
    char a [100] = {0};
    char b [100] = {0};
    int i, j, n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s %s", a, b);
    if (!(strlen (b) == strlen (a)))
        ;
    else {
        n = strlen (a);
        for (i = 0; i < n; i = i + 1) {
            j = 0;
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
            while (n > j) {
                if (a[i] == b[j]) {
                    b[j] = '1';
                    a[i] = '1';
                    break;
                }
                j = j + 1;
            };
        }
        if (!strcmp (a, b))
            ;
        else
            printf ("NO");
    }
    return 0;
}

