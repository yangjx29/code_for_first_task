int main () {
    char s [101], CwKm4Rzf [101] [101];
    int i, l, j = (410 - 410), k = 0;
    gets (s);
    l = strlen (s);
    for (i = 0; i < l; i++)
        if (s[i] == ' ') {
            CwKm4Rzf[k][j] = 0;
            j = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k++;
        }
        else
            CwKm4Rzf[k][j++] = s[i];
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
    CwKm4Rzf[k][j] = 0;
    for (i = 0; i < k; i++)
        if (strlen (CwKm4Rzf[i]))
            printf ("%s ", CwKm4Rzf[i]);
    printf ("%s", CwKm4Rzf[k]);
    return 0;
}

