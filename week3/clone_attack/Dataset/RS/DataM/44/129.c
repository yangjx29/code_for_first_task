int Aac4kiv9b (int sDEHtMTs) {
    int NExMdHq2;
    int KUuojzFGwp;
    int mA5yo9gzaP = 1;
    int XzbRPd [(233 - 133)];
    int y = 0;
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
    int I3oOQX8ij = sDEHtMTs;
    if (sDEHtMTs < 0) {
        sDEHtMTs = -sDEHtMTs;
    }
    {
        KUuojzFGwp = 0;
        while (1) {
            if (I3oOQX8ij / 10 > 0) {
                XzbRPd[KUuojzFGwp] = I3oOQX8ij % 10;
                I3oOQX8ij = I3oOQX8ij / 10;
            }
            else {
                XzbRPd[KUuojzFGwp] = I3oOQX8ij % 10;
                KUuojzFGwp = KUuojzFGwp +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                NExMdHq2 = KUuojzFGwp;
                break;
            }
            KUuojzFGwp++;
        };
    }
    for (int j = 0;
    j <= NExMdHq2 -1; j = j + 1) {
        for (int TQW7TRFod = 0;
        j - 1 >= TQW7TRFod; TQW7TRFod = TQW7TRFod +1) {
            mA5yo9gzaP = mA5yo9gzaP * 10;
        }
        y = y + XzbRPd[NExMdHq2 -j - 1] * mA5yo9gzaP;
        mA5yo9gzaP = 1;
    }
    if (sDEHtMTs > 0)
        return y;
    else {
        return -y;
    };
}

int main () {
    int XzbRPd [100];
    int y;
    for (int KUuojzFGwp = 0;
    KUuojzFGwp <= 5; KUuojzFGwp++) {
        scanf ("%d", &XzbRPd[KUuojzFGwp]);
        if (XzbRPd[KUuojzFGwp] > 0) {
            printf ("%d\n", Aac4kiv9b (XzbRPd[KUuojzFGwp]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            printf ("%d\n", -Aac4kiv9b(XzbRPd[KUuojzFGwp]));
        };
    }
    scanf ("%d", &y);
    return 0;
}

