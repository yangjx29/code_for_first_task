int main () {
    int ptDl6H7o;
    int y;
    char a [101];
    int yklRiDj;
    char b [101];
    int MbiKgvlouG0;
    char V7oEKW8jTk [101];
    int TSbzrMZA8n7;
    char A3GUQk [101];
    int x;
    char c [101];
    scanf ("%d", &MbiKgvlouG0);
    for (yklRiDj = 1; MbiKgvlouG0 >= yklRiDj; yklRiDj = yklRiDj + 1) {
        scanf ("%s", a);
        x = strlen (a);
        for (ptDl6H7o = x - 1, TSbzrMZA8n7 = 0; 0 <= ptDl6H7o; ptDl6H7o = ptDl6H7o - 1, TSbzrMZA8n7 = TSbzrMZA8n7 +1)
            c[TSbzrMZA8n7] = a[ptDl6H7o];
        scanf ("%s", b);
        y = strlen (b);
        for (ptDl6H7o = y - 1, TSbzrMZA8n7 = 0; ptDl6H7o >= 0; TSbzrMZA8n7 = TSbzrMZA8n7 +1, ptDl6H7o = ptDl6H7o - 1)
            A3GUQk[TSbzrMZA8n7] = b[ptDl6H7o];
        for (ptDl6H7o = 0; x > ptDl6H7o; ptDl6H7o = ptDl6H7o + 1) {
            if (ptDl6H7o < y) {
                if (c[ptDl6H7o] < A3GUQk[ptDl6H7o]) {
                    V7oEKW8jTk[ptDl6H7o] = c[ptDl6H7o] + 58 - A3GUQk[ptDl6H7o];
                    c[ptDl6H7o + 1] = c[ptDl6H7o + 1] - 1;
                }
                else
                    V7oEKW8jTk[ptDl6H7o] = c[ptDl6H7o] - A3GUQk[ptDl6H7o] + 48;
            }
            else
                V7oEKW8jTk[ptDl6H7o] = c[ptDl6H7o];
        }
        {
            ptDl6H7o = x - 1;
            while (ptDl6H7o >= 0) {
                printf ("%c", V7oEKW8jTk[ptDl6H7o]);
                ptDl6H7o = ptDl6H7o - 1;
            }
        }
    }
    return 0;
}

