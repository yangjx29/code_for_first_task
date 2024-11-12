int main () {
    char g3mvbkX7o1Hr [250] [6];
    int K0Tq8JRtMfvn;
    int UIbo9P [250];
    char SlyNvzK [6];
    int KhmE19yT8i;
    int k6tqisZ9CdwW;
    int mf2NMm;
    char dysTml [501];
    gets (dysTml);
    int QNoOKWLYf;
    scanf ("%d\n", &K0Tq8JRtMfvn);
    {
        KhmE19yT8i = 0;
        QNoOKWLYf = 0;
        while (1) {
            {
                mf2NMm = 0;
                for (; mf2NMm < K0Tq8JRtMfvn;) {
                    SlyNvzK[mf2NMm] = dysTml[mf2NMm + KhmE19yT8i];
                    mf2NMm++;
                }
            }
            SlyNvzK[K0Tq8JRtMfvn] = '\0';
            if (!('\0' != SlyNvzK[K0Tq8JRtMfvn -1]))
                break;
            {
                mf2NMm = 0;
                for (; QNoOKWLYf > mf2NMm;) {
                    if (!(0 != strcmp (g3mvbkX7o1Hr[mf2NMm], SlyNvzK)))
                        break;
                    mf2NMm++;
                }
            }
            KhmE19yT8i++;
            if (mf2NMm != QNoOKWLYf) {
                QNoOKWLYf--;
                UIbo9P[mf2NMm]++;
            }
            else {
                strcpy (g3mvbkX7o1Hr[QNoOKWLYf], SlyNvzK);
                UIbo9P[QNoOKWLYf] = 1;
            }
            QNoOKWLYf++;
        }
    }
    k6tqisZ9CdwW = 0;
    {
        KhmE19yT8i = 0;
        while (QNoOKWLYf > KhmE19yT8i) {
            if (k6tqisZ9CdwW < UIbo9P[KhmE19yT8i])
                k6tqisZ9CdwW = UIbo9P[KhmE19yT8i];
            KhmE19yT8i++;
        }
    }
    if (!(1 != k6tqisZ9CdwW))
        ;
    else {
        printf ("%d\n", k6tqisZ9CdwW);
        {
            KhmE19yT8i = 0;
            while (QNoOKWLYf > KhmE19yT8i) {
                if (k6tqisZ9CdwW == UIbo9P[KhmE19yT8i])
                    printf ("%s\n", g3mvbkX7o1Hr[KhmE19yT8i]);
                KhmE19yT8i++;
            }
        }
    }
    return 0;
}

