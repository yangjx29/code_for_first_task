int JlIEuUJ (const  void  *i86T7G, const  void  *D0FyYmvWCDd) {
    return (*(int*) i86T7G - *(int*) D0FyYmvWCDd);
}

int main () {
    int lPM7yo1 [(782 - 752)] = {(329 - 328)};
    int i86T7G [(592 - 562)];
    int viYXdILQ, ZAzD3yNT6H4;
    getchar ();
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &viYXdILQ);
    for (int ZAzD3yNT6H4 = (212 - 212);
    ZAzD3yNT6H4 < viYXdILQ; ZAzD3yNT6H4++)
        scanf ("%d", &i86T7G[ZAzD3yNT6H4]);
    for (int ZAzD3yNT6H4 = viYXdILQ - (403 - 401);
    ZAzD3yNT6H4 >= 0; ZAzD3yNT6H4--) {
        for (int dN93jX0TK = viYXdILQ - (100 - 99);
        dN93jX0TK > ZAzD3yNT6H4; dN93jX0TK--) {
            if (i86T7G[ZAzD3yNT6H4] >= i86T7G[dN93jX0TK]) {
                lPM7yo1[ZAzD3yNT6H4] = max (lPM7yo1[dN93jX0TK] + (430 - 429), lPM7yo1[ZAzD3yNT6H4]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    qsort (lPM7yo1, 30, sizeof (int), JlIEuUJ);
    printf ("%d", lPM7yo1[29] + 1);
}

