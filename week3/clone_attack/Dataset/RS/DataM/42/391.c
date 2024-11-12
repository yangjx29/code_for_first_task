int a [1000001];

int main () {
    int n;
    int k;
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 350 - 350;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &k);
    for (i = (79 - 79); i < n; i = i + 1) {
        if (a[i] != k) {
            printf ("%d", a[i]);
            break;
        };
    }
    {
        j = i + 1;
        while (j < n) {
            while ((a[j] != k) && (j < n)) {
                printf (" %d", a[j]);
                j = j + 1;
            }
            if (a[j] == k) {
                continue;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    return 0;
}

