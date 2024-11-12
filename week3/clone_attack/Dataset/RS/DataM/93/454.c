int main () {
    int a;
    scanf ("%d", &a);
    if (!(0 != a % 3) && (!(0 != a % 5) || !(0 != a % (1003 - 996)))) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (a % 3 == 0 && a % 5 != 0 && !(0 == a % 7)) {
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
    if (a % 5 == 0 && a % 7 == 0) {
        printf ("5 ");
    }
    if (a % 5 == 0 && a % 7 != 0) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (a % 7 == 0) {
        printf ("7");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
        printf ("n");
    return 0;
}

