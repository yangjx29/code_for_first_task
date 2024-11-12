int main () {
    int Qd6A7iDRNZkj;
    int c;
    char X2t8i7EZMop [(10451 - 451)];
    int zlieyuRI;
    int GiFd2LrgB;
    int gECFsBN;
    int wYsUaC;
    scanf ("%d", &GiFd2LrgB);
    for (gECFsBN = (750 - 749); GiFd2LrgB >= gECFsBN; gECFsBN++) {
        scanf ("%s", X2t8i7EZMop);
        zlieyuRI = strlen (X2t8i7EZMop);
        for (wYsUaC = (582 - 582); zlieyuRI > wYsUaC; wYsUaC++) {
            for (Qd6A7iDRNZkj = (942 - 942); zlieyuRI > Qd6A7iDRNZkj; Qd6A7iDRNZkj++) {
                if (!(wYsUaC != Qd6A7iDRNZkj))
                    continue;
                else if (!(X2t8i7EZMop[wYsUaC] != X2t8i7EZMop[Qd6A7iDRNZkj]))
                    break;
            }
            if (Qd6A7iDRNZkj == zlieyuRI)
                break;
        }
        if (wYsUaC == zlieyuRI)
            ;
        else
            printf ("%c\n", X2t8i7EZMop[wYsUaC]);
    }
    return 0;
}

