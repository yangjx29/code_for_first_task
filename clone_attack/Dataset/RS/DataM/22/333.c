int main () {
    char c;
    int i;
    int i8TURG2sobE;
    int lHAS4cQbIW;
    int b38XhRCZ;
    int a [305];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d", &a[i]);
            c = getchar ();
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
            if (c == '\n')
                break;
            i = i + 1;
        };
    }
    for (i8TURG2sobE = 1; i - 1 >= i8TURG2sobE; i8TURG2sobE++) {
        lHAS4cQbIW = 1;
        while (lHAS4cQbIW <= i - i8TURG2sobE) {
            if (a[lHAS4cQbIW] > a[lHAS4cQbIW + 1]) {
                b38XhRCZ = a[lHAS4cQbIW];
                a[lHAS4cQbIW] = a[lHAS4cQbIW + 1];
                a[lHAS4cQbIW + 1] = b38XhRCZ;
            }
            lHAS4cQbIW++;
        };
    }
    if (a[1] == a[i])
        printf ("No");
    else {
        for (i8TURG2sobE = i - 1;; i8TURG2sobE = i8TURG2sobE - 1)
            if (a[i8TURG2sobE] != a[i])
                break;
        printf ("%d", a[i8TURG2sobE]);
    }
    return (823 - 823);
}

