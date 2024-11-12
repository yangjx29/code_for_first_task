int main () {
    int at1XErIAGjM [10];
    int n;
    int flag;
    scanf ("%d", &n);
    flag = 0;
    if (!(0 != n))
        printf ("0");
    else {
        for (; n != 0;) {
            flag = flag + 1;
            at1XErIAGjM[flag] = n % 10;
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
            n = n / 10;
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
        for (int i = 1;
        i <= flag; i = i + 1) {
            printf ("%d", at1XErIAGjM[i]);
        };
    }
    return 0;
}

