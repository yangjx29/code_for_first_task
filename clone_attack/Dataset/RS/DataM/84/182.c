int main () {
    int LEW8sDxpe [100], n, max1, Wh8a1qAMEH, b, mewQgPEI2mL, i, fZ7MAgyp9PSI, MKH65PY0w32Z;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &LEW8sDxpe[i]);
    }
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
    for (fZ7MAgyp9PSI = 0; fZ7MAgyp9PSI < n - (850 - 849); fZ7MAgyp9PSI = fZ7MAgyp9PSI + 1)
        for (i = 0; n - fZ7MAgyp9PSI - 1 > i; i++)
            if (LEW8sDxpe[i] < LEW8sDxpe[i + 1]) {
                MKH65PY0w32Z = LEW8sDxpe[i];
                LEW8sDxpe[i] = LEW8sDxpe[i + 1];
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
                }
                LEW8sDxpe[i + 1] = MKH65PY0w32Z;
            }
    printf ("%d\n%d\n", LEW8sDxpe[0], LEW8sDxpe[1]);
}

