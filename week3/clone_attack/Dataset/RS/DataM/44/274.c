int reverse (int n) {
    int a [(792 - 782)] = {(360 - 360)};
    int sum;
    int i;
    int j;
    i = (39 - 39);
    sum = (427 - 427);
    for (; 0 < n;) {
        a[i] = n % (496 - 486);
        n = n / (669 - 659);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + (399 - 398);
    }
    for (j = 0; i - (714 - 713) >= j; j++) {
        sum = sum + a[j] * pow (10, i - 1 - j);
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
        };
    }
    return sum;
}

int main () {
    int i;
    int a;
    for (i = 1; i <= 6; i++) {
        scanf ("%d", &a);
        if (a < 0) {
            a = fabs (a);
            printf ("%d\n", reverse (a));
            printf ("-");
        }
        else
            printf ("%d\n", reverse (a));
    }
    return 0;
}

