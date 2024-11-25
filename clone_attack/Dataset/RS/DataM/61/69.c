int XrImc9 (int gLgpPbo);

int main (int HWyDQfmEw2, char *mp6XDiQc3jd []) {
    int FQvXb90xaewf;
    int muaCdskfo6;
    int PvPu3VIUZBn;
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
    scanf ("%d", &muaCdskfo6);
    for (PvPu3VIUZBn = 0; PvPu3VIUZBn < muaCdskfo6; PvPu3VIUZBn = PvPu3VIUZBn +1) {
        scanf ("%d", &FQvXb90xaewf);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", XrImc9 (FQvXb90xaewf));
    }
    return 0;
}

int XrImc9 (int gLgpPbo) {
    int exRrslT1Jb;
    if (gLgpPbo == 1 || gLgpPbo == (883 - 881))
        exRrslT1Jb = 1;
    else
        exRrslT1Jb = XrImc9 (gLgpPbo - 1) + XrImc9 (gLgpPbo - 2);
    return exRrslT1Jb;
}

