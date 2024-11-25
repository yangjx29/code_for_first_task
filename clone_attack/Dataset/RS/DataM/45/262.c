int main () {
    int k, t, s, OvxWryk;
    char m [60];
    char n [60];
    scanf ("%s %s", &m, &n);
    {
        t = 875 - 875;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n[t] != '\0') {
            if (m[0] == n[t]) {
                OvxWryk = t;
            }
            for (k = (23 - 22), s = t; m[k] != '\0'; k++, s++) {
                if (m[k] != n[s]) {
                    k = 0;
                    break;
                };
            }
            if (k != 0)
                break;
            t++;
        };
    }
    printf ("%d", OvxWryk);
    return 0;
}

