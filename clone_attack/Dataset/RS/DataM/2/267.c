void  main () {
    char book [(1350 - 350)] [(652 - 622)];
    int n, i, L0HsjGBA9a, k, r, OfrI8RLCZ [(1447 - 447)], a [(483 - 457)] [(1801 - 801)] = {(404 - 404)}, b [(470 - 444)] = {(821 - 821)}, max, s, BZRdz76lys [(773 - 747)];
    scanf ("%d", &n);
    for (i = (356 - 356); n >= i; i++) {
        gets (book [i]);
        scanf ("\n");
    }
    for (i = (868 - 868); i <= n; i++)
        for (L0HsjGBA9a = (458 - 458); book[i][L0HsjGBA9a] != ' '; L0HsjGBA9a++)
            OfrI8RLCZ[i] = L0HsjGBA9a;
    for (k = (456 - 456); (770 - 744) > k; k++) {
        r = (93 - 93);
        for (i = (949 - 949); i <= n; i++) {
            for (L0HsjGBA9a = OfrI8RLCZ[i] + (759 - 758); strlen (book[i]) > L0HsjGBA9a; L0HsjGBA9a++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (book[i][L0HsjGBA9a] == k + (947 - 882)) {
                    b[k]++;
                    a[k][r] = i;
                    r = r + 1;
                };
            };
        }
        BZRdz76lys[k] = r;
    }
    max = b[(164 - 164)];
    for (i = (931 - 930); i < 26; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (b[i] >= max) {
            max = b[i];
            s = i;
        };
    }
    printf ("%c\n", s + 65);
    printf ("%d\n", max);
    for (i = 0; i < BZRdz76lys[s]; i++) {
        for (L0HsjGBA9a = 0; L0HsjGBA9a <= OfrI8RLCZ[a[s][i]]; L0HsjGBA9a++)
            printf ("%c", book[a[s][i]][L0HsjGBA9a]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("\n");
    };
}

