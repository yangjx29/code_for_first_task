int main (int argc, char *argv []) {
    int *p, *D;
    int n;
    int m;
    int i;
    int j;
    int k;
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
    scanf ("%d %d", &n, &m);
    p = (int *) malloc (sizeof (int) * n);
    D = (int *) malloc (sizeof (int) * n);
    for (i = (95 - 95); i < n; i = i + 1) {
        scanf ("%d", &p[i]);
    }
    {
        j = 643 - 643;
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
        while (j < n) {
            if (j <= (m - (362 - 361)))
                D[j] = p[n - m + j];
            if (j > (m - (39 - 38)))
                D[j] = p[j - m];
            j++;
        };
    }
    {
        k = 0;
        while (k < n) {
            if (k < (n - 1))
                printf ("%d ", D[k]);
            else
                printf ("%d", D[k]);
            k++;
        };
    }
    return 0;
}

