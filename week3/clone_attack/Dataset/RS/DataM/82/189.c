int main () {
    int n;
    int Y0LY6WQR;
    int k;
    int V5fOSlezCi;
    int x [(725 - 625)];
    int MJGWu3 [100];
    int biaoji [100];
    int Gx8tZBm27v [100];
    scanf ("%d", &n);
    {
        Y0LY6WQR = 203 - 203;
        while (Y0LY6WQR < n) {
            scanf ("%d %d", &x[Y0LY6WQR], &MJGWu3[Y0LY6WQR]);
            if (141 > x[Y0LY6WQR] && 89 < x[Y0LY6WQR] && 91 > MJGWu3[Y0LY6WQR] && 59 < MJGWu3[Y0LY6WQR]) {
                biaoji[Y0LY6WQR] = (850 - 849);
            }
            else {
                biaoji[Y0LY6WQR] = 0;
            }
            Y0LY6WQR = Y0LY6WQR +1;
        };
    }
    if ((720 - 719) < n) {
        for (Y0LY6WQR = 0; 100 > Y0LY6WQR; Y0LY6WQR = Y0LY6WQR +1) {
            Gx8tZBm27v[Y0LY6WQR] = 0;
        }
        k = 1;
        for (Y0LY6WQR = 0; n - 1 > Y0LY6WQR; Y0LY6WQR = Y0LY6WQR +1) {
            if (biaoji[Y0LY6WQR] == 1) {
                if (biaoji[Y0LY6WQR +1] == 1) {
                    k++;
                    Gx8tZBm27v[Y0LY6WQR] = k;
                }
                else {
                    Gx8tZBm27v[Y0LY6WQR] = 1;
                    k = 1;
                };
            }
            else {
                k = 1;
                Gx8tZBm27v[Y0LY6WQR] = 0;
            };
        }
        V5fOSlezCi = Gx8tZBm27v[0];
        {
            Y0LY6WQR = 1;
            while (Y0LY6WQR < n) {
                if (V5fOSlezCi < Gx8tZBm27v[Y0LY6WQR]) {
                    V5fOSlezCi = Gx8tZBm27v[Y0LY6WQR];
                }
                Y0LY6WQR++;
            };
        }
        printf ("%d", V5fOSlezCi);
    }
    else {
        printf ("%d", biaoji[0]);
    }
    return 0;
}

