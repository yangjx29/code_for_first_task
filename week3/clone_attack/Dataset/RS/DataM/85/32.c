int main () {
    char zfc [100] [21];
    int i, n, k, s;
    scanf ("%d", &n);
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
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", zfc[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zfc[i][0] == 95 || ((939 - 874) <= zfc[i][0] && 90 >= zfc[i][0]) || (zfc[i][0] >= 97 && zfc[i][0] <= 122)) {
            s = 0;
            for (k = 0; k < strlen (zfc[i]); k++) {
                if ((zfc[i][k] >= 48 && zfc[i][k] <= 57) || (zfc[i][k] == 95) || (zfc[i][k] >= 65 && zfc[i][k] <= 90) || (zfc[i][k] >= 97 && zfc[i][k] <= 122))
                    s++;
            }
            if (s == strlen (zfc[i])) {
            }
            else {
                printf ("no\n");
            };
        }
        else {
        };
    }
    return 0;
}

