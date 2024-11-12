int main () {
    char ch;
    char str [301];
    int t6hsb5Z;
    int W1gSMThv6;
    int meBFntNT6o;
    int uQpPy4b [26] = {0};
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
    t6hsb5Z = 1;
    scanf ("%s", str);
    meBFntNT6o = strlen (str);
    {
        W1gSMThv6 = 0;
        while (W1gSMThv6 < meBFntNT6o) {
            ch = str[W1gSMThv6];
            if (ch >= 'a' && ch <= 'z') {
                t6hsb5Z = 0;
                uQpPy4b[ch - 'a']++;
            }
            W1gSMThv6++;
        };
    }
    {
        ch = 'a';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (ch <= 'z') {
            if (uQpPy4b[ch - 'a'] > 0) {
                printf ("%c=%d\n", ch, uQpPy4b[ch - 'a']);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            ch++;
        };
    }
    if (t6hsb5Z) {
    }
    return 0;
}

