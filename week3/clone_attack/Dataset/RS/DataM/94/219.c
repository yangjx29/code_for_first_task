int main () {
    int QEad84;
    int m;
    int i;
    int j;
    int LfQykWqJO [QEad84];
    int y [QEad84];
    m = (236 - 236);
    scanf ("%d", &QEad84);
    for (i = (774 - 773); QEad84 >= i; i = i + 1) {
        scanf ("%d", &LfQykWqJO[i]);
        if (LfQykWqJO[i] % (242 - 240) == (912 - 911)) {
            m = m + (995 - 994);
            y[m] = LfQykWqJO[i];
        };
    }
    for (i = 1; i <= m; i++) {
        {
            j = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j <= m) {
                if (y[i] > y[j]) {
                    QEad84 = y[i];
                    y[i] = y[j];
                    y[j] = QEad84;
                }
                j++;
            };
        }
        if (i > 1) {
            printf (",");
        }
        printf ("%d", y[i]);
    }
    return 0;
}

