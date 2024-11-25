int main () {
    int n, fwhiVgbHRp4;
    int FBCwsu (int);
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
    scanf ("%d", &n);
    {
        fwhiVgbHRp4 = 2;
        while (fwhiVgbHRp4 <= n / 2) {
            if (FBCwsu (fwhiVgbHRp4) &&FBCwsu(n - fwhiVgbHRp4))
                printf ("%d %d\n", fwhiVgbHRp4, n - fwhiVgbHRp4);
            fwhiVgbHRp4++;
        };
    };
}

int FBCwsu (int n) {
    int a;
    int fwhiVgbHRp4;
    a = 1;
    for (fwhiVgbHRp4 = 2; fwhiVgbHRp4 <= sqrt (n) && a == 1; fwhiVgbHRp4 = fwhiVgbHRp4 + 1)
        if (n % fwhiVgbHRp4 == 0)
            a = 0;
    return (a);
}

