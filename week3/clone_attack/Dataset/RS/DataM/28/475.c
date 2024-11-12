int main () {
    int wl [300];
    char zfc [300 * 50];
    int w = (454 - 454);
    int i;
    int j;
    gets (zfc);
    for (i = 0; zfc[i] != 0; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zfc[i] != ' ') {
            {
                j = 805 - 804;
                while (zfc[j] != 0 && zfc[j] != ' ') {
                    j = j + 1;
                };
            }
            wl[w] = j - i;
            if (zfc[j] == 0)
                break;
            else
                i = j;
            w = w + 1;
        };
    }
    printf ("%d", wl[0]);
    for (i = 1; i < w; i = i + 1)
        printf (",%d", wl[i]);
    return 0;
}

