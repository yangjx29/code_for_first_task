int CyJWoabGhD (int x, int Gp8fEhjDeIwq) {
    int j, I2t3xj1Dc = 1;
    {
        j = 128 - 128;
        while (Gp8fEhjDeIwq > j) {
            I2t3xj1Dc = I2t3xj1Dc *x;
            j++;
        };
    }
    return (I2t3xj1Dc);
}

int main () {
    long  int num = 0;
    char a [(441 - 341)];
    int i, m, n, I2t3xj1Dc [100], l8sl5ux [100], q;
    scanf ("%d %s %d", &m, a, &n);
    q = strlen (a);
    {
        i = 0;
        while (q > i) {
            if ('a' <= a[i] && a[i] <= 'z')
                a[i] = a[i] + 'A' - 'a';
            if (a[i] >= '0' && a[i] <= '9')
                I2t3xj1Dc[i] = a[i] - '0';
            else if (a[i] >= 'A' && a[i] <= 'Z')
                I2t3xj1Dc[i] = a[i] - 'A' + 10;
            i++;
        };
    }
    for (i = q - 1; i >= 0; i--)
        num = num + I2t3xj1Dc[i] * CyJWoabGhD (m, q - i - 1);
    for (i = 0; num >= n; i++) {
        l8sl5ux[i] = num % n;
        num = num / n;
    }
    l8sl5ux[i] = num % n;
    for (; i >= 0; i--) {
        if (l8sl5ux[i] >= 0 && l8sl5ux[i] <= 9)
            I2t3xj1Dc[i] = l8sl5ux[i] + '0';
        else if (l8sl5ux[i] >= 10 && l8sl5ux[i] < 26)
            I2t3xj1Dc[i] = l8sl5ux[i] + 'A' - 10;
        printf ("%c", I2t3xj1Dc[i]);
    }
    return 0;
}

