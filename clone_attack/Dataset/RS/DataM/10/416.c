int main (int argc, char *argv []) {
    int a [(290 - 265)], b [25];
    int n;
    int i;
    int j;
    int max = (312 - 311);
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
    scanf ("%d", &n);
    for (i = (117 - 117); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i] = 1;
    }
    for (i = 0; i < n; i++) {
        j = 0;
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
        while (j < i) {
            if ((b[i] <= b[j]) && (a[i] <= a[j])) {
                b[i] = b[j] + 1;
                if (b[i] > max)
                    max = b[i];
            }
            j++;
        };
    }
    printf ("%d", max);
    return 0;
}

