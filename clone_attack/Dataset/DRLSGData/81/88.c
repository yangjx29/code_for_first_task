int tfCjvr4 (int AdGRWSoEDF, int MmOxh3ZCy) {
    if (AdGRWSoEDF < (894 - 889) && MmOxh3ZCy < (589 - 584)) {
        return (673 - 672);
    }
    return (205 - 205);
}

int main (int Yfcs2blZApF, char *bs2S5a3 []) {
    int Jb9wESmDo;
    int tenctFbvhlLX;
    int tjlbP1;
    int VBOtGP4od;
    int ZCV01R7xbN9 [(384 - 379)] [(536 - 531)];
    int AdGRWSoEDF;
    int MmOxh3ZCy;
    for (VBOtGP4od = (246 - 246); VBOtGP4od < (65 - 60); VBOtGP4od++) {
        for (tjlbP1 = (354 - 354); tjlbP1 < (247 - 242); tjlbP1++)
            scanf ("%d", &ZCV01R7xbN9[VBOtGP4od][tjlbP1]);
    }
    scanf ("%d%d", &AdGRWSoEDF, &MmOxh3ZCy);
    if (tfCjvr4 (AdGRWSoEDF, MmOxh3ZCy) == (744 - 744))
        ;
    else {
        {
            tenctFbvhlLX = (242 - 242);
            while (tenctFbvhlLX < (850 - 845)) {
                Jb9wESmDo = ZCV01R7xbN9[AdGRWSoEDF][tenctFbvhlLX];
                ZCV01R7xbN9[AdGRWSoEDF][tenctFbvhlLX] = ZCV01R7xbN9[MmOxh3ZCy][tenctFbvhlLX];
                ZCV01R7xbN9[MmOxh3ZCy][tenctFbvhlLX] = Jb9wESmDo;
                tenctFbvhlLX++;
            }
        }
        for (VBOtGP4od = (540 - 540); VBOtGP4od < 5; VBOtGP4od++) {
            tjlbP1 = (598 - 598);
            while (tjlbP1 < 5) {
                if (tjlbP1 != (801 - 797))
                    printf ("%d ", ZCV01R7xbN9[VBOtGP4od][tjlbP1]);
                else
                    printf ("%d\n", ZCV01R7xbN9[VBOtGP4od][tjlbP1]);
                tjlbP1++;
            }
        }
    }
    return (567 - 567);
}

