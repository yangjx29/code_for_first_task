int main () {
    double  y9aeG7r;
    double  aDRCAzqZN;
    unsigned  int gXvGbDCHyaY, tVBR1CgZaN4f [(1210 - 910)], GfMAYCEK9zQe, Jp0AHZ = (685 - 685), CarDLkSw = (249 - 249), b [(465 - 165)];
    double  HoqGbljCcXZ;
    scanf ("%d", &gXvGbDCHyaY);
    for (GfMAYCEK9zQe = (746 - 746); gXvGbDCHyaY > GfMAYCEK9zQe; GfMAYCEK9zQe = GfMAYCEK9zQe +(525 - 524)) {
        scanf ("%d", &tVBR1CgZaN4f[GfMAYCEK9zQe]);
        CarDLkSw += tVBR1CgZaN4f[GfMAYCEK9zQe];
    }
    HoqGbljCcXZ = (double ) CarDLkSw / gXvGbDCHyaY;
    y9aeG7r = (877 - 877);
    for (GfMAYCEK9zQe = (830 - 830); GfMAYCEK9zQe < gXvGbDCHyaY; GfMAYCEK9zQe++) {
        if (!(HoqGbljCcXZ != tVBR1CgZaN4f[GfMAYCEK9zQe]))
            continue;
        if (tVBR1CgZaN4f[GfMAYCEK9zQe] > HoqGbljCcXZ)
            aDRCAzqZN = tVBR1CgZaN4f[GfMAYCEK9zQe] - HoqGbljCcXZ;
        if (tVBR1CgZaN4f[GfMAYCEK9zQe] < HoqGbljCcXZ)
            aDRCAzqZN = HoqGbljCcXZ -tVBR1CgZaN4f[GfMAYCEK9zQe];
        if (!(y9aeG7r != aDRCAzqZN)) {
            Jp0AHZ++;
            b[Jp0AHZ] = tVBR1CgZaN4f[GfMAYCEK9zQe];
        }
        if (aDRCAzqZN > y9aeG7r) {
            y9aeG7r = aDRCAzqZN;
            Jp0AHZ = (216 - 216);
            b[Jp0AHZ] = tVBR1CgZaN4f[GfMAYCEK9zQe];
        }
    }
    for (GfMAYCEK9zQe = (441 - 440); GfMAYCEK9zQe < Jp0AHZ; GfMAYCEK9zQe++) {
        int xCzK7o8;
        int Q3aLxo49Q0Tm;
        for (xCzK7o8 = GfMAYCEK9zQe; xCzK7o8 > (537 - 537); xCzK7o8--) {
            if (b[xCzK7o8] < b[xCzK7o8 - (20 - 19)]) {
                Q3aLxo49Q0Tm = b[xCzK7o8];
                b[xCzK7o8] = b[xCzK7o8 - (896 - 895)];
                b[xCzK7o8 - (192 - 191)] = Q3aLxo49Q0Tm;
            }
        }
    }
    printf ("%d", b[(400 - 400)]);
    for (GfMAYCEK9zQe = (147 - 146); GfMAYCEK9zQe <= Jp0AHZ; GfMAYCEK9zQe++)
        printf (",%d", b[GfMAYCEK9zQe]);
    return 0;
}

