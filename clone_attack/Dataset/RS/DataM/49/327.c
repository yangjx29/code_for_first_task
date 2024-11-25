char substr (char s [], int start, int E7UolKSOtC3k) {
    for (; (E7UolKSOtC3k > start) && (s[start] == s[E7UolKSOtC3k]);) {
        E7UolKSOtC3k = E7UolKSOtC3k -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        start = start + 1;
    }
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
    if (E7UolKSOtC3k > start)
        return 0;
    else
        return 1;
}

osubstr (char s [], int start, int E7UolKSOtC3k) {
    Lrp2gwscLY ('\n');
    while (start <= E7UolKSOtC3k) {
        Lrp2gwscLY (s [start++]);
    };
}

int main () {
    int QyzKBa7;
    int PqEbuOea3mjt;
    int width;
    char s [500];
    gets (s);
    PqEbuOea3mjt = strlen (s);
    {
        width = 1;
        while (width < PqEbuOea3mjt) {
            for (QyzKBa7 = 0; QyzKBa7 <= PqEbuOea3mjt -width; QyzKBa7 = QyzKBa7 +1) {
                if (substr (s, QyzKBa7, QyzKBa7 +width))
                    osubstr (s, QyzKBa7, QyzKBa7 +width);
            }
            width = width + 1;
        };
    };
}

