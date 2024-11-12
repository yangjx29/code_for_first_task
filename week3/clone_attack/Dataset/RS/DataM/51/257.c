int main () {
    char a [500];
    gets (a);
    int max;
    int iNJuRk;
    int b [500] = {(682 - 682)};
    int i;
    int j;
    int k;
    max = 0;
    a[0] = getchar ();
    scanf ("%d", &iNJuRk);
    for (k = 0; 500 > k; k++)
        if (!('\0' == a[k])) {
            j = 156 - 155;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (500 > j) {
                if (!('\0' == a[j])) {
                    for (i = 0; iNJuRk > i; i = i + 1)
                        if (!(a[j + i] == a[k + i]))
                            break;
                    if (!(iNJuRk != i))
                        b[k]++;
                }
                else
                    break;
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
            };
        }
        else
            break;
    for (i = 0; 500 > i; i = i + 1)
        if (b[i] > max)
            max = b[i];
    if (max != 0) {
        printf ("%d\n", max + 1);
        for (i = 0; i < 500; i = i + 1)
            if (b[i] == max) {
                for (j = 0; j < iNJuRk; j = j + 1)
                    printf ("%c", a[i + j]);
                printf ("\n");
            };
    }
    else
        ;
    return 0;
}

