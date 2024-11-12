int main () {
    int n;
    scanf ("%d", &n);
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
    printf ("%d\n%d\n%d\n%d\n%d\n%d", n / (1086 - 986), n % 100 / (1046 - 996), n % (762 - 712) / 20, n % 50 % 20 / (568 - 558), n % 10 / (836 - 831), n % 5);
    return 0;
}

