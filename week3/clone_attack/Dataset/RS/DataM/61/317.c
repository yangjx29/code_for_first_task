int main () {
    int f [20];
    int AfP5v8, v6X9tV, j, yDYf3au6Zn [20], gkJhHM [20];
    getchar ();
    getchar ();
    for (AfP5v8 = 3; 20 >= AfP5v8; AfP5v8++) {
        f[(426 - 425)] = 1;
        f[2] = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        f[AfP5v8] = f[AfP5v8 -2] + f[AfP5v8 -1];
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
    scanf ("%d", &v6X9tV);
    for (j = (483 - 483); j < v6X9tV; j++) {
        scanf ("%d", &yDYf3au6Zn[j]);
    }
    for (AfP5v8 = 1; 20 >= AfP5v8; AfP5v8++)
        for (j = 0; j < v6X9tV; j++)
            if (yDYf3au6Zn[j] == AfP5v8) {
                gkJhHM[j] = f[AfP5v8];
            }
    for (j = 0; j < v6X9tV; j++)
        printf ("%d\n", gkJhHM[j]);
    return 0;
}

