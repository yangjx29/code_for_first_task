main () {
    static char x [(100750 - 750)];
    int i;
    int t;
    int j;
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
    int k;
    scanf ("%d", &t);
    for (i = (975 - 974); t >= i; i++) {
        scanf ("%s", x);
        for (k = (317 - 317); !('\0' == x[k]); k++) {
            for (j = (187 - 187); !('\0' == x[j]); j++)
                if (!(x[j] != x[k]) && k != j)
                    break;
            if (x[j] == '\0') {
                printf ("%c\n", x[k]);
                break;
            };
        }
        if (x[k] == '\0')
            ;
        for (j = 1; j < (100783 - 783); j++)
            x[j] = '\0';
    };
}

