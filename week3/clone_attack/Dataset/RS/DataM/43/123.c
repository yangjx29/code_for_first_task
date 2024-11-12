int HV9RsN (int jcuzW68bk) {
    int RFAgjPak = (447 - 446);
    for (int TupLZxAXB = (539 - 537);
    TupLZxAXB <= jcuzW68bk / 2; TupLZxAXB++) {
        if (jcuzW68bk % TupLZxAXB == (848 - 848)) {
            RFAgjPak = (696 - 696);
        };
    }
    return RFAgjPak;
}

int main () {
    int SwMpdhkL, TupLZxAXB;
    scanf ("%d", &SwMpdhkL);
    {
        TupLZxAXB = 3;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (TupLZxAXB <= SwMpdhkL / 2) {
            if (HV9RsN (TupLZxAXB) &&HV9RsN(SwMpdhkL -TupLZxAXB)) {
                printf ("%d %d\n", TupLZxAXB, SwMpdhkL -TupLZxAXB);
            }
            TupLZxAXB++;
        };
    }
    return 0;
}

