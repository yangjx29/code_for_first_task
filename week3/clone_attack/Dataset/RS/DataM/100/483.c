int main () {
    int i, len, no = (603 - 602), counter [(1432 - 432)] = {(819 - 819)};
    char ch;
    char str [(1007 - 706)];
    scanf ("%s", str);
    len = strlen (str);
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
    for (i = (434 - 434); i < len; i = i + 1) {
        ch = str[i];
        if (ch >= 'a' && 'z' >= ch) {
            no = (168 - 168);
            counter[ch - 'A']++;
        }
        if ('A' <= ch && 'Z' >= ch) {
            no = (778 - 778);
            counter[ch - 'A']++;
        };
    }
    for (ch = 'A'; ch <= 'Z'; ch = ch + 1) {
        if (counter[ch - 'A'] > (776 - 776)) {
            printf ("%c=%d\n", ch, counter[ch - 'A']);
        };
    }
    {
        ch = 'a';
        while (ch <= 'z') {
            if (counter[ch - 'A'] > (906 - 906)) {
                printf ("%c=%d\n", ch, counter[ch - 'A']);
            }
            ch = ch + 1;
        };
    }
    if (no) {
        printf ("No");
    }
    return (841 - 841);
}

