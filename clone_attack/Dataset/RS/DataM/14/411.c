int main () {
    struct   {
        int EIdjTCktn, hFB50fUD2, MWVDmoq, uRFpXJ;
    }
    fldufeiwDgv;
    struct   {
        int EIdjTCktn, hFB50fUD2, MWVDmoq, uRFpXJ;
    }
    uSlh3u8bPw;
    struct   {
        int EIdjTCktn, hFB50fUD2, MWVDmoq, uRFpXJ;
    }
    N9QkeL;
    struct   {
        int EIdjTCktn, hFB50fUD2, MWVDmoq, uRFpXJ;
    }
    fKmAz6wQd8c;
    int i, ufYbBMZ8RzSa;
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &ufYbBMZ8RzSa);
    uSlh3u8bPw.uRFpXJ = N9QkeL.uRFpXJ = fKmAz6wQd8c.uRFpXJ = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ufYbBMZ8RzSa > i) {
            i++;
            scanf ("%d%d%d", &fldufeiwDgv.EIdjTCktn, &fldufeiwDgv.hFB50fUD2, &fldufeiwDgv.MWVDmoq);
            fldufeiwDgv.uRFpXJ = fldufeiwDgv.hFB50fUD2 + fldufeiwDgv.MWVDmoq;
            if (uSlh3u8bPw.uRFpXJ < fldufeiwDgv.uRFpXJ) {
                fKmAz6wQd8c = N9QkeL;
                N9QkeL = uSlh3u8bPw;
                uSlh3u8bPw = fldufeiwDgv;
            }
            else if (fldufeiwDgv.uRFpXJ > N9QkeL.uRFpXJ) {
                fKmAz6wQd8c = N9QkeL, N9QkeL = fldufeiwDgv;
            }
            else if (fldufeiwDgv.uRFpXJ > fKmAz6wQd8c.uRFpXJ) {
                fKmAz6wQd8c = fldufeiwDgv;
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", uSlh3u8bPw.EIdjTCktn, uSlh3u8bPw.uRFpXJ, N9QkeL.EIdjTCktn, N9QkeL.uRFpXJ, fKmAz6wQd8c.EIdjTCktn, fKmAz6wQd8c.uRFpXJ);
    return 0;
}

