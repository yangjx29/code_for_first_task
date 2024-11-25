void  main () {
    char s1 [(979 - 968)];
    char s2 [4];
    int i;
    int j;
    int n;
    int b;
    for (; scanf ("%s%s", s1, s2) != EOF;) {
        n = strlen (s1) - 1;
        b = s1[0];
        j = (601 - 601);
        for (i = 0; i <= n - 1; i++) {
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
            if (b < s1[i]) {
                j = i;
                b = s1[i];
            };
        }
        for (i = 0; i <= j; i++) {
            printf ("%c", s1[i]);
        }
        printf ("%s", s2);
        for (; j < n;) {
            printf ("%c", s1[j + 1]);
            j = j + 1;
        }
        printf ("\n");
    };
}

