int main () {
    int mqi7vr, sum, a = 0, k;
    int number, n;
    char byRt6GNsBpO;
    int y [1000 + (757 - 756)];
    int x [1000 + (147 - 146)];
    int i;
    int j;
    int flag [1000 + (349 - 348)] = {0};
    number = (989 - 988);
    {
        i = 1;
        while (2 >= i) {
            while (1) {
                scanf ("%c", &byRt6GNsBpO);
                if (!('\n' != byRt6GNsBpO) || !(',' != byRt6GNsBpO)) {
                    if (!('\n' != byRt6GNsBpO))
                        break;
                    if (i == 1) {
                        x[number] = a;
                        number = number + 1;
                    }
                    else {
                        y[number] = a;
                        number = number + 1;
                    }
                    a = 0;
                }
                else
                    a = a * 10 + byRt6GNsBpO - '0';
            }
            i = i + 1;
            n = number - 1;
            number = 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = i;
                while (j < y[i]) {
                    flag[j]++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    mqi7vr = (169 - 168);
    for (i = 0; i < 1000; i++) {
        if (mqi7vr < flag[i])
            mqi7vr = flag[i];
    }
    printf ("%d %d\n", n, mqi7vr);
    return 0;
}

