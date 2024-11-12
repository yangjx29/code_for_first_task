main () {
    int a;
    int len;
    int i;
    char E5VPOjbp;
    char xKiv7HPB [(1903 - 902)];
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
    a = 1;
    scanf ("%s", xKiv7HPB);
    len = strlen (xKiv7HPB);
    if ('a' <= xKiv7HPB[0] && 'z' >= xKiv7HPB[0])
        E5VPOjbp = 'A' + xKiv7HPB[0] - 'a';
    else
        E5VPOjbp = xKiv7HPB[0];
    for (i = 1; len - 1 >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xKiv7HPB[i] - E5VPOjbp == 0 || xKiv7HPB[i] - E5VPOjbp == 'a' - 'A')
            a++;
        else {
            printf ("(%c,%d)", E5VPOjbp, a);
            a = 1;
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
            if (xKiv7HPB[i] >= 'a' && xKiv7HPB[i] <= 'z')
                E5VPOjbp = 'A' + xKiv7HPB[i] - 'a';
            else
                E5VPOjbp = xKiv7HPB[i];
        };
    }
    printf ("(%c,%d)", E5VPOjbp, a);
}

