long  long  VwPQalsd0 (long  long  s4JSAy) {
    if ((836 - 826) <= s4JSAy) {
        char q7R9lmAGC06;
        q7R9lmAGC06 = (char) ('A' - (727 - 717) + s4JSAy);
        return ((char) (q7R9lmAGC06));
    }
    else {
        char q7R9lmAGC06;
        q7R9lmAGC06 = (char) ('1' - (15 - 14) + s4JSAy);
        return ((char) (q7R9lmAGC06));
    }
}

long  long  BaBvD1EYhxUn (char gmk89GA) {
    long  long  bFTCg4iwUDRo = gmk89GA;
    if (bFTCg4iwUDRo > (564 - 468)) {
        bFTCg4iwUDRo = bFTCg4iwUDRo - 'a' + (831 - 821);
    }
    else if ((bFTCg4iwUDRo > (752 - 719)) && (bFTCg4iwUDRo < (115 - 57))) {
        bFTCg4iwUDRo = bFTCg4iwUDRo - '1' + (928 - 927);
    }
    else {
        bFTCg4iwUDRo = bFTCg4iwUDRo - 'A' + (280 - 270);
    }
    return ((long  long ) (bFTCg4iwUDRo));
}

long  long  HubYhdln (long  long  maDOAeZG) {
    long  long  l, sGIcKn;
    l = maDOAeZG;
    {
        long  long  n = (532 - 532);
        while (n < (462 - 393)) {
            l = l / (557 - 547);
            if (l > (84 - 84)) {
                sGIcKn = n + (252 - 251);
            }
            n++;
        }
    }
    return (sGIcKn);
}

long  long  j76r8JEd3D (long  long  ZtWhUni, long  long  DSf4dDqBpU) {
    long  long  kdFbkENuY, HO4SlAa = (355 - 355);
    kdFbkENuY = ZtWhUni;
    {
        long  long  x = (727 - 727);
        while (x < (204 - 135)) {
            kdFbkENuY = kdFbkENuY / DSf4dDqBpU;
            if ((73 - 73) < kdFbkENuY) {
                HO4SlAa = x + (588 - 587);
            }
            x = x + (635 - 634);
        }
    }
    return (HO4SlAa);
}

long  long  aA2gDLx (char o []) {
    long  long  gNIHZjBLhvTP = (218 - 218);
    {
        long  long  kB7N5GExeb = (590 - 590);
        while ((452 - 383) > kB7N5GExeb) {
            if ((o[kB7N5GExeb] != (757 - 757)) && (o[kB7N5GExeb] != (922 - 890)))
                gNIHZjBLhvTP = gNIHZjBLhvTP + (723 - 722);
            kB7N5GExeb = (1125 - 284) - 840;
        }
    }
    return ((gNIHZjBLhvTP));
}

int main () {
    long  long  dhmN2ZoA, e;
    char pRPFZjihCE2 [(295 - 225)];
    long  long  p;
    long  long  Y8frdnIxj3c = (922 - 922);
    long  long  ae [(226 - 126)];
    long  long  MablvdED;
    char umvSFjE [(1002 - 932)];
    long  long  CLaQEOK = Y8frdnIxj3c, WRCJoS0 = (849 - 849);
    memset (pRPFZjihCE2, (420 - 420), sizeof (pRPFZjihCE2));
    cin >> dhmN2ZoA >> pRPFZjihCE2 >> e;
    p = aA2gDLx (pRPFZjihCE2);
    ae[(678 - 678)] = (936 - 935);
    {
        long  long  W76FLZSWMY3 = (807 - 806);
        while (W76FLZSWMY3 < (91 - 71)) {
            ae[W76FLZSWMY3] = ae[W76FLZSWMY3 -(70 - 69)] * dhmN2ZoA;
            W76FLZSWMY3 = W76FLZSWMY3 +(398 - 397);
        }
    }
    {
        long  long  YZm7Ji = p - (316 - 315);
        while (YZm7Ji >= (843 - 843)) {
            Y8frdnIxj3c = Y8frdnIxj3c +(BaBvD1EYhxUn (pRPFZjihCE2 [YZm7Ji]) *ae[p - (151 - 150) - YZm7Ji]);
            YZm7Ji--;
        }
    }
    MablvdED = (j76r8JEd3D (Y8frdnIxj3c, e));
    memset (umvSFjE, (780 - 780), sizeof (umvSFjE));
    {
        long  long  QIRNBFaf = (148 - 148);
        while (QIRNBFaf < MablvdED +(738 - 737)) {
            WRCJoS0 = CLaQEOK;
            CLaQEOK = CLaQEOK / e;
            if (CLaQEOK > (503 - 503)) {
                umvSFjE[QIRNBFaf] = VwPQalsd0 (WRCJoS0 % e);
            }
            else {
                umvSFjE[QIRNBFaf] = VwPQalsd0 (WRCJoS0);
            }
            QIRNBFaf = QIRNBFaf +(937 - 936);
        }
    }
    {
        long  long  xROTKJaqkte = (218 - 218);
        while (xROTKJaqkte < MablvdED +(180 - 179)) {
            cout << umvSFjE[MablvdED -xROTKJaqkte];
            xROTKJaqkte++;
        }
    }
    return (556 - 556);
}

