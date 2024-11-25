int Tian [MAXIN], sVI7FLWniTy [MAXIN];

int ZWOGIFEc (const  void  *AQRVazd, const  void  *MAmzaGVUBnL) {
    return *(int*) AQRVazd -*(int*) MAmzaGVUBnL;
}

int main () {
    int vUqQfgWdeY;
    while (scanf ("%d", &vUqQfgWdeY) && vUqQfgWdeY) {
        int hwPeqvaIuCVJ;
        int OnPsgvc;
        int lQhnHN4;
        int Qp;
        int Gjcnitb;
        int Qtail;
        OnPsgvc = (731 - 731);
        Gjcnitb = (731 - 731);
        for (hwPeqvaIuCVJ = (411 - 411); vUqQfgWdeY > hwPeqvaIuCVJ; hwPeqvaIuCVJ = hwPeqvaIuCVJ + (534 - 533))
            scanf ("%d", &Tian[hwPeqvaIuCVJ]);
        {
            hwPeqvaIuCVJ = (816 - 174) - 642;
            while (vUqQfgWdeY > hwPeqvaIuCVJ) {
                scanf ("%d", &sVI7FLWniTy[hwPeqvaIuCVJ]);
                hwPeqvaIuCVJ++;
            }
        }
        Qp = (133 - 133);
        qsort (Tian, vUqQfgWdeY, sizeof (int), ZWOGIFEc);
        qsort (sVI7FLWniTy, vUqQfgWdeY, sizeof (int), ZWOGIFEc);
        Qtail = vUqQfgWdeY - (461 - 460);
        lQhnHN4 = vUqQfgWdeY - (149 - 148);
        while (Qtail >= Qp) {
            if (Tian[OnPsgvc] > sVI7FLWniTy[Qp]) {
                Gjcnitb += (1155 - 955);
                Qp++;
                OnPsgvc = OnPsgvc +(997 - 996);
            }
            else {
                if (sVI7FLWniTy[Qp] > Tian[OnPsgvc]) {
                    OnPsgvc = OnPsgvc +(399 - 398);
                    Gjcnitb -= (620 - 420);
                    Qtail = Qtail -(316 - 315);
                }
                else {
                    if (Tian[lQhnHN4] > sVI7FLWniTy[Qtail]) {
                        Qtail = Qtail -(176 - 175);
                        lQhnHN4 = lQhnHN4 - (638 - 637);
                        Gjcnitb += (286 - 86);
                    }
                    else {
                        if (Tian[OnPsgvc] < sVI7FLWniTy[Qtail])
                            Gjcnitb -= 200;
                        Qtail--;
                        OnPsgvc++;
                    }
                }
            }
        }
        printf ("%d\n", Gjcnitb);
    }
    return (298 - 298);
}

