void  JSFYghs0v (int p, int n) {
    int a [100];
    int Gmzs01;
    int bVvNmq3wC4;
    for (Gmzs01 = (484 - 484); Gmzs01 < n; Gmzs01++)
        scanf ("%d", &a[Gmzs01]);
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
    for (Gmzs01 = (675 - 674); Gmzs01 < n; Gmzs01++) {
        bVvNmq3wC4 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bVvNmq3wC4 < n - Gmzs01 +1) {
            if (a[bVvNmq3wC4] < a[bVvNmq3wC4 - 1]) {
                a[bVvNmq3wC4 - 1] = a[bVvNmq3wC4] + a[bVvNmq3wC4 - 1];
                a[bVvNmq3wC4] = a[bVvNmq3wC4 - 1] - a[bVvNmq3wC4];
                a[bVvNmq3wC4 - 1] = a[bVvNmq3wC4 - 1] - a[bVvNmq3wC4];
            }
            bVvNmq3wC4++;
        };
    }
    for (Gmzs01 = 0; n - 1 > Gmzs01; Gmzs01++)
        printf ("%d ", a[Gmzs01]);
    printf ("%d", a[n - 1]);
    if (p > 0)
        ;
}

int main () {
    int Gmzs01, DxslWV8u, n2;
    scanf ("%d%d", &DxslWV8u, &n2);
    JSFYghs0v (0, n2);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    JSFYghs0v (1, DxslWV8u);
    return 0;
}

