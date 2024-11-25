int main () {
    int x;
    int k;
    int igqYmKCeshJ;
    int VJRcGE98Htep;
    int CRxIbX0u5;
    x = (873 - 873);
    char N2ODU7oJec [256], a [256], Dhs2VTC [256], p [256];
    gets (N2ODU7oJec);
    gets (a);
    gets (Dhs2VTC);
    k = (int) strlen (N2ODU7oJec);
    igqYmKCeshJ = (int) strlen (a);
    for (VJRcGE98Htep = 0; VJRcGE98Htep < k - igqYmKCeshJ + (566 - 565); VJRcGE98Htep = VJRcGE98Htep +1) {
        {
            CRxIbX0u5 = 0;
            while (CRxIbX0u5 < igqYmKCeshJ) {
                p[CRxIbX0u5] = N2ODU7oJec[CRxIbX0u5 +VJRcGE98Htep];
                CRxIbX0u5++;
            };
        }
        p[CRxIbX0u5] = '\0';
        if (strcmp (p, a) == 0) {
            x = VJRcGE98Htep;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (x == 0) {
        printf ("%s", N2ODU7oJec);
    }
    else {
        for (VJRcGE98Htep = 0; VJRcGE98Htep < x; VJRcGE98Htep = VJRcGE98Htep +1) {
            printf ("%c", N2ODU7oJec[VJRcGE98Htep]);
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
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%s", Dhs2VTC);
        for (VJRcGE98Htep = x + igqYmKCeshJ; VJRcGE98Htep < k; VJRcGE98Htep = VJRcGE98Htep +1) {
            printf ("%c", N2ODU7oJec[VJRcGE98Htep]);
        };
    }
    return 0;
}

