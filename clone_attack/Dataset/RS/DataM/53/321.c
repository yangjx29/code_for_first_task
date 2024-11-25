int main () {
    int array [300], n, i, j;
    int p, q;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &array[i]);
            i = i + 1;
        };
    }
    {
        p = 0;
        while (p < n - 1) {
            {
                q = p + 1;
                while (q < n) {
                    if (array[p] == array[q]) {
                        {
                            j = q;
                            while (j < n - 1) {
                                array[j] = array[j + 1];
                                j = j + 1;
                            };
                        }
                        n = n - 1;
                        q = q - 1;
                    }
                    q = q + 1;
                };
            }
            p++;
        };
    }
    printf ("%d", array[0]);
    {
        i = 1;
        while (i < n) {
            printf (",%d", array[i]);
            i++;
        };
    }
    return 0;
}

