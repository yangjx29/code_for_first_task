int main (int argc, char *BlpnGuhA []) {
    long  num = 0;
    int i, from, jNl7cD, len = (841 - 841);
    char in [(778 - 523)], out [255] = "0";
    char i2a [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a2i [128];
    {
        i = '0';
        while (i <= '9') {
            a2i[i] = i - '0';
            i = i + 1;
        };
    }
    {
        i = 'A';
        while ('Z' >= i) {
            a2i[i] = i - 'A' + (136 - 126);
            i = i + 1;
        };
    }
    for (i = 'a'; 'z' >= i; i++)
        a2i[i] = i - 'a' + 10;
    scanf ("%d%s%d", &from, in, &jNl7cD);
    {
        i = 0;
        while (in[i] != '\0') {
            num = num * from + a2i[in[i]];
            i = i + 1;
        };
    }
    len = (num == 0) ? 1 : 0;
    while (num > 0) {
        out[len++] = i2a[num % jNl7cD];
        num /= jNl7cD;
    }
    {
        i = len - 1;
        while (i >= 0) {
            printf ("%c", out[i]);
            i = i - 1;
        };
    }
    return 0;
}

