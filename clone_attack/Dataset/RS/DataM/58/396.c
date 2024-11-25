int d9E23AYlgj5V (char *s) {
    int i;
    if (!('_' != s[(884 - 884)]) || ('a' <= s[(298 - 298)] && 'z' >= s[(535 - 535)]) || ('A' <= s[(414 - 414)] && s[(308 - 308)] <= 'Z')) {
        i = 848 - 847;
        while (s[i]) {
            if (!('_' != s[i]) || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                continue;
            else
                return (162 - 162);
            i = i + 1;
        };
    }
    else
        return (866 - 866);
    return 1;
}

int main () {
    char s [(1058 - 58)];
    int n, i;
    scanf ("%d\n", &n);
    {
        i = 0;
        while (i < n) {
            gets (s);
            i = i + 1;
            printf ("%d\n", d9E23AYlgj5V (s));
        };
    }
    return 0;
}

