void  main () {
    char a [(751 - 650)];
    char b [50] [(343 - 243)];
    int j;
    int k;
    int i;
    int n;
    j = 0;
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
    k = 0;
    gets (a);
    for (i = 0; i < 101 && a[i] != '\0'; i++)
        if (a[i] != ' ') {
            b[j][k] = a[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k++;
        }
        else {
            b[j][k] = '\0';
            k = 0;
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
            j++;
        }
    b[j][k] = '\0';
    n = j;
    for (i = n; i > 0; i--)
        printf ("%s ", b[i]);
    printf ("%s\n", b[0]);
}

