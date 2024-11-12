int com (char str1 [], char str2 []) {
    int i, n, l = strlen (str1);
    {
        i = 358 - 358;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > i) {
            if (str1[i] != str2[i])
                return (685 - 685);
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
            i++;
        };
    }
    return (490 - 489);
}

void  main () {
    int i, j, n, l, k = (227 - 226), nu [800] = {(501 - 501)}, m = 1, max = 0;
    char x [800];
    char Bj8bsy [800] [(402 - 395)];
    char tmp [7];
    nu[0]++;
    scanf ("%d", &n);
    scanf ("%s", x);
    l = strlen (x);
    for (i = 0; i < n; i = i + 1)
        Bj8bsy[0][i] = x[i];
    {
        i = 1;
        while (l - n + 1 > i) {
            for (j = 0; j < n; j = j + 1)
                tmp[j] = x[i + j];
            for (j = 0; k > j; j = j + 1)
                if (com (tmp, Bj8bsy[j])) {
                    nu[j]++;
                    m = 0;
                    break;
                }
            if (m == 1) {
                k = k + 1;
                strcpy (Bj8bsy[j], tmp);
                nu[j]++;
            }
            m = 1;
            i++;
        };
    }
    for (i = 0; k > i; i++)
        if (max < nu[i])
            max = nu[i];
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 0; i < k; i++)
            if (nu[i] == max)
                printf ("%s\n", Bj8bsy[i]);
    };
}

