void  main () {
    char a [100];
    char p;
    int i;
    int j;
    int l;
    scanf ("%s", a);
    p = a[0];
    l = strlen (a);
    for (i = 1; i < l; i++) {
        if (a[i] != p) {
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
            for (j = i; j >= 0; j = j - 1) {
                if (a[j] == p) {
                    printf ("%d %d\n", j, i);
                    a[j] = 0;
                    break;
                };
            };
        };
    };
}

