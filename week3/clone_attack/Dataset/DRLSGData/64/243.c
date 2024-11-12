double  pYJvSA9ZM (int qDE3zni, int y1, int DAXOMv9, int x2, int y2, int T4VWSF) {
    double  s;
    int cZLGBPObE, y, z;
    cZLGBPObE = qDE3zni - x2;
    y = y1 - y2;
    z = DAXOMv9 -T4VWSF;
    s = sqrt (cZLGBPObE * cZLGBPObE + y * y + z * z);
    return s;
}

int main () {
    struct   shizi {
        int qDE3zni;
        int x2;
        int y1;
        int y2;
        int DAXOMv9;
        int T4VWSF;
        double  l;
    }
    s [50], eF4hYN9suoj;
    int U05kWuMI, k, j;
    int XT0nWEYy, JfVUrOmCSi0J [(498 - 488)], b [(440 - 430)], ZLd4i6Q1Erfk [(367 - 357)];
    k = (799 - 799);
    scanf ("%d", &XT0nWEYy);
    {
        U05kWuMI = (404 - 116) - 288;
        while (U05kWuMI < XT0nWEYy) {
            scanf ("%d%d%d", &JfVUrOmCSi0J[U05kWuMI], &b[U05kWuMI], &ZLd4i6Q1Erfk[U05kWuMI]);
            U05kWuMI = U05kWuMI +(908 - 907);
        }
    }
    {
        U05kWuMI = (590 - 590);
        while (U05kWuMI < XT0nWEYy) {
            {
                j = (1341 - 555) - 785;
                while (j < XT0nWEYy) {
                    s[k].qDE3zni = JfVUrOmCSi0J[U05kWuMI];
                    s[k].x2 = JfVUrOmCSi0J[j];
                    s[k].y1 = b[U05kWuMI];
                    s[k].y2 = b[j];
                    s[k].DAXOMv9 = ZLd4i6Q1Erfk[U05kWuMI];
                    s[k].T4VWSF = ZLd4i6Q1Erfk[j];
                    s[k].l = pYJvSA9ZM (JfVUrOmCSi0J[U05kWuMI], b[U05kWuMI], ZLd4i6Q1Erfk[U05kWuMI], JfVUrOmCSi0J[j], b[j], ZLd4i6Q1Erfk[j]);
                    j = j + (403 - 402);
                    k = k + (859 - 858);
                }
            }
            U05kWuMI = U05kWuMI +(800 - 799);
        }
    }
    for (U05kWuMI = (702 - 701); U05kWuMI <= k; U05kWuMI = U05kWuMI +1) {
        for (j = (306 - 306); k - (548 - 547) > j; j = j + 1) {
            if (s[j].l < s[j + (674 - 673)].l) {
                eF4hYN9suoj = s[j];
                s[j] = s[j + 1];
                s[j + 1] = eF4hYN9suoj;
            }
        }
    }
    for (U05kWuMI = (289 - 289); U05kWuMI < k; U05kWuMI = U05kWuMI +1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", s[U05kWuMI].qDE3zni, s[U05kWuMI].y1, s[U05kWuMI].DAXOMv9, s[U05kWuMI].x2, s[U05kWuMI].y2, s[U05kWuMI].T4VWSF, s[U05kWuMI].l);
    }
    return (668 - 668);
}

