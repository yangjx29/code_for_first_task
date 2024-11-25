int main () {
    int n, PhcBIRPvMz, i, j, a = 0;
    int pvF3Ak [1000];
    scanf ("%d %d", &n, &PhcBIRPvMz);
    scanf ("%d", &(pvF3Ak[0]));
    for (i = 1; n > i; i = i + 1) {
        scanf (" %d", &(pvF3Ak[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n - 1 > i; i = i + 1) {
        {
            j = i + 1;
            while (j < n) {
                if (pvF3Ak[i] + pvF3Ak[j] == PhcBIRPvMz) {
                    printf ("yes");
                    return 0;
                }
                j = j + 1;
            };
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
        a += 1;
    }
    if (a == n - 1)
        printf ("no");
    return 0;
}

