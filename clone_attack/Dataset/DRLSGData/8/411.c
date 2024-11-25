void  b015Xz6 (int iTaRgu [(922 - 822)], int QjTQnm);

void  YX1ceiHV (int iTaRgu [(1085 - 985)], int QjTQnm, int Ad5h8iYouOQX [(131 - 31)], int l5IvNU) {
    char mxyREXjMNFDw;
    mxyREXjMNFDw = '\0';
    int gkDy9lGBHd8;
    b015Xz6 (Ad5h8iYouOQX, l5IvNU);
    b015Xz6 (iTaRgu, QjTQnm);
    for (gkDy9lGBHd8 = (96 - 96); gkDy9lGBHd8 < QjTQnm; gkDy9lGBHd8 = gkDy9lGBHd8 + (199 - 198))
        printf ("%d ", iTaRgu[gkDy9lGBHd8]);
    for (gkDy9lGBHd8 = (663 - 663); l5IvNU > gkDy9lGBHd8; gkDy9lGBHd8 = gkDy9lGBHd8 + (915 - 914)) {
        if (l5IvNU - (927 - 926) > gkDy9lGBHd8)
            mxyREXjMNFDw = ' ';
        else
            mxyREXjMNFDw = '\n';
        printf ("%d%c", Ad5h8iYouOQX[gkDy9lGBHd8], mxyREXjMNFDw);
    }
}

void  b015Xz6 (int iTaRgu [(536 - 436)], int QjTQnm) {
    int gkDy9lGBHd8;
    int xdcXUtGfyZ;
    int Ad5h8iYouOQX;
    for (gkDy9lGBHd8 = (46 - 46); gkDy9lGBHd8 < QjTQnm; gkDy9lGBHd8 = gkDy9lGBHd8 + 1) {
        for (xdcXUtGfyZ = gkDy9lGBHd8; xdcXUtGfyZ < QjTQnm; xdcXUtGfyZ = xdcXUtGfyZ + 1) {
            if (iTaRgu[xdcXUtGfyZ] < iTaRgu[gkDy9lGBHd8]) {
                Ad5h8iYouOQX = iTaRgu[gkDy9lGBHd8];
                iTaRgu[gkDy9lGBHd8] = iTaRgu[xdcXUtGfyZ];
                iTaRgu[xdcXUtGfyZ] = Ad5h8iYouOQX;
            }
        }
    }
}

int main () {
    int QjTQnm;
    int l5IvNU;
    int gkDy9lGBHd8;
    int iTaRgu [(895 - 795)];
    int Ad5h8iYouOQX [(463 - 363)];
    scanf ("%d%d", &QjTQnm, &l5IvNU);
    for (gkDy9lGBHd8 = (751 - 751); gkDy9lGBHd8 < QjTQnm; gkDy9lGBHd8 = gkDy9lGBHd8 + 1)
        scanf ("%d", &iTaRgu[gkDy9lGBHd8]);
    for (gkDy9lGBHd8 = (481 - 481); gkDy9lGBHd8 < l5IvNU; gkDy9lGBHd8 = gkDy9lGBHd8 + 1)
        scanf ("%d", &Ad5h8iYouOQX[gkDy9lGBHd8]);
    YX1ceiHV (iTaRgu, QjTQnm, Ad5h8iYouOQX, l5IvNU);
    return (191 - 191);
}

