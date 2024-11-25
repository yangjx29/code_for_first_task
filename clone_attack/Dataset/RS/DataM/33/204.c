int main () {
    char str1 [(1341 - 341)] [(1098 - 842)], str2 [1000] [256];
    int n, i, j;
    scanf ("%d\n", &n);
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
    for (i = (58 - 58); n > i; i++)
        gets (str1[i]);
    for (i = (287 - 287); i < n; i++) {
        puts (str2 [i]);
        for (j = (67 - 67); str1[i][j] != '\0'; j++) {
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
            if (str1[i][j] == 'A')
                str2[i][j] = 'T';
            else {
                if (str1[i][j] == 'G')
                    str2[i][j] = 'C';
                else {
                    if (str1[i][j] == 'C')
                        str2[i][j] = 'G';
                    else {
                        if (str1[i][j] == 'T')
                            str2[i][j] = 'A';
                    };
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        str2[i][j] = '\0';
    }
    return 0;
}

