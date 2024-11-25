int main () {
    double  n, m;
    int jo2gCS, aJaHQ07m5 = 0, s = 0, vjOybpKD, E0b21SWfdFZ;
    char YmbEaRs7JN [256], tPT9RljH7D [256];
    scanf ("%lf", &n);
    scanf ("%s", &YmbEaRs7JN);
    vjOybpKD = strlen (YmbEaRs7JN);
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
    scanf ("%s", &tPT9RljH7D);
    E0b21SWfdFZ = strlen (tPT9RljH7D);
    {
        jo2gCS = 0;
        while (vjOybpKD > jo2gCS) {
            if ((!('A' == YmbEaRs7JN[jo2gCS]) && !('T' == YmbEaRs7JN[jo2gCS]) && !('C' == YmbEaRs7JN[jo2gCS]) && !('G' == YmbEaRs7JN[jo2gCS])) || (!('A' == tPT9RljH7D[jo2gCS]) && tPT9RljH7D[jo2gCS] != 'T' && tPT9RljH7D[jo2gCS] != 'C' && tPT9RljH7D[jo2gCS] != 'G')) {
                s = s + 1;
            }
            jo2gCS++;
        };
    }
    if (s != 0 || vjOybpKD != E0b21SWfdFZ) {
    }
    else {
        for (jo2gCS = 0; jo2gCS < vjOybpKD; jo2gCS++) {
            if (YmbEaRs7JN[jo2gCS] == tPT9RljH7D[jo2gCS]) {
                aJaHQ07m5 = aJaHQ07m5 + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        }
        m = (double ) aJaHQ07m5 / vjOybpKD;
        if (m > n) {
        }
        else
            ;
    }
    return 0;
}

