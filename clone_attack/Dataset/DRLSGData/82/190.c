int main () {
    int m;
    int gKq9VPDCl;
    int TphR4k1f32;
    int izimCLUyhY [(1077 - 777)];
    int XPTUG27e [(475 - 175)];
    int upJuWOlUX56 [300];
    int JowWBDs5Lr;
    int gfOcJm3;
    int Gz4nfOVj5s;
    m = (265 - 265);
    gKq9VPDCl = (41 - 41);
    scanf ("%d", &TphR4k1f32);
    if ((823 - 723) >= TphR4k1f32) {
        for (Gz4nfOVj5s = (29 - 29); Gz4nfOVj5s < TphR4k1f32; Gz4nfOVj5s = Gz4nfOVj5s +(28 - 27))
            scanf ("%d %d", &izimCLUyhY[Gz4nfOVj5s], &XPTUG27e[Gz4nfOVj5s]);
        for (Gz4nfOVj5s = (867 - 867); Gz4nfOVj5s < TphR4k1f32; Gz4nfOVj5s = Gz4nfOVj5s +1) {
            if ((789 - 699) <= izimCLUyhY[Gz4nfOVj5s] && (1086 - 946) >= izimCLUyhY[Gz4nfOVj5s] && 60 <= XPTUG27e[Gz4nfOVj5s] && XPTUG27e[Gz4nfOVj5s] <= 90) {
                m = m + 1;
                if (Gz4nfOVj5s == TphR4k1f32 -1)
                    upJuWOlUX56[gKq9VPDCl] = m;
            }
            else {
                upJuWOlUX56[gKq9VPDCl] = m;
                m = 0;
                gKq9VPDCl = gKq9VPDCl + 1;
            }
        }
        gfOcJm3 = upJuWOlUX56[0];
        for (JowWBDs5Lr = 0; JowWBDs5Lr < gKq9VPDCl + 1; JowWBDs5Lr = JowWBDs5Lr +1) {
            if (gfOcJm3 < upJuWOlUX56[JowWBDs5Lr])
                gfOcJm3 = upJuWOlUX56[JowWBDs5Lr];
        }
        printf ("%d\n", gfOcJm3);
    }
    return 0;
}

