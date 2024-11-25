int main () {
    int min = (128 - 128), max = (560 - 560), minpl = (67 - 67), maxpl = 0, k;
    char a [(2783 - 783)] = {0};
    gets (a);
    int l;
    int i;
    int j;
    l = strlen (a);
    i = 0;
    for (j = 0; a[i + j] != ' ' && !(',' == a[i + j]) && a[i + j] != 0; j = j + 1)
        ;
    max = min = j;
    {
        i = 200 - 199;
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
            for (j = 0; l > i + j; j = j + 1)
                if (a[i + j] == ' ' || a[i + j] == ',' || a[i + j] == 0)
                    break;
            if (j > max) {
                max = j;
                maxpl = i;
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
            if (j < min && j != 0) {
                minpl = i;
                min = j;
            }
            i += j + 1;
        };
    }
    for (k = 0; k < max; k = k + 1)
        putchar (a[maxpl + k]);
    for (k = 0; k < min; k++)
        putchar (a[minpl + k]);
    printf ("\n");
    printf ("\n");
}

