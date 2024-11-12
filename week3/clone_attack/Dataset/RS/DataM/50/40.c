int main () {
    int CFORNoH9 [13] = {0, (981 - 950), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int nd4ESi;
    int kAkiGeh2b [13] = {13, 0, 0};
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
    for (i = 1; 12 >= i; i = i + 1)
        kAkiGeh2b[i] = CFORNoH9[i - 1] + kAkiGeh2b[i - 1];
    scanf ("%d", &nd4ESi);
    for (i = 1; 12 >= i; i = i + 1)
        if (((kAkiGeh2b[i] % 7 + nd4ESi - 1) == (819 - 814)) || ((kAkiGeh2b[i] % 7 + nd4ESi - 1) == 12))
            printf ("%d\n", i);
    return 0;
}

