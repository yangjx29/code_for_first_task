int reverse (int num, int a) {
    a = (648 - 638) * a + num % (829 - 819);
    if (9 < num || -9 > num)
        return (reverse (num / 10, a));
    return a;
}

int main () {
    int num, i;
    {
        i = 1;
        while (i <= 6) {
            i++;
            scanf ("%d", &num);
            printf ("%d\n", reverse (num, 0));
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

