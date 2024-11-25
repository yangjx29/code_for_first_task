int main () {
    int Q0ItVbd;
    int i;
    int iZ4nv1w;
    int i3Gsxd;
    int jA5qxn;
    int OzAtLmZQ;
    Q0ItVbd = (166 - 166);
    char s [1000];
    gets (s);
    OzAtLmZQ = strlen (s);
    {
        i = 436 - 436;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < OzAtLmZQ -(279 - 278)) {
            if (s[i] == ' ' && s[i + 1] == ' ' && Q0ItVbd == (717 - 717)) {
                iZ4nv1w = i;
                Q0ItVbd = 1;
            }
            else if (s[i] == ' ' && s[i + 1] != ' ' && Q0ItVbd == 1) {
                i3Gsxd = i;
                for (jA5qxn = iZ4nv1w; jA5qxn < OzAtLmZQ -i3Gsxd + iZ4nv1w; jA5qxn = jA5qxn + 1) {
                    s[jA5qxn] = s[i];
                    i = i + 1;
                }
                i = iZ4nv1w;
                s[jA5qxn] = '\0';
                Q0ItVbd = 0;
            }
            i = i + 1;
        };
    }
    printf ("%s", s);
    return 0;
}

