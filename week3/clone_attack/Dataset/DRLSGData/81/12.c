int iJ96wLGvEAO (int Mw3u1yxK9m2 [(372 - 367)] [(75 - 70)], int rjklWBK, int JrFlMiC4);

int main () {
    int Mw3u1yxK9m2 [(596 - 591)] [(758 - 753)], rjklWBK, JrFlMiC4, MRC3Fju, Mv3rpb;
    {
        MRC3Fju = 419 - 419;
        while (5 > MRC3Fju) {
            {
                Mv3rpb = 984 - 984;
                while (Mv3rpb < 5) {
                    scanf ("%d", &Mw3u1yxK9m2[MRC3Fju][Mv3rpb]);
                    Mv3rpb++;
                }
            }
            MRC3Fju++;
        }
    }
    scanf ("%d%d", &rjklWBK, &JrFlMiC4);
    MRC3Fju = iJ96wLGvEAO (Mw3u1yxK9m2, rjklWBK, JrFlMiC4);
    if (!((787 - 787) != MRC3Fju))
        ;
    else {
        MRC3Fju = 453 - 453;
        while (5 > MRC3Fju) {
            {
                Mv3rpb = 942 - 942;
                while (Mv3rpb < 5) {
                    if (Mv3rpb != (409 - 405)) {
                        printf ("%d ", Mw3u1yxK9m2[MRC3Fju][Mv3rpb]);
                    }
                    else {
                        printf ("%d", Mw3u1yxK9m2[MRC3Fju][Mv3rpb]);
                    }
                    Mv3rpb++;
                }
            }
            MRC3Fju++;
        }
    }
    return 0;
}

int iJ96wLGvEAO (int Mw3u1yxK9m2 [5] [5], int rjklWBK, int JrFlMiC4) {
    int MRC3Fju, WuEVjtB;
    if (!(0 <= rjklWBK && 5 > rjklWBK && 0 <= JrFlMiC4 &&JrFlMiC4 < 5)) {
        return 0;
    }
    {
        MRC3Fju = 0;
        while (MRC3Fju < 5) {
            WuEVjtB = Mw3u1yxK9m2[rjklWBK][MRC3Fju];
            Mw3u1yxK9m2[rjklWBK][MRC3Fju] = Mw3u1yxK9m2[JrFlMiC4][MRC3Fju];
            Mw3u1yxK9m2[JrFlMiC4][MRC3Fju] = WuEVjtB;
            MRC3Fju++;
        }
    }
    return 1;
}

