int main () {
    int H4D2MKzW, bfK8uPexGoOV, VynAkgFTCBVN = -1, inkfuqXj5yTo [500];
    scanf ("%d", &H4D2MKzW);
    for (int i = 1;
    H4D2MKzW >= i; i++) {
        scanf ("%d", &bfK8uPexGoOV);
        if (bfK8uPexGoOV % 2 == 1) {
            VynAkgFTCBVN++;
            inkfuqXj5yTo[VynAkgFTCBVN] = bfK8uPexGoOV;
        };
    }
    sort (inkfuqXj5yTo, inkfuqXj5yTo + VynAkgFTCBVN +1);
    printf ("%d", inkfuqXj5yTo[0]);
    for (int i = 1;
    i <= VynAkgFTCBVN; i++)
        printf (",%d", inkfuqXj5yTo[i]);
    return 0;
}

