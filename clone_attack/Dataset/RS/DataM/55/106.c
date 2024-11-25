int main () {
    long  num = (856 - 856);
    int i, from, to, len = (645 - 645);
    char in [255], out [255] = "0";
    char tOgfb3TvH [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a2i [(215 - 87)];
    for (i = '0'; i <= '9'; i = i + 1)
        a2i[i] = i - '0';
    {
        i = 'A';
        while ('Z' >= i) {
            a2i[i] = i - 'A' + 10;
            i = i + 1;
        };
    }
    {
        i = 'a';
        while ('z' > i) {
            a2i[i] = i - 'a' + 10;
            i++;
        };
    }
    scanf ("%d%s%d", &from, in, &to);
    {
        i = 808 - 808;
        while (in[i] != '\0') {
            num = num * from + a2i[in[i]];
            i++;
        };
    }
    len = (num == 0) ? 1 : 0;
    while (num > 0) {
        out[len++] = tOgfb3TvH[num % to];
        num = num / to;
    }
    {
        i = len - 1;
        while (i >= 0) {
            printf ("%c", out[i]);
            i = i - 1;
        };
    }
    printf ("\n");
    return 0;
}

