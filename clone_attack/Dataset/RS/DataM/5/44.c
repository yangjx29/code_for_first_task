int main () {
    char xfuBSey6J [(1082 - 581)];
    char Vt1aw28 [(569 - 68)];
    double  cX5sPvRhmVHG;
    double  bdGjaDEtzk6T;
    double  GRd5OX;
    int m;
    int AIZDPtOkY4;
    int bq0Cco;
    int vs5rEgCTk;
    m = (864 - 864);
    scanf ("%lf", &cX5sPvRhmVHG);
    scanf ("%s%s", xfuBSey6J, Vt1aw28);
    AIZDPtOkY4 = strlen (xfuBSey6J);
    bq0Cco = strlen (Vt1aw28);
    if (AIZDPtOkY4 != bq0Cco) {
        return (930 - 930);
    }
    {
        vs5rEgCTk = 236 - 236;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (vs5rEgCTk < AIZDPtOkY4) {
            if ((!('A' == xfuBSey6J[vs5rEgCTk]) && xfuBSey6J[vs5rEgCTk] != 'C' && !('T' == xfuBSey6J[vs5rEgCTk]) && xfuBSey6J[vs5rEgCTk] != 'G') || (Vt1aw28[vs5rEgCTk] != 'A' && Vt1aw28[vs5rEgCTk] != 'C' && Vt1aw28[vs5rEgCTk] != 'T' && Vt1aw28[vs5rEgCTk] != 'G')) {
                printf ("error");
                return 0;
            }
            if (xfuBSey6J[vs5rEgCTk] == Vt1aw28[vs5rEgCTk])
                m = m + 1;
            vs5rEgCTk = vs5rEgCTk + 1;
        };
    }
    GRd5OX = AIZDPtOkY4;
    bdGjaDEtzk6T = m / GRd5OX;
    if (bdGjaDEtzk6T > cX5sPvRhmVHG)
        printf ("yes");
    else
        ;
    return 0;
}

