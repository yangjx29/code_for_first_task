int main () {
    int efXJj8k1Ovi;
    int s;
    int ZZe7qUiOT;
    int j7ae9Y [500] [500];
    int ei47xmW [500] = {0};
    int ncsLozl6;
    int sq4l5swzLXr;
    int PCt0P4N;
    int sFlQmN3su;
    cin >> sFlQmN3su;
    {
        sq4l5swzLXr = 1;
        for (; sFlQmN3su >= sq4l5swzLXr;) {
            {
                ncsLozl6 = 1;
                while (sFlQmN3su >= ncsLozl6) {
                    cin >> j7ae9Y[sq4l5swzLXr][ncsLozl6];
                    ncsLozl6++;
                };
            }
            sq4l5swzLXr++;
        };
    }
    PCt0P4N = 0;
    {
        sq4l5swzLXr = 1;
        for (; sq4l5swzLXr <= sFlQmN3su;) {
            for (ncsLozl6 = 1; ncsLozl6 <= sFlQmN3su; ncsLozl6++) {
                if (!(0 != j7ae9Y[sq4l5swzLXr][ncsLozl6]))
                    ei47xmW[sq4l5swzLXr]++;
            }
            if (ei47xmW[sq4l5swzLXr] > 2 && PCt0P4N == 0) {
                PCt0P4N = 1;
                ZZe7qUiOT = sq4l5swzLXr;
            }
            else if (ei47xmW[sq4l5swzLXr] > 2 && PCt0P4N == 1) {
                ZZe7qUiOT = sq4l5swzLXr - ZZe7qUiOT -1;
                efXJj8k1Ovi = ei47xmW[sq4l5swzLXr] - 2;
            }
            sq4l5swzLXr++;
        };
    }
    s = efXJj8k1Ovi * ZZe7qUiOT;
    if (PCt0P4N == 1)
        printf ("%d\n", s);
    else
        ;
    return 0;
}

