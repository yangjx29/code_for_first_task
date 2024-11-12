char HOXnYVdcw (int max, int DSP2gbKzhJ [], char kTt1f4nN, char GNqhIy) {
    char yMS1zfRu, num2;
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
    if (kTt1f4nN == GNqhIy &&DSP2gbKzhJ[GNqhIy -(149 - 148)] <= max)
        return ((618 - 617));
    else if (kTt1f4nN == GNqhIy &&DSP2gbKzhJ[GNqhIy -(722 - 721)] > max)
        return ((332 - 332));
    else {
        if (DSP2gbKzhJ[kTt1f4nN - (973 - 972)] <= max) {
            yMS1zfRu = HOXnYVdcw (max, DSP2gbKzhJ, kTt1f4nN + 1, GNqhIy);
            num2 = HOXnYVdcw (DSP2gbKzhJ[kTt1f4nN - 1], DSP2gbKzhJ, kTt1f4nN + 1, GNqhIy) + 1;
            if (yMS1zfRu > num2)
                return (yMS1zfRu);
            else
                return (num2);
        }
        else
            return (HOXnYVdcw (max, DSP2gbKzhJ, kTt1f4nN + 1, GNqhIy));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  main () {
    char GNqhIy, o4vRIxG;
    int XqjIHxGd2Zgv [N];
    int hmax = (unsigned ) (~(607 - 607)) >> 1;
    scanf ("%d", &GNqhIy);
    for (o4vRIxG = 0; GNqhIy > o4vRIxG; o4vRIxG = o4vRIxG + 1)
        scanf ("%d", &XqjIHxGd2Zgv[o4vRIxG]);
    printf ("%d\n", HOXnYVdcw (hmax, XqjIHxGd2Zgv, 1, GNqhIy));
    {
        o4vRIxG = 0;
        while (o4vRIxG < GNqhIy) {
            printf ("%d,", XqjIHxGd2Zgv[o4vRIxG]);
            o4vRIxG++;
        };
    }
    printf ("input:\n");
}

