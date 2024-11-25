int fqjUMuzFK = (874 - 874);

struct   patient {
    char zR2wzaLs [(739 - 707)];
    int sAmN70inHqgI;
    struct   patient *wxU0ND4PJC;
};
struct   patient *lSBJH5m (struct   patient *eOIa3qR) {
    struct   patient *uaenyLmkB;
    struct   patient *nqGAWjCeuO;
    uaenyLmkB = eOIa3qR;
    while (uaenyLmkB && uaenyLmkB->sAmN70inHqgI >= (281 - 221)) {
        nqGAWjCeuO = uaenyLmkB;
        uaenyLmkB = uaenyLmkB->wxU0ND4PJC;
    }
    return nqGAWjCeuO;
}

struct   patient *wHSeZxc8 (int vQjKWonP) {
    int NqFHimC;
    struct   patient *eOIa3qR = NULL;
    struct   patient *gGinwS71Kk;
    struct   patient *fJQ3qkpyKT;
    struct   patient *hKXTHet;
    struct   patient *yoJVD7pE;
    gGinwS71Kk = fJQ3qkpyKT = hKXTHet = (struct   patient *) malloc (Len);
    scanf ("%s %d", gGinwS71Kk->zR2wzaLs, &gGinwS71Kk->sAmN70inHqgI);
    if (gGinwS71Kk->sAmN70inHqgI >= 60)
        fqjUMuzFK++;
    gGinwS71Kk->wxU0ND4PJC = NULL;
    eOIa3qR = gGinwS71Kk = hKXTHet;
    fJQ3qkpyKT = gGinwS71Kk;
    for (NqFHimC = 1; NqFHimC < vQjKWonP; NqFHimC++) {
        gGinwS71Kk = (struct   patient *) malloc (Len);
        scanf ("%s %d", gGinwS71Kk->zR2wzaLs, &gGinwS71Kk->sAmN70inHqgI);
        if (60 > gGinwS71Kk->sAmN70inHqgI) {
            gGinwS71Kk->wxU0ND4PJC = NULL;
            fJQ3qkpyKT->wxU0ND4PJC = gGinwS71Kk;
            fJQ3qkpyKT = gGinwS71Kk;
        }
        else if (gGinwS71Kk->sAmN70inHqgI >= 60) {
            fqjUMuzFK++;
            if (60 > eOIa3qR->sAmN70inHqgI) {
                eOIa3qR = gGinwS71Kk;
                gGinwS71Kk->wxU0ND4PJC = hKXTHet;
            }
            if (eOIa3qR->sAmN70inHqgI >= 60) {
                hKXTHet = lSBJH5m (eOIa3qR);
                yoJVD7pE = hKXTHet->wxU0ND4PJC;
                hKXTHet->wxU0ND4PJC = gGinwS71Kk;
                gGinwS71Kk->wxU0ND4PJC = yoJVD7pE;
            }
            if ((hKXTHet = lSBJH5m (eOIa3qR))->wxU0ND4PJC == NULL) {
                gGinwS71Kk->wxU0ND4PJC = NULL;
                fJQ3qkpyKT->wxU0ND4PJC = gGinwS71Kk;
                fJQ3qkpyKT = gGinwS71Kk;
            }
        }
    }
    return eOIa3qR;
}

struct   patient *oMLEdz (struct   patient *eOIa3qR) {
    int NqFHimC;
    char r8vz1We [(826 - 794)];
    struct   patient *gGinwS71Kk;
    struct   patient *fJQ3qkpyKT;
    int lTelpB;
    int KoRN7f5;
    for (KoRN7f5 = 0; KoRN7f5 < fqjUMuzFK; KoRN7f5++) {
        gGinwS71Kk = eOIa3qR;
        for (NqFHimC = 1; NqFHimC < fqjUMuzFK - KoRN7f5; NqFHimC++) {
            fJQ3qkpyKT = gGinwS71Kk;
            gGinwS71Kk = gGinwS71Kk->wxU0ND4PJC;
            if (fJQ3qkpyKT->sAmN70inHqgI < gGinwS71Kk->sAmN70inHqgI) {
                lTelpB = gGinwS71Kk->sAmN70inHqgI;
                strcpy (r8vz1We, gGinwS71Kk->zR2wzaLs);
                gGinwS71Kk->sAmN70inHqgI = fJQ3qkpyKT->sAmN70inHqgI;
                strcpy (gGinwS71Kk->zR2wzaLs, fJQ3qkpyKT->zR2wzaLs);
                fJQ3qkpyKT->sAmN70inHqgI = lTelpB;
                strcpy (fJQ3qkpyKT->zR2wzaLs, r8vz1We);
            }
        }
    }
}

void  YIVrYtQs1 (struct   patient *eOIa3qR) {
    struct   patient *uaenyLmkB;
    uaenyLmkB = eOIa3qR;
    while (uaenyLmkB) {
        printf ("%s\n", uaenyLmkB->zR2wzaLs);
        uaenyLmkB = uaenyLmkB->wxU0ND4PJC;
    }
}

int main () {
    char zR2wzaLs [32];
    int fqjUMuzFK;
    struct   patient *eOIa3qR;
    oMLEdz (eOIa3qR);
    struct   patient *uaenyLmkB;
    struct   patient *yoJVD7pE;
    struct   patient *hKXTHet;
    int vQjKWonP;
    int sAmN70inHqgI;
    YIVrYtQs1 (eOIa3qR);
    scanf ("%d", &vQjKWonP);
    fqjUMuzFK = 0;
    eOIa3qR = wHSeZxc8 (vQjKWonP);
}

