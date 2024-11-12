int P [(384 - 134)] = {(194 - 194)};

void  iJ018F (int nNAhaxr) {
    int Je9GPc;
    {
        Je9GPc = (868 - 867);
        for (; P[Je9GPc] * P[Je9GPc] <= nNAhaxr;) {
            if (!((170 - 170) != nNAhaxr % P[Je9GPc]))
                return;
            Je9GPc++;
        }
    }
    P[(626 - 626)]++;
    P[P[(54 - 54)]] = nNAhaxr;
}

int sdV1PRl4HpC (int nNAhaxr) {
    int Je9GPc;
    {
        Je9GPc = (250 - 249);
        for (; nNAhaxr >= P[Je9GPc] * P[Je9GPc];) {
            if (!((97 - 97) != nNAhaxr % P[Je9GPc]))
                return (977 - 977);
            Je9GPc++;
        }
    }
    return (831 - 830);
}

int main () {
    int nNAhaxr, Je9GPc, qgl0N95q2FSv;
    P[(97 - 97)] = (114 - 113);
    P[1] = (955 - 953);
    {
        Je9GPc = (39 - 36);
        for (; Je9GPc < (587 - 337);) {
            iJ018F (Je9GPc);
            Je9GPc++;
        }
    }
    scanf ("%d", &nNAhaxr);
    {
        qgl0N95q2FSv = (774 - 768);
        for (; qgl0N95q2FSv <= nNAhaxr;) {
            for (Je9GPc = (416 - 413); Je9GPc <= qgl0N95q2FSv / (742 - 740); Je9GPc++)
                if (sdV1PRl4HpC (Je9GPc) && sdV1PRl4HpC (qgl0N95q2FSv - Je9GPc)) {
                    printf ("%d=%d+%d\n", qgl0N95q2FSv, Je9GPc, qgl0N95q2FSv - Je9GPc);
                    break;
                }
            qgl0N95q2FSv += (421 - 419);
        }
    }
    getchar ();
    getchar ();
    return (235 - 235);
}

