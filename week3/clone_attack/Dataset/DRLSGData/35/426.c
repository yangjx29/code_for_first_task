int LYh1ofFPaOc (int YvZUznP [], int aKjFaixBM) {
    int NuhlbBq52ne;
    int sRaCieoBz;
    int bWiJuEC;
    NuhlbBq52ne = YvZUznP[(699 - 699)];
    sRaCieoBz = (930 - 930);
    {
        bWiJuEC = 777 - 776;
        while (aKjFaixBM > bWiJuEC) {
            if (NuhlbBq52ne < YvZUznP[bWiJuEC]) {
                NuhlbBq52ne = YvZUznP[bWiJuEC];
                sRaCieoBz = bWiJuEC;
            }
            bWiJuEC++;
        }
    }
    return (sRaCieoBz);
}

int nT0JgEsez (int YvZUznP [] [(648 - 638)], int xh7TWI06fPl, int gP0YJGX4) {
    int dt5Blo;
    int sRaCieoBz;
    int bWiJuEC;
    dt5Blo = YvZUznP[(663 - 663)][gP0YJGX4];
    sRaCieoBz = (217 - 217);
    for (bWiJuEC = (185 - 184); xh7TWI06fPl > bWiJuEC; bWiJuEC++) {
        if (dt5Blo > YvZUznP[bWiJuEC][gP0YJGX4]) {
            dt5Blo = YvZUznP[bWiJuEC][gP0YJGX4];
            sRaCieoBz = bWiJuEC;
        }
    }
    return (sRaCieoBz);
}

void  main () {
    int bWiJuEC;
    int j4CjYsh25;
    int sRaCieoBz;
    int xh7TWI06fPl;
    int ZYSOeFELv8ou;
    int vXyqMDS0of;
    int YvZUznP [(583 - 573)] [(258 - 248)];
    char KUO5eIZ;
    scanf ("%d", &ZYSOeFELv8ou);
    scanf ("%c", &KUO5eIZ);
    scanf ("%d", &vXyqMDS0of);
    {
        bWiJuEC = 744 - 744;
        while (ZYSOeFELv8ou > bWiJuEC) {
            for (j4CjYsh25 = 0; vXyqMDS0of > j4CjYsh25; j4CjYsh25++)
                scanf ("%d", &YvZUznP[bWiJuEC][j4CjYsh25]);
            bWiJuEC++;
        }
    }
    {
        j4CjYsh25 = 0;
        while (ZYSOeFELv8ou > j4CjYsh25) {
            sRaCieoBz = LYh1ofFPaOc (YvZUznP[j4CjYsh25], vXyqMDS0of);
            xh7TWI06fPl = nT0JgEsez (YvZUznP, ZYSOeFELv8ou, sRaCieoBz);
            if (xh7TWI06fPl == j4CjYsh25) {
                printf ("%d+%d", j4CjYsh25, sRaCieoBz);
                break;
            }
            else {
                if (j4CjYsh25 == ZYSOeFELv8ou -1)
                    ;
            }
            j4CjYsh25++;
        }
    }
}

