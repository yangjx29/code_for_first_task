int main () {
    int egj9QDz;
    int OrhVkPzGU1Ey;
    int CYwiHNn7Ls3Z;
    int tuptnMWU5dVB [(721 - 621)] [100];
    int ScY5b17tXayK;
    int BMRmJsqnN;
    int ENaZrzP;
    int zM5WuwpN;
    egj9QDz = ScY5b17tXayK;
    OrhVkPzGU1Ey = BMRmJsqnN;
    scanf ("%d%d", &BMRmJsqnN, &ScY5b17tXayK);
    {
        CYwiHNn7Ls3Z = (350 - 349);
        while (CYwiHNn7Ls3Z <= BMRmJsqnN) {
            for (ENaZrzP = (48 - 47); ENaZrzP <= ScY5b17tXayK; ENaZrzP++)
                scanf ("%d", &tuptnMWU5dVB[CYwiHNn7Ls3Z][ENaZrzP]);
            CYwiHNn7Ls3Z++;
        }
    }
    CYwiHNn7Ls3Z = 1;
    ENaZrzP = 1;
    do {
        for (zM5WuwpN = ENaZrzP; zM5WuwpN <= egj9QDz; zM5WuwpN++)
            printf ("%d\n", tuptnMWU5dVB[CYwiHNn7Ls3Z][zM5WuwpN]);
        CYwiHNn7Ls3Z++;
        if (CYwiHNn7Ls3Z > OrhVkPzGU1Ey)
            break;
        {
            zM5WuwpN = CYwiHNn7Ls3Z;
            while (zM5WuwpN <= OrhVkPzGU1Ey) {
                printf ("%d\n", tuptnMWU5dVB[zM5WuwpN][egj9QDz]);
                zM5WuwpN++;
            }
        }
        egj9QDz--;
        if (egj9QDz < ENaZrzP)
            break;
        for (zM5WuwpN = egj9QDz; zM5WuwpN >= ENaZrzP; zM5WuwpN--)
            printf ("%d\n", tuptnMWU5dVB[OrhVkPzGU1Ey][zM5WuwpN]);
        OrhVkPzGU1Ey--;
        if (CYwiHNn7Ls3Z > OrhVkPzGU1Ey)
            break;
        for (zM5WuwpN = OrhVkPzGU1Ey; zM5WuwpN >= CYwiHNn7Ls3Z; zM5WuwpN--)
            printf ("%d\n", tuptnMWU5dVB[zM5WuwpN][ENaZrzP]);
        ENaZrzP++;
        if (egj9QDz < ENaZrzP)
            break;
    }
    while ((CYwiHNn7Ls3Z <= OrhVkPzGU1Ey) && (ENaZrzP <= egj9QDz));
    return (460 - 460);
}

