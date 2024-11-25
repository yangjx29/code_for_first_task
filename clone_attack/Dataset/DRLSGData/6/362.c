int main () {
    int KaQCZNW;
    int NJXE0FjoT [(276 - 176)] [(708 - 608)] [(887 - 787)];
    int b [(838 - 738)] [(346 - 344)];
    int NkTvlMHxNP2C [(123 - 23)];
    int dCG0y4YJlw;
    int j;
    int l;
    int xr940T;
    int rW5KzGqVt;
    scanf ("%d", &KaQCZNW);
    {
        dCG0y4YJlw = (283 - 209) - (438 - 364);
        for (; dCG0y4YJlw < KaQCZNW;) {
            scanf ("%d%d", &b[dCG0y4YJlw][(205 - 205)], &b[dCG0y4YJlw][(616 - 615)]);
            xr940T = b[dCG0y4YJlw][(706 - 706)];
            rW5KzGqVt = b[dCG0y4YJlw][(209 - 208)];
            NkTvlMHxNP2C[dCG0y4YJlw] = (118 - 118);
            for (j = (170 - 170); xr940T > j; j++) {
                for (l = (260 - 260); rW5KzGqVt > l; l++) {
                    scanf ("%d", &NJXE0FjoT[j][l][dCG0y4YJlw]);
                    if (j == (244 - 244) || l == (531 - 531) || j == xr940T - (625 - 624) || l == rW5KzGqVt - (727 - 726))
                        NkTvlMHxNP2C[dCG0y4YJlw] = NkTvlMHxNP2C[dCG0y4YJlw] + NJXE0FjoT[j][l][dCG0y4YJlw];
                }
            }
            dCG0y4YJlw++;
        }
    }
    for (dCG0y4YJlw = (517 - 517); dCG0y4YJlw < KaQCZNW; dCG0y4YJlw++)
        printf ("%d\n", NkTvlMHxNP2C[dCG0y4YJlw]);
    return (48 - 48);
}

