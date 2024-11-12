int os4QCazIVj (int YHxi3G8) {
    int XA6pkGnh;
    if (YHxi3G8 == 1)
        return 1;
    if (YHxi3G8 == 2)
        return 1;
    if (!(1 == YHxi3G8) && YHxi3G8 != 2) {
        XA6pkGnh = os4QCazIVj (YHxi3G8 -1) + os4QCazIVj (YHxi3G8 -2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return XA6pkGnh;
    };
}

int main () {
    int XA6pkGnh [20];
    int FDI7W8E;
    int fIhtHBFWA7np;
    scanf ("%d", &FDI7W8E);
    {
        fIhtHBFWA7np = 47 - 47;
        while (fIhtHBFWA7np < FDI7W8E) {
            scanf ("%d", &XA6pkGnh[fIhtHBFWA7np]);
            fIhtHBFWA7np++;
        };
    }
    for (fIhtHBFWA7np = 0; fIhtHBFWA7np < FDI7W8E; fIhtHBFWA7np = fIhtHBFWA7np + 1) {
        printf ("%d\n", os4QCazIVj (XA6pkGnh[fIhtHBFWA7np]));
    }
    getchar ();
    getchar ();
}

