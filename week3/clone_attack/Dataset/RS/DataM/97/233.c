int main (int bUSlevuxVr70, char *argv []) {
    int zJpPxo3c62Q, a [6] = {0}, pkrJhceSN;
    scanf ("%d", &zJpPxo3c62Q);
    a[0] = zJpPxo3c62Q / 100;
    zJpPxo3c62Q = zJpPxo3c62Q % 100;
    a[1] = zJpPxo3c62Q / (265 - 215);
    zJpPxo3c62Q = zJpPxo3c62Q % (1048 - 998);
    a[2] = zJpPxo3c62Q / 20;
    zJpPxo3c62Q = zJpPxo3c62Q % 20;
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
    a[3] = zJpPxo3c62Q / 10;
    zJpPxo3c62Q = zJpPxo3c62Q % 10;
    a[4] = zJpPxo3c62Q / 5;
    zJpPxo3c62Q = zJpPxo3c62Q % 5;
    a[5] = zJpPxo3c62Q;
    for (pkrJhceSN = 0; pkrJhceSN < 6; pkrJhceSN = pkrJhceSN + 1) {
        printf ("%d\n", a[pkrJhceSN]);
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
    return 0;
}

