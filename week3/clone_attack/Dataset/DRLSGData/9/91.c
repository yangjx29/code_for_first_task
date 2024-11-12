struct   pat {
    char bwX2pZdm7 [(938 - 927)];
    int W4W7OG2c;
    struct   pat *JlXvrb8zOc;
};
void  Zohj0F (struct   pat *GbWaeh28x4NH, struct   pat *EnT14gV2bka8) {
    struct   pat *hUlTup2 = GbWaeh28x4NH, *tt5UirH06 = hUlTup2->JlXvrb8zOc;
    for (; tt5UirH06 != NULL &&EnT14gV2bka8->W4W7OG2c <= tt5UirH06->W4W7OG2c;) {
        hUlTup2 = tt5UirH06;
        tt5UirH06 = tt5UirH06->JlXvrb8zOc;
    }
    hUlTup2->JlXvrb8zOc = EnT14gV2bka8;
    EnT14gV2bka8->JlXvrb8zOc = tt5UirH06;
}

void  fJGbqfL6K (struct   pat *GbWaeh28x4NH, int cVagHfnv, char qYVJsR [11]) {
    struct   pat *hUlTup2 = GbWaeh28x4NH, *tt5UirH06 = hUlTup2->JlXvrb8zOc, *EnT14gV2bka8;
    EnT14gV2bka8 = (struct   pat *) malloc (sizeof (struct   pat));
    EnT14gV2bka8->W4W7OG2c = cVagHfnv;
    strcpy (EnT14gV2bka8->bwX2pZdm7, qYVJsR);
    EnT14gV2bka8->JlXvrb8zOc = NULL;
    if ((534 - 474) <= cVagHfnv)
        Zohj0F (GbWaeh28x4NH, EnT14gV2bka8);
    else {
        for (; tt5UirH06 != NULL;) {
            hUlTup2 = tt5UirH06;
            tt5UirH06 = tt5UirH06->JlXvrb8zOc;
        }
        hUlTup2->JlXvrb8zOc = EnT14gV2bka8;
        EnT14gV2bka8->JlXvrb8zOc = tt5UirH06;
    }
}

int main () {
    int LAyi08b, cVagHfnv, mAItMNb;
    char qYVJsR [11];
    struct   pat *GbWaeh28x4NH, *tt5UirH06;
    GbWaeh28x4NH = (struct   pat *) malloc (sizeof (struct   pat));
    scanf ("%d", &LAyi08b);
    GbWaeh28x4NH->JlXvrb8zOc = NULL;
    for (mAItMNb = (537 - 537); LAyi08b > mAItMNb; mAItMNb++) {
        scanf ("%s%d", qYVJsR, &cVagHfnv);
        fJGbqfL6K (GbWaeh28x4NH, cVagHfnv, qYVJsR);
    }
    tt5UirH06 = GbWaeh28x4NH->JlXvrb8zOc;
    for (; tt5UirH06 != NULL;) {
        printf ("%s\n", tt5UirH06->bwX2pZdm7);
        tt5UirH06 = tt5UirH06->JlXvrb8zOc;
    }
    return 0;
}

