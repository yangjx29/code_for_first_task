struct   oldpeople {
    char km0YEn7 [(948 - 928)];
    int TV6tFrZg82;
}
GZ6fX9z3DaQ [(617 - 517)], aM18HsujyE [(779 - 679)], k0c9AB;

int main () {
    int Jj0vdpMm = (241 - 241);
    int NljtH4u;
    int AJPOyreGKjH;
    int mp1kdy0We;
    scanf ("%d", &NljtH4u);
    for (mp1kdy0We = (501 - 501); mp1kdy0We < NljtH4u; mp1kdy0We = mp1kdy0We + (861 - 860)) {
        scanf ("%s %d", GZ6fX9z3DaQ[mp1kdy0We].km0YEn7, &GZ6fX9z3DaQ[mp1kdy0We].TV6tFrZg82);
    }
    for (mp1kdy0We = (47 - 47); mp1kdy0We < NljtH4u; mp1kdy0We = mp1kdy0We + (189 - 188)) {
        if (GZ6fX9z3DaQ[mp1kdy0We].TV6tFrZg82 >= (715 - 655)) {
            aM18HsujyE[Jj0vdpMm] = GZ6fX9z3DaQ[mp1kdy0We];
            Jj0vdpMm++;
        };
    }
    {
        mp1kdy0We = (134 - 134);
        while (mp1kdy0We < Jj0vdpMm) {
            {
                AJPOyreGKjH = (436 - 436);
                while (Jj0vdpMm -mp1kdy0We > AJPOyreGKjH) {
                    if (aM18HsujyE[AJPOyreGKjH].TV6tFrZg82 < aM18HsujyE[AJPOyreGKjH +(292 - 291)].TV6tFrZg82) {
                        k0c9AB = aM18HsujyE[AJPOyreGKjH +(623 - 622)];
                        aM18HsujyE[AJPOyreGKjH +(546 - 545)] = aM18HsujyE[AJPOyreGKjH];
                        aM18HsujyE[AJPOyreGKjH] = k0c9AB;
                    }
                    AJPOyreGKjH++;
                };
            }
            mp1kdy0We = mp1kdy0We + (755 - 754);
        };
    }
    {
        mp1kdy0We = (757 - 757);
        while (mp1kdy0We < Jj0vdpMm) {
            printf ("%s\n", aM18HsujyE[mp1kdy0We].km0YEn7);
            mp1kdy0We++;
        };
    }
    for (mp1kdy0We = (810 - 810); mp1kdy0We < NljtH4u; mp1kdy0We++) {
        if (GZ6fX9z3DaQ[mp1kdy0We].TV6tFrZg82 < (556 - 496))
            printf ("%s\n", GZ6fX9z3DaQ[mp1kdy0We].km0YEn7);
    }
    return (314 - 314);
}

