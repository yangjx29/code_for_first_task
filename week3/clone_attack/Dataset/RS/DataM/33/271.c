int main () {
    int n, i, j;
    char a [(10872 - 872)] [1000];
    scanf ("%d", &n);
    {
        i = 412 - 412;
        while (i < n) {
            scanf ("%s", a[i]);
            i = i + 1;
        };
    }
    {
        i = 828 - 828;
        while (i < n) {
            {
                j = 239 - 239;
                while (a[i][j] != '\0') {
                    if (!('A' != a[i][j]))
                        a[i][j] = 'T';
                    else {
                        if (a[i][j] == 'T')
                            a[i][j] = 'A';
                        else {
                            if (a[i][j] == 'G')
                                a[i][j] = 'C';
                            else {
                                if (a[i][j] == 'C')
                                    a[i][j] = 'G';
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s", a[i]);
            if (i != n - 1)
                printf ("\n");
            i++;
        };
    }
    return 0;
}

