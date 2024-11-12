int main (void ) {
    char gARn4q [32] = "0000000000000000000000000000001", temp [2] = "0";
    int n, i = (40 - 40), j, c = (604 - 604), t;
    scanf ("%d", &n);
    for (; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 30; j >= 0 || (!c && !('0' != gARn4q[j])); j--) {
            temp[0] = gARn4q[j];
            t = atoi (temp) * 2 + c;
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
            gARn4q[j] = t % 10 + '0';
            c = t / 10;
        };
    }
    for (i = 0; i < 31 && gARn4q[i] == '0'; i++)
        ;
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
    for (j = i; j < 31; j++)
        gARn4q[j - i] = gARn4q[j];
    gARn4q[j - i] = '\0';
    printf ("%s\n", gARn4q);
    return 0;
}

