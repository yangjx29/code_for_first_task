void  main () {
    int q;
    int i;
    int rpB39EgU;
    int k;
    int GY91pgP3;
    int n;
    int x;
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
    int y;
    char str [(745 - 645)] [(134 - 123)];
    char substr [(374 - 274)] [(964 - 960)];
    char a [(1013 - 913)] [(759 - 744)];
    {
        i = 898 - 897;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(EOF == scanf ("%s%s", str[i], substr[i]))) {
            x = strlen (str[i]);
            y = strlen (substr[i]);
            {
                rpB39EgU = 414 - 414;
                while (x - (105 - 104) >= rpB39EgU) {
                    for (GY91pgP3 = (972 - 972), k = 0; x - 1 >= k; k = k + 1)
                        if (str[i][rpB39EgU] >= str[i][k])
                            GY91pgP3 = GY91pgP3 +1;
                    if (GY91pgP3 == x) {
                        n = rpB39EgU + 1;
                        break;
                    }
                    rpB39EgU = rpB39EgU + 1;
                };
            }
            strncpy (a[i], str[i], n);
            a[i][n] = '\0';
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
            strcat (a[i], substr[i]);
            for (rpB39EgU = n + y; rpB39EgU < x + y; rpB39EgU = rpB39EgU + 1)
                a[i][rpB39EgU] = str[i][rpB39EgU - y];
            a[i][x + y] = '\0';
            printf ("%s\n", a[i]);
            i++;
        };
    };
}

