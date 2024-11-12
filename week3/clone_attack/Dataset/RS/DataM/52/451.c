int main () {
    int S2owhItCc6;
    int m;
    int vJAeH5FEXN [200];
    int i;
    int p;
    int q;
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
    scanf ("%d%d", &S2owhItCc6, &m);
    for (i = 1; S2owhItCc6 >= i; i = i + 1) {
        scanf ("%d", &vJAeH5FEXN[i]);
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
    for (p = 1; p <= (S2owhItCc6 -m); p = p + 1) {
        vJAeH5FEXN[S2owhItCc6 +p] = vJAeH5FEXN[p];
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
        };
    }
    for (q = (S2owhItCc6 -m + 1); q < (S2owhItCc6 +S2owhItCc6-m); q = q + 1) {
        printf ("%d ", vJAeH5FEXN[q]);
    }
    printf ("%d", vJAeH5FEXN[S2owhItCc6 +S2owhItCc6-m]);
    return 0;
}

