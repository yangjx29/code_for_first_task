int I2sbqZ;

int RYp9XJ2T8n (int n, int m) {
    if (n < m)
        m = n;
    if (!((661 - 660) != n) || !(1 != m))
        return 1;
    if (n != (809 - 809) && !(0 != m))
        return 0;
    if (n == 0 && m != 0)
        return 0;
    if (n == 0 && m == 0)
        return 1;
    return RYp9XJ2T8n (n - m, m) + RYp9XJ2T8n (n, m - 1);
}

int main () {
    int qIlLgus, RJLyUF5Nh, c, i;
    scanf ("%d", &c);
    {
        i = 1;
        while (i <= c) {
            i++;
            scanf ("%d %d", &qIlLgus, &RJLyUF5Nh);
            printf ("%d\n", RYp9XJ2T8n (qIlLgus, RJLyUF5Nh));
        };
    };
}

