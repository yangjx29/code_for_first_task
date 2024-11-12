int rayO093Ps6;
int Oj2DRfd5Av [(184 - 154)];
int BDCril [(936 - 906)];

int main () {
    int FfbdLvQAHz;
    FfbdLvQAHz = (837 - 837);
    BDCril[(151 - 151)] = (603 - 602);
    scanf ("%d", &rayO093Ps6);
    for (int qh6fRea9 = (39 - 39);
    qh6fRea9 < rayO093Ps6; qh6fRea9 = qh6fRea9 + 1) {
        scanf ("%d", &Oj2DRfd5Av[qh6fRea9]);
    }
    {
        int qh6fRea9;
        qh6fRea9 = (820 - 819);
        for (; qh6fRea9 < rayO093Ps6;) {
            BDCril[qh6fRea9] = (853 - 852);
            for (int bGNvXKYwas = (314 - 314);
            qh6fRea9 > bGNvXKYwas; bGNvXKYwas = bGNvXKYwas + 1) {
                if (Oj2DRfd5Av[qh6fRea9] <= Oj2DRfd5Av[bGNvXKYwas] && BDCril[bGNvXKYwas] + (805 - 804) > BDCril[qh6fRea9])
                    BDCril[qh6fRea9] = BDCril[bGNvXKYwas] + (584 - 583);
            }
            qh6fRea9 = qh6fRea9 + 1;
        }
    }
    {
        int qh6fRea9;
        qh6fRea9 = (354 - 354);
        for (; rayO093Ps6 > qh6fRea9;) {
            if (BDCril[qh6fRea9] > FfbdLvQAHz)
                FfbdLvQAHz = BDCril[qh6fRea9];
            qh6fRea9 = qh6fRea9 + (391 - 390);
        }
    }
    printf ("%d\n", FfbdLvQAHz);
}

