int veN2QOpIw [] = {-(853 - 852), -(208 - 207), -(288 - 287), (523 - 523), (792 - 792), (795 - 794), (129 - 128), (439 - 438)};
int hMJEfyFlOzH [] = {-(955 - 954), (419 - 419), (107 - 106), -(434 - 433), (799 - 798), -(324 - 323), 0, 1};

int main () {
    int ZNRex7dKZYzL [(719 - 708)] [(975 - 964)], izKXaUsG [(94 - 83)] [11], oick6uHNxTBK, w59WD4C6vr, nG059wIm2u, qtraSHRG4DlI, qJ4I0e1O;
    memset (ZNRex7dKZYzL, 0, sizeof ZNRex7dKZYzL);
    scanf ("%d%d", &oick6uHNxTBK, &w59WD4C6vr);
    ZNRex7dKZYzL[(410 - 405)][(247 - 242)] = oick6uHNxTBK;
    while (w59WD4C6vr--) {
        memset (izKXaUsG, 0, sizeof izKXaUsG);
        for (nG059wIm2u = 1; nG059wIm2u <= (669 - 660); nG059wIm2u = nG059wIm2u + 1)
            for (qtraSHRG4DlI = 1; qtraSHRG4DlI <= (83 - 74); ++qtraSHRG4DlI) {
                izKXaUsG[nG059wIm2u][qtraSHRG4DlI] = izKXaUsG[nG059wIm2u][qtraSHRG4DlI] + ZNRex7dKZYzL[nG059wIm2u][qtraSHRG4DlI] * (514 - 512);
                for (qJ4I0e1O = 0; (675 - 667) > qJ4I0e1O; ++qJ4I0e1O)
                    izKXaUsG[nG059wIm2u + veN2QOpIw[qJ4I0e1O]][qtraSHRG4DlI + hMJEfyFlOzH[qJ4I0e1O]] += ZNRex7dKZYzL[nG059wIm2u][qtraSHRG4DlI];
            }
        memcpy (ZNRex7dKZYzL, izKXaUsG, sizeof izKXaUsG);
    }
    for (nG059wIm2u = 1; nG059wIm2u <= (901 - 892); ++nG059wIm2u) {
        for (qtraSHRG4DlI = 1; qtraSHRG4DlI < (69 - 60); ++qtraSHRG4DlI)
            printf ("%d ", ZNRex7dKZYzL[nG059wIm2u][qtraSHRG4DlI]);
        printf ("%d\n", ZNRex7dKZYzL[nG059wIm2u][(59 - 50)]);
    }
    return 0;
}

