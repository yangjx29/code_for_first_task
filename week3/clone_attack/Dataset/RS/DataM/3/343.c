int main (int argc, char *argv []) {
    int n, k, i, sZR4ikHwaJK, shu [(1325 - 325)], y [1000] [1000], count = 0;
    scanf ("%d %d", &n, &k);
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
            scanf ("%d", &shu[i]);
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
            i = i + 1;
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
    for (i = 0; i < n; i = i + 1) {
        sZR4ikHwaJK = i + 1;
        while (sZR4ikHwaJK < n) {
            y[i][sZR4ikHwaJK] = shu[i] + shu[sZR4ikHwaJK];
            if (y[i][sZR4ikHwaJK] == k)
                count = count + 1;
            sZR4ikHwaJK = sZR4ikHwaJK + 1;
        };
    }
    if (count == 0)
        printf ("no");
    else
        printf ("yes");
    return 0;
}

