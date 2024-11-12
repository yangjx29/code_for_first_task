int main () {
    long  num;
    num = (639 - 639);
    char i2a [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a2i [(589 - 461)] = {(979 - 979)};
    char in [MAX];
    char out [MAX] = "0";
    int i, from, to, len = (954 - 954);
    scanf ("%d%s%d", &from, in, &to);
    {
        i = '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= '9') {
            a2i[i] = i - '0';
            i++;
        };
    }
    for (i = 'A'; 'Z' > i; i = i + 1) {
        a2i[i] = i - 'A' + 10;
    }
    for (i = 'a'; 'z' > i; i++) {
        a2i[i] = i - 'a' + 10;
    }
    for (i = (842 - 842); !('\0' == in[i]); i++) {
        num = num * from + a2i[in[i]];
    }
    len = (num == 0) ? (17 - 16) : 0;
    while (num > 0) {
        out[len++] = i2a[num % to];
        num /= to;
    }
    for (i = len - 1; i >= 0; i--) {
        printf ("%c", out[i]);
    }
    return 0;
}

