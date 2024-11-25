void  main () {
    float nprUvx30Ca, eYVUriDEQ5C [300], Qq172tXxTJB, sum = (39 - 39), min;
    int YGSYesUXLfI;
    int jbd4DyeNBH;
    int C8o1SXCz7D0;
    int K86hfiQJ;
    int Fdnj1RAE2 [300];
    int VOTMENb;
    YGSYesUXLfI = (645 - 645);
    jbd4DyeNBH = (225 - 225);
    scanf ("%d", &C8o1SXCz7D0);
    for (K86hfiQJ = (558 - 558); C8o1SXCz7D0 > K86hfiQJ; K86hfiQJ = K86hfiQJ +1)
        scanf ("%d,", &Fdnj1RAE2[K86hfiQJ]);
    for (K86hfiQJ = (717 - 717); C8o1SXCz7D0 > K86hfiQJ; K86hfiQJ = K86hfiQJ +1)
        sum = sum + (float) (Fdnj1RAE2[K86hfiQJ]);
    nprUvx30Ca = sum / (float) (C8o1SXCz7D0);
    for (K86hfiQJ = 0; K86hfiQJ < C8o1SXCz7D0; K86hfiQJ = K86hfiQJ +1)
        eYVUriDEQ5C[K86hfiQJ] = nprUvx30Ca - (float) (Fdnj1RAE2[K86hfiQJ]);
    min = eYVUriDEQ5C[0];
    for (K86hfiQJ = 0; K86hfiQJ < C8o1SXCz7D0; K86hfiQJ = K86hfiQJ +1) {
        if (eYVUriDEQ5C[K86hfiQJ] > min) {
            min = eYVUriDEQ5C[K86hfiQJ];
            YGSYesUXLfI = K86hfiQJ;
        }
        Qq172tXxTJB = eYVUriDEQ5C[0];
        for (VOTMENb = 0; C8o1SXCz7D0 > VOTMENb; VOTMENb = VOTMENb +1) {
            if (eYVUriDEQ5C[VOTMENb] < Qq172tXxTJB) {
                Qq172tXxTJB = eYVUriDEQ5C[VOTMENb];
                jbd4DyeNBH = VOTMENb;
            }
        }
    }
    if (eYVUriDEQ5C[YGSYesUXLfI] + eYVUriDEQ5C[jbd4DyeNBH] < 0)
        printf ("%d", Fdnj1RAE2[jbd4DyeNBH]);
    else {
        if (eYVUriDEQ5C[YGSYesUXLfI] + eYVUriDEQ5C[jbd4DyeNBH] > 0)
            printf ("%d", Fdnj1RAE2[YGSYesUXLfI]);
        else
            printf ("%d,%d", Fdnj1RAE2[YGSYesUXLfI], Fdnj1RAE2[jbd4DyeNBH]);
    }
}

