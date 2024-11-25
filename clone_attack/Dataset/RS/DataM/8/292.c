int oG4wagrfT (int yuXAB3mk);
int prlLZIOAM (int yuXAB3mk, int i, int a [(644 - 544)]);
void  C2LBv4rZMyU (int i, int Ep4g8srn1Y0 [(948 - 848)], int GKmpeWBOGk0L [(1099 - 999)], int yuXAB3mk, int BxkijV6s2CJ);

int main () {
    int i, yuXAB3mk, BxkijV6s2CJ, a [(411 - 311)], NbNHsL2kyjpC [(583 - 483)], Ep4g8srn1Y0 [(378 - 278)], GKmpeWBOGk0L [(798 - 698)];
    scanf ("%d%d", &yuXAB3mk, &BxkijV6s2CJ);
    {
        i = 701 - 701;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < yuXAB3mk) {
            a[i] = oG4wagrfT (i);
            i = i + 1;
        };
    }
    {
        i = 983 - 983;
        while (i < BxkijV6s2CJ) {
            NbNHsL2kyjpC[i] = oG4wagrfT (i);
            i++;
        };
    }
    {
        i = 608 - 608;
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
        while (i < yuXAB3mk) {
            Ep4g8srn1Y0[i] = prlLZIOAM (yuXAB3mk, i, a);
            i++;
        };
    }
    for (i = (950 - 950); i < BxkijV6s2CJ; i++)
        GKmpeWBOGk0L[i] = prlLZIOAM (BxkijV6s2CJ, i, NbNHsL2kyjpC);
    {
        i = 898 - 898;
        while (i < yuXAB3mk + BxkijV6s2CJ) {
            C2LBv4rZMyU (i, Ep4g8srn1Y0, GKmpeWBOGk0L, yuXAB3mk, BxkijV6s2CJ);
            i++;
        };
    }
    return (992 - 992);
}

int oG4wagrfT (int yuXAB3mk) {
    int a [(1085 - 985)];
    scanf ("%d", &a[yuXAB3mk]);
    return a[yuXAB3mk];
}

int prlLZIOAM (int yuXAB3mk, int i, int a [100]) {
    int prlLZIOAM, w0Sa9l4r, BxkijV6s2CJ;
    {
        prlLZIOAM = 568 - 568;
        while (prlLZIOAM < yuXAB3mk) {
            {
                w0Sa9l4r = 0;
                while (w0Sa9l4r < yuXAB3mk - (432 - 431)) {
                    if (a[w0Sa9l4r] > a[w0Sa9l4r + (806 - 805)]) {
                        BxkijV6s2CJ = a[w0Sa9l4r];
                        a[w0Sa9l4r] = a[w0Sa9l4r + 1];
                        a[w0Sa9l4r + 1] = BxkijV6s2CJ;
                    }
                    w0Sa9l4r++;
                };
            }
            prlLZIOAM++;
        };
    }
    return a[i];
}

void  C2LBv4rZMyU (int i, int Ep4g8srn1Y0 [100], int GKmpeWBOGk0L [100], int yuXAB3mk, int BxkijV6s2CJ) {
    if (i == 0)
        printf ("%d", Ep4g8srn1Y0[0]);
    if (i > 0 && i < yuXAB3mk)
        printf (" %d", Ep4g8srn1Y0[i]);
    if (i >= yuXAB3mk)
        printf (" %d", GKmpeWBOGk0L[i - yuXAB3mk]);
}

