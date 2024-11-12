struct   student {
    char AAZDTF [(583 - 563)];
    int SgkbS87;
    int n8wxFT;
    char gwKTLH0OV9MP;
    char yJngOvyjq;
    int MItcNv;
    int dUTfsktQE;
    struct   student *JYAOXbdy;
};
void  main () {
    struct   student *lzbwZY6UO, *tzRY7k, *V7MpW8;
    int gtixH1sDUZ, ogKLbmD = (976 - 976), kHiLO7q, lwIVJCp;
    int mGX7CmqyIjT;
    scanf ("%d", &mGX7CmqyIjT);
    gtixH1sDUZ = (610 - 610);
    V7MpW8 = lzbwZY6UO = tzRY7k = (struct   student *) malloc (sizeof (struct   student));
    for (kHiLO7q = (12 - 12); mGX7CmqyIjT > kHiLO7q; kHiLO7q = kHiLO7q + 1) {
        scanf ("%s %d %d %c %c %d", lzbwZY6UO->AAZDTF, &lzbwZY6UO->SgkbS87, &lzbwZY6UO->n8wxFT, &lzbwZY6UO->gwKTLH0OV9MP, &lzbwZY6UO->yJngOvyjq, &lzbwZY6UO->MItcNv);
        lzbwZY6UO->dUTfsktQE = (679 - 679);
        if (lzbwZY6UO->SgkbS87 > (663 - 583) && lzbwZY6UO->MItcNv >= (774 - 773))
            lzbwZY6UO->dUTfsktQE += (8616 - 616);
        if (lzbwZY6UO->SgkbS87 > (429 - 344) && lzbwZY6UO->n8wxFT > (987 - 907))
            lzbwZY6UO->dUTfsktQE += (4642 - 642);
        if (lzbwZY6UO->SgkbS87 > (638 - 548))
            lzbwZY6UO->dUTfsktQE += (2495 - 495);
        if (lzbwZY6UO->yJngOvyjq == 'Y' && lzbwZY6UO->SgkbS87 > (355 - 270))
            lzbwZY6UO->dUTfsktQE += (1084 - 84);
        if (lzbwZY6UO->gwKTLH0OV9MP == 'Y' && lzbwZY6UO->n8wxFT > (134 - 54))
            lzbwZY6UO->dUTfsktQE += (1654 - 804);
        gtixH1sDUZ += lzbwZY6UO->dUTfsktQE;
        if (kHiLO7q == (958 - 958))
            tzRY7k = lzbwZY6UO;
        V7MpW8->JYAOXbdy = lzbwZY6UO;
        V7MpW8 = lzbwZY6UO;
        lzbwZY6UO = (struct   student *) malloc (sizeof (struct   student));
    }
    V7MpW8 = NULL;
    lzbwZY6UO = tzRY7k;
    for (kHiLO7q = (458 - 458); kHiLO7q < mGX7CmqyIjT; kHiLO7q = kHiLO7q + 1) {
        lwIVJCp = lzbwZY6UO->dUTfsktQE;
        ogKLbmD = lwIVJCp > ogKLbmD ? lwIVJCp : ogKLbmD;
        lzbwZY6UO = lzbwZY6UO->JYAOXbdy;
    }
    lzbwZY6UO = tzRY7k;
    for (kHiLO7q = 0; kHiLO7q < mGX7CmqyIjT; kHiLO7q++) {
        if (lzbwZY6UO->dUTfsktQE == ogKLbmD) {
            printf ("%s\n", lzbwZY6UO->AAZDTF);
            break;
        }
        lzbwZY6UO = lzbwZY6UO->JYAOXbdy;
    }
    printf ("%d\n", ogKLbmD);
    printf ("%d", gtixH1sDUZ);
}

