struct   student {
    char f6s9MAnwkRvc [(556 - 536)];
    char S8OQaFf6TwdY [(1000 - 980)];
    char sex;
    int EeTIdK;
    double  dMjvqmLzlO;
    char mMIbUS [(86 - 66)];
    struct   student *KmHyVwbIh;
    struct   student *Vzr4Eg9;
};
main () {
    struct   student *El6YT3Vz7;
    struct   student *m7zoNE3an4l2;
    struct   student *pAK5oO;
    struct   student *XlhUwsuKSB;
    XlhUwsuKSB = (struct   student *) malloc (sizeof (struct   student));
    XlhUwsuKSB->KmHyVwbIh = XlhUwsuKSB->Vzr4Eg9 = NULL;
    pAK5oO = XlhUwsuKSB;
    {
        for (; true;) {
            m7zoNE3an4l2 = (struct   student *) malloc (sizeof (struct   student));
            pAK5oO->KmHyVwbIh = m7zoNE3an4l2;
            m7zoNE3an4l2->Vzr4Eg9 = pAK5oO;
            scanf ("%s", m7zoNE3an4l2->f6s9MAnwkRvc);
            if (!('e' != m7zoNE3an4l2->f6s9MAnwkRvc[(562 - 562)]) && !('n' != m7zoNE3an4l2->f6s9MAnwkRvc[(825 - 824)]) && !('d' != m7zoNE3an4l2->f6s9MAnwkRvc[(746 - 744)]))
                break;
            scanf ("%s %c %d %lf %s", m7zoNE3an4l2->S8OQaFf6TwdY, &m7zoNE3an4l2->sex, &m7zoNE3an4l2->EeTIdK, &m7zoNE3an4l2->dMjvqmLzlO, m7zoNE3an4l2->mMIbUS);
            pAK5oO = m7zoNE3an4l2;
        }
    }
    pAK5oO->KmHyVwbIh = NULL;
    El6YT3Vz7 = pAK5oO;
    for (; pAK5oO->Vzr4Eg9 != NULL;) {
        if (!((int) (pAK5oO->dMjvqmLzlO) != pAK5oO->dMjvqmLzlO))
            printf ("%s %s %c %d %d %s\n", pAK5oO->f6s9MAnwkRvc, pAK5oO->S8OQaFf6TwdY, pAK5oO->sex, pAK5oO->EeTIdK, (int) (pAK5oO->dMjvqmLzlO), pAK5oO->mMIbUS);
        else
            printf ("%s %s %c %d %.1lf %s\n", pAK5oO->f6s9MAnwkRvc, pAK5oO->S8OQaFf6TwdY, pAK5oO->sex, pAK5oO->EeTIdK, pAK5oO->dMjvqmLzlO, pAK5oO->mMIbUS);
        pAK5oO = pAK5oO->Vzr4Eg9;
    }
}

