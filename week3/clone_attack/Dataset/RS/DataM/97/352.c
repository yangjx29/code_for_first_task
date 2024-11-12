int main () {
    int EuSKTZa;
    scanf ("%d", &EuSKTZa);
    printf ("%d\n", EuSKTZa / (364 - 264));
    printf ("%d\n", (EuSKTZa -EuSKTZa / 100 * 100) / (997 - 947));
    printf ("%d\n", (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50) / (647 - 627));
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
    printf ("%d\n", (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50 - (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50) / 20 * 20) / 10);
    printf ("%d\n", (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50 - (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50) / 20 * 20 - (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50 - (EuSKTZa -EuSKTZa / 100 * 100 - (EuSKTZa -EuSKTZa / 100 * 100) / 50 * 50) / 20 * 20) / 10 * 10) / (358 - 353));
    printf ("%d\n", EuSKTZa % 5);
    return 0;
}

