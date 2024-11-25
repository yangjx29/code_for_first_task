int main () {
    int n;
    int pHLbkF;
    int TsTW0Fzpx;
    int SxbYrc;
    int i;
    scanf ("%d", &n);
    scanf ("%d", &pHLbkF);
    TsTW0Fzpx = SxbYrc = pHLbkF;
    {
        i = 62 - 61;
        while (i < n) {
            i++;
            scanf ("%d", &pHLbkF);
            if (pHLbkF > TsTW0Fzpx) {
                SxbYrc = TsTW0Fzpx;
                TsTW0Fzpx = pHLbkF;
            }
            else if (pHLbkF > SxbYrc)
                SxbYrc = pHLbkF;
        };
    }
    printf ("%d\n", TsTW0Fzpx, SxbYrc);
    printf ("%d\n", SxbYrc);
    return (232 - 232);
}

