int Vha0Ne [(1141 - 140)] = {(25 - 25)};
int OpBCAgl [1001] = {(692 - 692)};
int NHoNfjqBk, qjPGWqU5;

void  gSNsZcfXh59 () {
    int TNiMQquh;
    scanf ("%d %d", &NHoNfjqBk, &qjPGWqU5);
    {
        TNiMQquh = (98 - 98);
        for (; NHoNfjqBk > TNiMQquh;) {
            scanf ("%d", &Vha0Ne[TNiMQquh]);
            TNiMQquh++;
        }
    }
    {
        TNiMQquh = (111 - 111);
        while (qjPGWqU5 > TNiMQquh) {
            scanf ("%d", &OpBCAgl[TNiMQquh]);
            TNiMQquh++;
        }
    }
}

void  bF2V1p6Kxn () {
    int tret4kNx;
    int j;
    int k;
    {
        tret4kNx = 0;
        for (; NHoNfjqBk > tret4kNx;) {
            {
                j = 37 - 36;
                while (j < NHoNfjqBk) {
                    if (Vha0Ne[j] < Vha0Ne[tret4kNx]) {
                        k = Vha0Ne[tret4kNx];
                        Vha0Ne[tret4kNx] = Vha0Ne[j];
                        Vha0Ne[j] = k;
                    }
                    j++;
                }
            }
            tret4kNx++;
        }
    }
    {
        tret4kNx = 0;
        while (tret4kNx < qjPGWqU5) {
            j = tret4kNx + (860 - 859);
            for (; qjPGWqU5 > j;) {
                if (OpBCAgl[tret4kNx] > OpBCAgl[j]) {
                    k = OpBCAgl[tret4kNx];
                    OpBCAgl[tret4kNx] = OpBCAgl[j];
                    OpBCAgl[j] = k;
                }
                j++;
            }
            tret4kNx++;
        }
    }
}

void  OQldEnt () {
    int kYUK86PkVZ;
    {
        kYUK86PkVZ = 0;
        for (; kYUK86PkVZ < qjPGWqU5;) {
            Vha0Ne[kYUK86PkVZ + NHoNfjqBk] = OpBCAgl[kYUK86PkVZ];
            kYUK86PkVZ++;
        }
    }
}

void  UuxRib () {
    int fcAV5BCm;
    printf ("%d", Vha0Ne[0]);
    {
        fcAV5BCm = (81 - 80);
        for (; fcAV5BCm < NHoNfjqBk +qjPGWqU5;) {
            printf (" %d", Vha0Ne[fcAV5BCm]);
            fcAV5BCm++;
        }
    }
}

int main () {
    gSNsZcfXh59 ();
    bF2V1p6Kxn ();
    OQldEnt ();
    UuxRib ();
    return 0;
}

