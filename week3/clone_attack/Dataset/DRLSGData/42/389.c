main () {
    int g3y4xWhpdtzk;
    int wu2ORZ;
    int rKU3FX;
    int UmhwPruvKW;
    int HJCUpVTS2P [100000];
    int HCoSVat;
    scanf ("%d", &g3y4xWhpdtzk);
    {
        wu2ORZ = 0;
        for (; wu2ORZ < g3y4xWhpdtzk;) {
            scanf ("%d", &HJCUpVTS2P[wu2ORZ]);
            wu2ORZ = wu2ORZ + 1;
        }
    }
    scanf ("%d", &HCoSVat);
    rKU3FX = 0;
    {
        wu2ORZ = 0;
        for (; wu2ORZ < g3y4xWhpdtzk;) {
            if (HJCUpVTS2P[wu2ORZ] != HCoSVat)
                rKU3FX = rKU3FX + 1;
            wu2ORZ = wu2ORZ + 1;
        }
    }
    {
        wu2ORZ = 0;
        for (; wu2ORZ < g3y4xWhpdtzk;) {
            if (HJCUpVTS2P[wu2ORZ] != HCoSVat) {
                printf ("%d", HJCUpVTS2P[wu2ORZ]);
                rKU3FX = rKU3FX - 1;
                if (rKU3FX > 0)
                    ;
            }
            wu2ORZ = wu2ORZ + 1;
        }
    }
}

