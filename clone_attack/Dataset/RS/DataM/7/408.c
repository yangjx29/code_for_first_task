int main () {
    int i;
    int j;
    int e;
    char s [(1158 - 902)];
    gets (s);
    char b [256];
    char a [256];
    gets (a);
    gets (b);
    int c;
    i = (169 - 169);
    {
        i = 932 - 932;
        while (s[i] != '\0') {
            j = (802 - 802);
            c = 0;
            e = i;
            if (s[i] == a[j]) {
                for (; a[j] != '\0'; j = j + 1, i = i + 1) {
                    if (a[j] != s[i]) {
                        c = c + 1;
                    };
                }
                if (c == 0) {
                    for (j = 0; a[j] != '\0'; j = j + 1, e = e + 1) {
                        s[e] = b[j];
                    }
                    break;
                };
            }
            i = e;
            i++;
        };
    }
    printf ("%s", s);
    return 0;
}

