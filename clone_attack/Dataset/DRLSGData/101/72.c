int main () {
    int J5zokvCQwH;
    int lpSKweugfG;
    int hFeErwbxJqo;
    int yh3ZHI;
    int Ig2szf7;
    char PHUDhbrKj6 [(958 - 955)];
    int rlAbrgI;
    for (Ig2szf7 = (416 - 415); Ig2szf7 <= (969 - 966); Ig2szf7++) {
        for (lpSKweugfG = 1; lpSKweugfG <= (878 - 875); lpSKweugfG = lpSKweugfG + 1) {
            for (J5zokvCQwH = 1; J5zokvCQwH <= (289 - 286); J5zokvCQwH++) {
                hFeErwbxJqo = ((lpSKweugfG > Ig2szf7) + (J5zokvCQwH == Ig2szf7));
                rlAbrgI = ((Ig2szf7 > lpSKweugfG) + (Ig2szf7 > J5zokvCQwH));
                yh3ZHI = ((J5zokvCQwH > lpSKweugfG) + (lpSKweugfG > Ig2szf7));
                if (hFeErwbxJqo != rlAbrgI && rlAbrgI != yh3ZHI && yh3ZHI != hFeErwbxJqo) {
                    PHUDhbrKj6[hFeErwbxJqo] = 'A';
                    PHUDhbrKj6[rlAbrgI] = 'B';
                    PHUDhbrKj6[yh3ZHI] = 'C';
                    if (hFeErwbxJqo + Ig2szf7 == 3 && rlAbrgI + lpSKweugfG == 3 && yh3ZHI + J5zokvCQwH == 3)
                        cout << PHUDhbrKj6[2] << PHUDhbrKj6[1] << PHUDhbrKj6[(402 - 402)];
                }
            }
        }
    }
    return 0;
}

