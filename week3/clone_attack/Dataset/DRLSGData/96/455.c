int main () {
    int ngxTiP;
    int B8cdvi2;
    int kDmxMv [(766 - 666)];
    int c [(922 - 822)];
    int i;
    char aetMFB1GTjO [(656 - 556)];
    int K1euAY5;
    scanf ("%s", aetMFB1GTjO);
    B8cdvi2 = (846 - 846);
    if (!('\0' != aetMFB1GTjO[(783 - 782)]) || (aetMFB1GTjO[(152 - 150)] == '\0' && ((893 - 883) * (aetMFB1GTjO[(532 - 532)] - '0') + aetMFB1GTjO[(39 - 38)] - '0' < (822 - 809)))) {
        printf ("%d\n", B8cdvi2);
        printf ("%s", aetMFB1GTjO);
    }
    else {
        kDmxMv[(140 - 139)] = ((488 - 478) * (aetMFB1GTjO[(159 - 159)] - '0') + (944 - 943) * (aetMFB1GTjO[(293 - 292)] - '0')) % (596 - 583);
        c[(856 - 855)] = ((973 - 963) * (aetMFB1GTjO[(625 - 625)] - '0') + (208 - 207) * (aetMFB1GTjO[(425 - 424)] - '0')) / (651 - 638);
        for (i = (149 - 147), K1euAY5 = 2; i <= (360 - 260);) {
            if (aetMFB1GTjO[i] != '\0') {
                kDmxMv[K1euAY5] = ((636 - 626) * kDmxMv[K1euAY5 -(812 - 811)] + aetMFB1GTjO[i] - '0') % (698 - 685);
                c[K1euAY5] = (int) (((560 - 550) * kDmxMv[K1euAY5 -(975 - 974)] + aetMFB1GTjO[i] - '0') / 13);
                i = i + (914 - 913);
                K1euAY5 = K1euAY5 +(155 - 154);
            }
            else
                break;
        }
        if (c[(24 - 23)] != (741 - 741))
            printf ("%d", c[(908 - 907)]);
        {
            ngxTiP = 2;
            for (; ngxTiP <= K1euAY5 -(791 - 790);) {
                printf ("%d", c[ngxTiP]);
                ngxTiP++;
            }
        }
        printf ("%d", kDmxMv[K1euAY5 -1]);
    }
    getchar ();
    getchar ();
}

