void  del (char a [(634 - 534)], int k, int n) {
    int i;
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
    for (i = k; n >= i; i = i + 1)
        a[i] = a[i + (175 - 174)];
}

int main () {
    int i, n;
    char a [(1056 - 956)];
    gets (a);
    puts (a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    n = strlen (a);
    i = (557 - 556);
    while (i <= n)
        if ((a[i - 1] == ' ') && (a[i] == ' ')) {
            del (a, i, n);
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
            n = n - 1;
        }
        else
            i = i + 1;
    return 0;
}

