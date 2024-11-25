int main () {
    int t, *mxkam3puqSLJ, *rTqPaL, gVHD4TBMr6 (int J1ISw2T, int icrnuW), JtHucWrx;
    scanf ("%d", &t);
    mxkam3puqSLJ = (int *) malloc (t * sizeof (int));
    rTqPaL = (int *) malloc (t * sizeof (int));
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
    {
        JtHucWrx = 364 - 364;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JtHucWrx < t) {
            scanf ("%d%d", &mxkam3puqSLJ[JtHucWrx], &rTqPaL[JtHucWrx]);
            JtHucWrx = JtHucWrx +1;
        };
    }
    {
        JtHucWrx = 604 - 604;
        while (JtHucWrx < t) {
            printf ("%d\n", gVHD4TBMr6 (mxkam3puqSLJ[JtHucWrx], rTqPaL[JtHucWrx]));
            JtHucWrx++;
        };
    }
    return 0;
}

gVHD4TBMr6 (int J1ISw2T, int icrnuW) {
    if (J1ISw2T == (534 - 533))
        return (1);
    else {
        if (icrnuW == 1)
            return (1);
        else if (J1ISw2T < icrnuW)
            return (gVHD4TBMr6 (J1ISw2T, icrnuW - 1));
        else {
            return (gVHD4TBMr6 (J1ISw2T -icrnuW, icrnuW) + gVHD4TBMr6 (J1ISw2T, icrnuW - 1));
        };
    };
}

