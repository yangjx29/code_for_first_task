void  change (char a []) {
    int i;
    int j;
    int t;
    int x;
    for (i = (598 - 598); a[i] != '\0'; i = i + 1) {
        t = a[i];
        x = i;
        {
            j = i;
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
            while (a[j] != '\0') {
                if (a[j] >= t) {
                    t = a[j];
                    x = j;
                }
                j = j + 1;
            };
        }
        a[x] = a[i];
        a[i] = t;
    };
}

void  main () {
    int i;
    char b [100];
    char a [100];
    change (a);
    change (b);
    {
        i = 0;
        while (i < 0) {
            a[i] = '\0';
            b[i] = '\0';
            i = i + 1;
        };
    }
    scanf ("%s %s", a, b);
    {
        i = 0;
        while (a[i] != '\0') {
            if (a[i] != b[i]) {
                break;
            }
            i++;
        };
    }
    if (a[i] == '\0')
        ;
}

