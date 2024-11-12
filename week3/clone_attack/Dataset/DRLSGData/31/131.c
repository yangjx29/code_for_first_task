int main () {
    struct   student {
        char sT1XU536Sx [(152 - 143)];
        char HVkO7y0fm [(675 - 655)];
        char sex;
        int fmRZzjt;
        char tgSDMsRNuf6O [(536 - 528)];
        char BxorqGwykd [20];
        struct   student *next, *HKzOaivAMGZS;
    };
    struct   student *pz4GqJ, *unz3472SpCXy, *tail;
    pz4GqJ = (struct   student *) malloc (sizeof (struct   student));
    unz3472SpCXy = pz4GqJ;
    unz3472SpCXy->HKzOaivAMGZS = NULL;
    do {
        scanf ("%s", pz4GqJ->sT1XU536Sx);
        if (!('e' != pz4GqJ->sT1XU536Sx[0])) {
            pz4GqJ->next = NULL;
            tail = pz4GqJ->HKzOaivAMGZS;
        }
        else {
            scanf ("%s %c%d%s%s", pz4GqJ->HVkO7y0fm, &pz4GqJ->sex, &pz4GqJ->fmRZzjt, &pz4GqJ->tgSDMsRNuf6O, pz4GqJ->BxorqGwykd);
            pz4GqJ->next = (struct   student *) malloc (sizeof (struct   student));
            pz4GqJ->next->HKzOaivAMGZS = pz4GqJ;
        }
        pz4GqJ = pz4GqJ->next;
    }
    while (pz4GqJ != NULL);
    pz4GqJ = tail;
    while (pz4GqJ != NULL) {
        printf ("%s %s %c %d %s %s\n", pz4GqJ->sT1XU536Sx, pz4GqJ->HVkO7y0fm, pz4GqJ->sex, pz4GqJ->fmRZzjt, pz4GqJ->tgSDMsRNuf6O, pz4GqJ->BxorqGwykd);
        pz4GqJ = pz4GqJ->HKzOaivAMGZS;
    }
    return 0;
}

