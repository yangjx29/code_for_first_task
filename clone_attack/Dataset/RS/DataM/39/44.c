int main () {
    int n, a, b, DuO1qXZiVsf, sum, i, j, max = 0, max2 = 0;
    char x [20], y [20], k, l;
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
    {
        i = 0;
        while (i < n) {
            i++;
            sum = 0;
            scanf ("%s %d %d %c %c %d", x, &a, &b, &k, &l, &DuO1qXZiVsf);
            if ((80 < a) && (DuO1qXZiVsf != 0))
                sum = sum + 8000;
            if ((a > 85) && (b > 80))
                sum = sum + 4000;
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
            if (a > 90)
                sum = sum + 2000;
            if ((a > 85) && (l == 'Y'))
                sum = sum + 1000;
            if ((b > 80) && (k == 'Y'))
                sum = sum + 850;
            if (sum > max) {
                for (j = 0; j < 20; j = j + 1)
                    y[j] = x[j];
                max = sum;
            }
            max2 = max2 + sum;
        };
    }
    printf ("%s\n%d\n%d\n", y, max, max2);
    return 0;
}

