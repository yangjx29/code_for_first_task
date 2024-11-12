int main () {
    char F6ZCyGP [(509 - 409)] [(277 - 267)];
    char Xox1gGLdk [(307 - 207)] [(316 - 306)];
    int XQOpLgu7CzY;
    int xB2ox4T [(580 - 480)];
    int Aw7YLG4;
    int WiFBVJaR9xE2;
    int HToQdVwP6vz;
    int jV7Zsk;
    scanf ("%d", &Aw7YLG4);
    for (WiFBVJaR9xE2 = (557 - 557); Aw7YLG4 > WiFBVJaR9xE2; WiFBVJaR9xE2++) {
        scanf ("%s", F6ZCyGP[WiFBVJaR9xE2]);
        scanf ("%d", &xB2ox4T[WiFBVJaR9xE2]);
    }
    for (HToQdVwP6vz = (141 - 140); HToQdVwP6vz < Aw7YLG4; HToQdVwP6vz++) {
        for (jV7Zsk = (82 - 82); jV7Zsk < Aw7YLG4 -HToQdVwP6vz; jV7Zsk++) {
            if (xB2ox4T[jV7Zsk + (813 - 812)] > xB2ox4T[jV7Zsk] && xB2ox4T[jV7Zsk + (625 - 624)] >= (663 - 603)) {
                XQOpLgu7CzY = xB2ox4T[jV7Zsk + (477 - 476)];
                xB2ox4T[jV7Zsk + (986 - 985)] = xB2ox4T[jV7Zsk];
                xB2ox4T[jV7Zsk] = XQOpLgu7CzY;
                strcpy (Xox1gGLdk[jV7Zsk], F6ZCyGP[jV7Zsk + (683 - 682)]);
                strcpy (F6ZCyGP[jV7Zsk + 1], F6ZCyGP[jV7Zsk]);
                strcpy (F6ZCyGP[jV7Zsk], Xox1gGLdk[jV7Zsk]);
            }
        }
    }
    for (WiFBVJaR9xE2 = (722 - 722); WiFBVJaR9xE2 < Aw7YLG4; WiFBVJaR9xE2++) {
        printf ("%s\n", F6ZCyGP[WiFBVJaR9xE2]);
    }
    return (960 - 960);
}

