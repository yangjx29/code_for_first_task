int main () {
    char wMs6NrT [1000], b [1000];
    double  sum;
    double  w;
    double  mkJq35n;
    sum = 0;
    int CcmgTSlLXpRF;
    int x;
    int y;
    scanf ("%lf", &w);
    scanf ("%s", wMs6NrT);
    x = strlen (wMs6NrT);
    scanf ("%s", b);
    y = strlen (b);
    if (x == y) {
        for (CcmgTSlLXpRF = 0; CcmgTSlLXpRF < x; CcmgTSlLXpRF = CcmgTSlLXpRF +1) {
            if (!(b[CcmgTSlLXpRF] != wMs6NrT[CcmgTSlLXpRF])) {
                sum = sum + 1;
            }
            else {
                if ((!('A' == wMs6NrT[CcmgTSlLXpRF]) && !('C' == wMs6NrT[CcmgTSlLXpRF]) && !('T' == wMs6NrT[CcmgTSlLXpRF]) && !('G' == wMs6NrT[CcmgTSlLXpRF])) || (b[CcmgTSlLXpRF] != 'A' && b[CcmgTSlLXpRF] != 'C' && b[CcmgTSlLXpRF] != 'T' && b[CcmgTSlLXpRF] != 'G')) {
                    return 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    }
    else if (x != y) {
        return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    while (x == y) {
        mkJq35n = sum / x;
        if (mkJq35n >= w) {
            break;
        }
        else
            ;
        break;
    }
    return 0;
}

