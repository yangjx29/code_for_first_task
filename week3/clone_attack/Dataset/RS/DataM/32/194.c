void  main () {
    int VhS1fkElYw [101] [101];
    int b [101] [101];
    char c;
    int i;
    int k;
    int vUkwKOIB;
    int numb;
    int n;
    int j;
    int j0;
    for (i = (906 - 906); i <= 100; i = i + 1) {
        for (j = 0; j <= 100; j++) {
            VhS1fkElYw[i][j] = '\0';
            b[i][j] = '\0';
        };
    }
    scanf ("%d\n", &n);
    for (i = 1; n >= i; i = i + 1) {
        k = 1;
        for (; (c = getchar ()) != '\n';)
            VhS1fkElYw[i][k++] = c;
        k = 1;
        for (; (c = getchar ()) != '\n';)
            b[i][k++] = c;
        getchar ();
    }
    for (i = 1; n >= i; i++) {
        for (vUkwKOIB = 1;; vUkwKOIB++)
            if (VhS1fkElYw[i][vUkwKOIB] == '\0')
                break;
        for (numb = 1;; numb++)
            if (b[i][numb] == '\0')
                break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        vUkwKOIB--;
        numb--;
        for (j = 0; j <= vUkwKOIB - 1 && b[i][numb - j] >= '0' && b[i][numb - j] <= '9'; j++) {
            VhS1fkElYw[i][vUkwKOIB - j] = VhS1fkElYw[i][vUkwKOIB - j] - b[i][numb - j];
            if (VhS1fkElYw[i][vUkwKOIB - j] < 0) {
                VhS1fkElYw[i][vUkwKOIB - j] = VhS1fkElYw[i][vUkwKOIB - j] + 10;
                VhS1fkElYw[i][vUkwKOIB - j - 1] = VhS1fkElYw[i][vUkwKOIB - j - 1] - 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            VhS1fkElYw[i][vUkwKOIB - j] = VhS1fkElYw[i][vUkwKOIB - j] + '0';
        };
    }
    for (i = 1; i <= n; i++) {
        for (j0 = 1;; j0++)
            if (VhS1fkElYw[i][j0] != '0')
                break;
        for (j = j0; VhS1fkElYw[i][j] != '\0'; j++) {
            printf ("%c", VhS1fkElYw[i][j]);
        };
    };
}

