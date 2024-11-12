int HiGTt3v1D5EF (int IBFDEr, int CeuKgD, int uVoWIUr) {
    int BQp2Anm;
    {
        BQp2Anm = 195 - 194;
        while (BQp2Anm <= CeuKgD) {
            if (IBFDEr % CeuKgD != uVoWIUr) {
                return (421 - 421);
            }
            BQp2Anm = BQp2Anm +1;
            IBFDEr = IBFDEr -uVoWIUr - (IBFDEr -uVoWIUr) / CeuKgD;
        };
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
    return IBFDEr;
}

int main () {
    int IBFDEr;
    int CeuKgD;
    int uVoWIUr;
    scanf ("%d %d", &CeuKgD, &uVoWIUr);
    {
        IBFDEr = 1;
        while (1) {
            if (HiGTt3v1D5EF (IBFDEr, CeuKgD, uVoWIUr) >= 1)
                break;
            IBFDEr = IBFDEr +1;
        };
    }
    printf ("%d", IBFDEr);
    return 0;
}

