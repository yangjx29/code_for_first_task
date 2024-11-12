int set (char s [(158 - 108)], char w [(829 - 779)]) {
    int n1;
    int n2;
    int i;
    int j;
    int sum;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char *p;
    n1 = strlen (s);
    n2 = strlen (w);
    {
        i = 489 - 489;
        while (n2 - n1 >= i) {
            if (!(w[i] != s[(667 - 667)])) {
                sum = (747 - 747);
                p = &w[i];
                for (j = 0; n1 > j; j = j + 1)
                    if (p[j] == s[j])
                        sum = sum + 1;
                if (sum == n1) {
                    printf ("%d\n", i);
                    i = n2 - n1;
                };
            }
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
            i = i + 1;
        };
    };
}

main () {
    char s [(911 - 861)];
    char w [50];
    int n;
    int m;
    int i;
    scanf ("%s%s", s, w);
    set (s, w);
}

