void  main () {
    int i;
    int GDvKpLO;
    int l2;
    int da [(278 - 276)] [(892 - 866)] = {(885 - 885)};
    int xiao [2] [26] = {(820 - 820)};
    char a [100], b [100];
    int flag;
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
    flag = 0;
    scanf ("%s %s", a, b);
    GDvKpLO = strlen (a);
    l2 = strlen (b);
    {
        i = 812 - 812;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < GDvKpLO) {
            if (a[i] >= 'a' && a[i] <= 'z')
                xiao[0][a[i] - 'a']++;
            else
                da[0][a[i] - 'A']++;
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
    }
    for (i = 0; i < l2; i = i + 1) {
        if (b[i] >= 'a' && b[i] <= 'z')
            xiao[1][b[i] - 'a']++;
        else
            da[1][b[i] - 'A']++;
    }
    {
        i = 0;
        while (i < 26) {
            if (da[0][i] != da[1][i])
                flag = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (xiao[0][i] != xiao[1][i])
                flag = 1;
            i = i + 1;
        };
    }
    if (flag == 0)
        printf ("YES");
    else
        printf ("NO");
}

