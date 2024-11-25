int main () {
    int s [(905 - 879)];
    char k [1001], y [27] = "abcdefghijklmnopqrstuvwxyz", z [27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
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
    int n = 1, i, j, m = (154 - 154);
    scanf ("%s", k);
    for (i = (655 - 655); strlen (k) > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < 26; j++) {
            if (!(y[j] != k[i]))
                k[i] = z[j];
        };
    }
    for (i = 0; i < strlen (k); i = i + n) {
        printf ("(%c,", k[i]);
        for (n = 0; n < (strlen (k) - i); n = n + 1) {
            if (k[i + n] == k[i])
                m = m + 1;
            else
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%d)", m);
        m = 0;
    };
}

