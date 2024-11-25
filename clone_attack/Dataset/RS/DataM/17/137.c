void  f (char s []) {
    int n = strlen (s);
    int Qzys5OW;
    int j;
    int k;
    int l;
    for (Qzys5OW = (816 - 816); n > Qzys5OW; Qzys5OW = Qzys5OW +1) {
        if (s[Qzys5OW] != '(' && s[Qzys5OW] != ')')
            s[Qzys5OW] = ' ';
    }
    for (Qzys5OW = 0; Qzys5OW < n; Qzys5OW = Qzys5OW +1) {
        if (s[Qzys5OW] == ')') {
            l = 0;
            for (j = Qzys5OW -1; j >= 0; j = j - 1) {
                if (s[j] == '(') {
                    s[j] = ' ';
                    s[Qzys5OW] = ' ';
                    l = 1;
                    break;
                };
            }
            if (l == 0)
                s[Qzys5OW] = '?';
        };
    }
    for (Qzys5OW = 0; Qzys5OW < n; Qzys5OW = Qzys5OW +1)
        if (s[Qzys5OW] != ' ' && s[Qzys5OW] != '?')
            s[Qzys5OW] = '$';
}

int main () {
    int n, Qzys5OW;
    char s [10000];
    gets (s);
    scanf ("%d", &n);
    for (Qzys5OW = 0; Qzys5OW < n; Qzys5OW = Qzys5OW +1) {
        gets (s);
        puts (s);
        f (s);
        puts (s);
    }
    return 0;
}

