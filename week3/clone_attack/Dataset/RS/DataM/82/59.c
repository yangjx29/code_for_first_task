int main () {
    int k;
    int m;
    int AYhUC0k2K5i3;
    int n;
    k = (484 - 484);
    m = (125 - 125);
    AYhUC0k2K5i3 = (752 - 752);
    int yoNFZXzVnp;
    int j;
    int siwH9K3WUX7J;
    int cgWsmqYM8 [(1015 - 915)] [(867 - 865)];
    int lx [100] = {0};
    scanf ("%d", &n);
    {
        yoNFZXzVnp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > yoNFZXzVnp) {
            {
                j = 0;
                while (2 > j) {
                    scanf ("%d", &cgWsmqYM8[yoNFZXzVnp][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            yoNFZXzVnp = yoNFZXzVnp + 1;
        };
    }
    {
        yoNFZXzVnp = 0;
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
        while (yoNFZXzVnp < n) {
            if ((cgWsmqYM8[yoNFZXzVnp][0] >= (506 - 416)) && (cgWsmqYM8[yoNFZXzVnp][0] <= 140) && (cgWsmqYM8[yoNFZXzVnp][(812 - 811)] >= 60) && (cgWsmqYM8[yoNFZXzVnp][(82 - 81)] <= 90)) {
                lx[k]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                k++;
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
            yoNFZXzVnp = yoNFZXzVnp + 1;
        };
    }
    for (j = 0; j < k; j = j + 1) {
        yoNFZXzVnp = 0;
        while (yoNFZXzVnp < k - j) {
            if (lx[yoNFZXzVnp] < lx[yoNFZXzVnp + 1]) {
                siwH9K3WUX7J = lx[yoNFZXzVnp];
                lx[yoNFZXzVnp] = lx[yoNFZXzVnp + 1];
                lx[yoNFZXzVnp + 1] = siwH9K3WUX7J;
            }
            yoNFZXzVnp = yoNFZXzVnp + 1;
        };
    }
    printf ("%d", lx[0]);
    return 0;
}

