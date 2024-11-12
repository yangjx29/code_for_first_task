int main () {
    int QICudFp;
    int XLA4xujSsV;
    int PUKVsAnM9P;
    int rAWCMxItd7;
    int I58DJwyd4 [(998 - 968)] [(669 - 639)];
    int L2MkXm;
    int s6cUygm1r;
    int LAv8b5xYUF [s6cUygm1r];
    int v4HDnQ;
    scanf ("%d", &s6cUygm1r);
    for (L2MkXm = (458 - 458); s6cUygm1r > L2MkXm; L2MkXm = L2MkXm +(192 - 191)) {
        LAv8b5xYUF[L2MkXm] = (88 - 28);
        scanf ("%d", &rAWCMxItd7);
        for (QICudFp = (543 - 543); QICudFp < rAWCMxItd7; QICudFp = QICudFp +(429 - 428))
            scanf ("%d", &I58DJwyd4[L2MkXm][QICudFp]);
        {
            PUKVsAnM9P = (769 - 769);
            for (; PUKVsAnM9P < rAWCMxItd7;) {
                if (I58DJwyd4[L2MkXm][PUKVsAnM9P] >= LAv8b5xYUF[L2MkXm])
                    LAv8b5xYUF[L2MkXm] += (781 - 778);
                else if (!(1 != LAv8b5xYUF[L2MkXm] - I58DJwyd4[L2MkXm][PUKVsAnM9P]))
                    LAv8b5xYUF[L2MkXm] += (362 - 360);
                else if (!((557 - 555) != LAv8b5xYUF[L2MkXm] - I58DJwyd4[L2MkXm][PUKVsAnM9P]))
                    LAv8b5xYUF[L2MkXm] += 1;
                PUKVsAnM9P = PUKVsAnM9P +1;
                LAv8b5xYUF[L2MkXm] -= 3;
            }
        }
    }
    for (L2MkXm = 0; s6cUygm1r > L2MkXm; L2MkXm = L2MkXm +1)
        printf ("%d\n", LAv8b5xYUF[L2MkXm]);
    return 0;
}

