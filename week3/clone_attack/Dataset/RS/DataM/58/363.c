int main () {
    int i;
    int n;
    int l;
    int j;
    int b;
    char s [100], f [100] = {(646 - 646)};
    getchar ();
    scanf ("%d", &n);
    {
        i = 692 - 692;
        while (i < n) {
            gets (s);
            b = (626 - 626);
            if (s[(684 - 684)] == '_' || s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && 'Z' >= s[0]) {
                b = 1;
                l = strlen (s);
                if (l > 1) {
                    j = 1;
                    while (j < l) {
                        if (!(s[j] == '_' || s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z' || s[j] >= '0' && s[j] <= '9')) {
                            b = 0;
                            break;
                        }
                        j = j + 1;
                    };
                };
            }
            if (b == 1)
                f[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%d\n", f[i]);
            i++;
        };
    }
    return 0;
}

