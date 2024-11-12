int main () {
    int n;
    int PoEp7Y;
    int b;
    int i;
    int mLlYJn;
    scanf ("%d", &n);
    {
        i = 570 - 569;
        while (i <= n) {
            scanf ("%d", &mLlYJn);
            if (i == 1) {
                PoEp7Y = mLlYJn;
                b = mLlYJn;
            }
            else {
                if (mLlYJn > PoEp7Y) {
                    b = PoEp7Y;
                    PoEp7Y = mLlYJn;
                }
                else if ((PoEp7Y > mLlYJn) && (mLlYJn > b)) {
                    b = mLlYJn;
                };
            }
            i++;
        };
    }
    printf ("%d\n%d\n", PoEp7Y, b);
    return 0;
}

