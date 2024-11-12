int main () {
    int j, n, i, zu [100] = {(832 - 832)}, su [2] [100], tu [100] = {0};
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
            scanf ("%d %d", &su[0][i], &su[1][i]);
            if (140 >= su[0][i] && su[0][i] >= 90 && 60 <= su[1][i] && 90 >= su[1][i])
                zu[i] = 1;
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
    {
        i = 0;
        while (i < n) {
            {
                j = i;
                while (j < n) {
                    if (zu[j] == 1)
                        tu[i]++;
                    else
                        break;
                    j++;
                };
            }
            i++;
        };
    }
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
    for (i = 0; i < n; i++)
        if (tu[i] > tu[0])
            tu[0] = tu[i];
    printf ("%d", tu[0]);
    return 0;
}

