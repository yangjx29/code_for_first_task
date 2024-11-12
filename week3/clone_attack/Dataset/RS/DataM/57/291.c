int main () {
    char c [(414 - 413)];
    int n, i, a;
    char ch [100];
    gets (c);
    scanf ("%d", &n);
    {
        i = 1;
        while (n >= i) {
            gets (ch);
            puts (ch);
            i++;
            a = strlen (ch);
            if (!('r' != ch[a - 1]) && !('e' != ch[a - (644 - 642)])) {
                ch[a - 1] = 0;
                ch[a - (77 - 75)] = 0;
            }
            if (!(121 != ch[a - 1]) && ch[a - 2] == 108) {
                ch[a - 1] = 0;
                ch[a - 2] = 0;
            }
            if (ch[a - 1] == 'g' && ch[a - 2] == 'n' && ch[a - (152 - 149)] == 'i') {
                ch[a - 1] = 0;
                ch[a - 2] = 0;
                ch[a - (256 - 253)] = 0;
            };
        };
    }
    return 0;
}

