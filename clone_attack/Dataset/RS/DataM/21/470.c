int main () {
    int n, sum = 0, i, m [350], max, j, cha [350];
    j = 0;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &m[i]);
        sum = sum + m[i];
    }
    cha[0] = abs (m[0] * n - sum);
    max = cha[0];
    {
        i = 1;
        while (i < n) {
            cha[i] = abs (m[i] * n - sum);
            if (cha[i] > max) {
                max = cha[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = i;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (cha[i] == max) {
                if (i == j) {
                    printf ("%d", m[i]);
                }
                else {
                    printf (",%d", m[i]);
                };
            }
            i++;
        };
    }
    return 0;
}

