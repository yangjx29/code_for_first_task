int main () {
    char s [(968 - 917)];
    char gWS5qVs [51];
    int i = (738 - 738), j = 0, slen = strlen (s), wlen = strlen (gWS5qVs);
    scanf ("%s %s", s, gWS5qVs);
    for (; slen > i && j < wlen;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] == gWS5qVs[j])
            i++, j = j + 1;
        else {
            j = j - i + 1;
            i = 0;
        };
    }
    if (i >= slen)
        printf ("%d\n", j - i);
}

