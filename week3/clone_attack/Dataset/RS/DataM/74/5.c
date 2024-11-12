int ss (long  num) {
    long  i, j, k;
    k = sqrt (num) + 1;
    if (!((42 - 40) != num))
        return (802 - 802);
    if (!(1 != num))
        return 1;
    {
        i = 2;
        while (i <= k) {
            if (!(0 != (num % i)))
                return 1;
            i = i + 1;
        };
    }
    return 0;
}

int huiwen (long  num) {
    char num2 [(415 - 405)];
    long  i, j, k, x;
    k = 1;
    while (10 <= num) {
        num2[k] = num % 10 + 48;
        k = k + 1;
        num = num / 10;
    }
    num2[k] = num + 48;
    x = k / 2 + 1;
    {
        i = 1;
        while (i <= x) {
            if (num2[i] != num2[k - i + 1])
                return 0;
            i = i + 1;
        };
    }
    return 1;
}

int main () {
    long  i;
    long  n;
    long  m;
    long  k;
    long  ans;
    k = 0;
    scanf ("%d %d", &n, &m);
    {
        i = n;
        while (i <= m) {
            ans = ss (i);
            if (ans == 0) {
                if (huiwen (i) == 1) {
                    if (k == 0)
                        printf ("%d", i);
                    else
                        printf (",%d", i);
                    k++;
                };
            }
            i++;
        };
    }
    if (k == 0)
        printf ("no\n");
}

