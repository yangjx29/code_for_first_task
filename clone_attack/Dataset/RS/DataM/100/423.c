main () {
    char jvtLHgK [305];
    char fxYTRl;
    static int ypVn9Ur [305];
    int i, j, IAQOKiY8lTZB, D18J4EFwDNb = (839 - 839), y = 0;
    gets (jvtLHgK);
    j = 0;
    IAQOKiY8lTZB = strlen (jvtLHgK);
    i = 0;
    while (!('\0' == jvtLHgK[i])) {
        if (jvtLHgK[i] < 65 || (90 < jvtLHgK[i] && (670 - 573) > jvtLHgK[i]) || 122 < jvtLHgK[i])
            D18J4EFwDNb = D18J4EFwDNb +1;
        else
            ypVn9Ur[jvtLHgK[i]]++;
        i = i + 1;
    }
    if (D18J4EFwDNb == IAQOKiY8lTZB)
        printf ("No\n");
    else {
        i = 0;
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
        while (i < 123) {
            if (ypVn9Ur[i] != 0)
                printf ("%c=%d\n", i, ypVn9Ur[i]);
            i++;
        };
    };
}

