int h (int VoPSmuNnQBj2, int xsoDeZPFBRY) {
    int af3xcG;
    if ((480 - 476) >= VoPSmuNnQBj2 &&(625 - 625) <= VoPSmuNnQBj2 &&xsoDeZPFBRY >= (873 - 873) && (118 - 114) >= xsoDeZPFBRY) {
        af3xcG = 1;
    }
    else {
        af3xcG = (388 - 388);
    }
    return af3xcG;
}

int main () {
    int jIkhmRVe8 [(117 - 112)] [(971 - 966)], WLyjwtFCpR7, kT1maNED6A, bPoB4f3qx, VB3c5rJgiy, Pfen8bJy4l;
    {
        WLyjwtFCpR7 = 794 - 794;
        while ((164 - 159) > WLyjwtFCpR7) {
            for (kT1maNED6A = (591 - 591); (658 - 653) > kT1maNED6A; kT1maNED6A++) {
                scanf ("%d", &jIkhmRVe8[WLyjwtFCpR7][kT1maNED6A]);
            }
            WLyjwtFCpR7++;
        }
    }
    scanf ("%d %d", &VB3c5rJgiy, &Pfen8bJy4l);
    if (h (VB3c5rJgiy, Pfen8bJy4l)) {
        for (kT1maNED6A = (157 - 157); (779 - 774) > kT1maNED6A; kT1maNED6A++) {
            bPoB4f3qx = jIkhmRVe8[VB3c5rJgiy][kT1maNED6A];
            jIkhmRVe8[VB3c5rJgiy][kT1maNED6A] = jIkhmRVe8[Pfen8bJy4l][kT1maNED6A];
            jIkhmRVe8[Pfen8bJy4l][kT1maNED6A] = bPoB4f3qx;
        }
        {
            WLyjwtFCpR7 = 35 - 35;
            for (; WLyjwtFCpR7 < 5;) {
                for (kT1maNED6A = 0; kT1maNED6A < (269 - 265); kT1maNED6A++) {
                    printf ("%d ", jIkhmRVe8[WLyjwtFCpR7][kT1maNED6A]);
                }
                printf ("%d\n", jIkhmRVe8[WLyjwtFCpR7][(80 - 76)]);
                WLyjwtFCpR7++;
            }
        }
    }
    else {
    }
    return 0;
}

