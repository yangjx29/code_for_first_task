int Dec ();

int Dec (int x) {
    int i;
    if ((x == (834 - 827)) || (x == 17) || (x == 27) || (x == 37) || (x == 47) || (x == 57) || (x == 67) || (!(77 != x)) || (x == 87) || (x == 97))
        return 0;
    {
        i = 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 100) {
            if (x == i)
                return 0;
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
            i = i + 7;
        };
    }
    if ((x < 80) && (x > 69))
        return 0;
    return 1;
}

int main () {
    int sum;
    sum = 0;
    int i;
    int n;
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        if (Dec (i) == 1)
            sum = sum + i * i;
    }
    printf ("%d", sum);
}

