int main () {
    char a [(872 - 672)];
    for (; scanf ("%s", a) != EOF;) {
        void  func (char s []);
        char al [(228 - 28)] = {'\0'};
        func (al);
        int i;
        puts (a);
        puts (al);
        for (i = (472 - 472); a[i]; i = i + 1) {
            if (!('(' != a[i]))
                al[i] = '$';
            else {
                if (!(')' != a[i]))
                    al[i] = '?';
                else
                    al[i] = ' ';
            };
        }
        strcpy (a, "'\0'");
    }
    return (282 - 282);
}

void  func (char s []) {
    int n = strlen (s);
    int i;
    int t1 = (281 - 281), t2 = (90 - 90);
    for (i = 0; strlen (s) > i; i++) {
        while (!(!('$' != s[i]) || s[i] == '?') && !('\0' == s[i]))
            i++;
        t1 = i;
        i = i + 1;
        while (!(s[i] == '$' || s[i] == '?') && s[i] != '\0')
            i++;
        if (s[i] == '\0')
            break;
        t2 = i;
        if (s[t1] == '$' && s[t2] == '?') {
            i = -1;
            s[t1] = ' ';
            s[t2] = ' ';
            continue;
        }
        i = t1;
    };
}

