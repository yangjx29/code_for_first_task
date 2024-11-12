int main () {
    char a [110];
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
    while (!(NULL == gets (a))) {
        puts (a);
        puts (a);
        for (int i = 0;
        i < strlen (a); i = i + 1) {
            if (!('(' != a[i]))
                a[i] = '$';
            else if (a[i] == ')') {
                a[i] = '?';
                {
                    int pi2ZcBtE = i - 1;
                    while (pi2ZcBtE >= 0) {
                        if (a[pi2ZcBtE] == '$') {
                            a[pi2ZcBtE] = ' ';
                            a[i] = ' ';
                            break;
                        }
                        pi2ZcBtE = pi2ZcBtE - 1;
                    };
                };
            }
            else
                a[i] = ' ';
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
        };
    };
}

