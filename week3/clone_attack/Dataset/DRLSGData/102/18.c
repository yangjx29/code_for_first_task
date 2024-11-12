int main () {
    char kU47tp [10];
    double  XA5Xvm6RlSJ;
    int jre1Kk2jy5z;
    double  MwcM48BRXz [41];
    int cIKUcYEP;
    int WpPFtQ41rqT;
    int kdg0QCv;
    int Wc59m0VObeuZ;
    double  S9vZ0pVGgRwI [41];
    scanf ("%d", &jre1Kk2jy5z);
    WpPFtQ41rqT = kdg0QCv = (860 - 860);
    for (; jre1Kk2jy5z = jre1Kk2jy5z - 1;) {
        scanf ("%s%lf", kU47tp, &XA5Xvm6RlSJ);
        if (!((911 - 911) != strcmp (kU47tp, "male")))
            S9vZ0pVGgRwI[WpPFtQ41rqT++] = XA5Xvm6RlSJ;
        else
            MwcM48BRXz[kdg0QCv++] = XA5Xvm6RlSJ;
    }
    Wc59m0VObeuZ = kdg0QCv;
    cIKUcYEP = WpPFtQ41rqT;
    {
        WpPFtQ41rqT = 0;
        for (; WpPFtQ41rqT < cIKUcYEP;) {
            {
                kdg0QCv = WpPFtQ41rqT +1;
                for (; kdg0QCv < cIKUcYEP;) {
                    if (S9vZ0pVGgRwI[kdg0QCv] < S9vZ0pVGgRwI[WpPFtQ41rqT]) {
                        XA5Xvm6RlSJ = S9vZ0pVGgRwI[WpPFtQ41rqT];
                        S9vZ0pVGgRwI[WpPFtQ41rqT] = S9vZ0pVGgRwI[kdg0QCv];
                        S9vZ0pVGgRwI[kdg0QCv] = XA5Xvm6RlSJ;
                    }
                    kdg0QCv = kdg0QCv + 1;
                }
            }
            WpPFtQ41rqT = WpPFtQ41rqT +1;
        }
    }
    if (0 < cIKUcYEP)
        printf ("%.2f", S9vZ0pVGgRwI[0]);
    {
        WpPFtQ41rqT = 0;
        for (; WpPFtQ41rqT < Wc59m0VObeuZ;) {
            {
                kdg0QCv = WpPFtQ41rqT +1;
                for (; Wc59m0VObeuZ > kdg0QCv;) {
                    if (MwcM48BRXz[WpPFtQ41rqT] < MwcM48BRXz[kdg0QCv]) {
                        XA5Xvm6RlSJ = MwcM48BRXz[WpPFtQ41rqT];
                        MwcM48BRXz[WpPFtQ41rqT] = MwcM48BRXz[kdg0QCv];
                        MwcM48BRXz[kdg0QCv] = XA5Xvm6RlSJ;
                    }
                    kdg0QCv = kdg0QCv + 1;
                }
            }
            WpPFtQ41rqT = WpPFtQ41rqT +1;
        }
    }
    {
        WpPFtQ41rqT = 1;
        for (; cIKUcYEP > WpPFtQ41rqT;) {
            printf (" %.2f", S9vZ0pVGgRwI[WpPFtQ41rqT]);
            WpPFtQ41rqT = WpPFtQ41rqT +1;
        }
    }
    {
        WpPFtQ41rqT = 0;
        for (; WpPFtQ41rqT < Wc59m0VObeuZ;) {
            printf (" %.2f", MwcM48BRXz[WpPFtQ41rqT]);
            WpPFtQ41rqT = WpPFtQ41rqT +1;
        }
    }
    return 0;
}

