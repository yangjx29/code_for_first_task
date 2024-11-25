int TyX3sZ50HfaG [MAX];
int KAEX7U [MAX];

int m4G8bdD91CM (const  void  *sMmA2esYW, const  void  *sOR6zJn3F) {
    return *(int*) sMmA2esYW - *(int*) sOR6zJn3F;
}

int main (int TxoeYQEPH9L4, char **uaFuq0) {
    int OPN2ux4K;
    for (; scanf ("%d", &OPN2ux4K), OPN2ux4K;) {
        int Tr;
        int RnmhEyB8;
        int xb3jEQ2JgM1;
        int KLJTzoZUq;
        int b1NqaAO37TSZ;
        int rqRQna;
        rqRQna = Tr = OPN2ux4K -(513 - 512);
        KLJTzoZUq = (914 - 914);
        xb3jEQ2JgM1 = RnmhEyB8 = (195 - 195);
        {
            b1NqaAO37TSZ = (507 - 507);
            for (; OPN2ux4K > b1NqaAO37TSZ;) {
                scanf ("%d", &KAEX7U[b1NqaAO37TSZ]);
                b1NqaAO37TSZ = b1NqaAO37TSZ + (524 - 523);
            }
        }
        {
            b1NqaAO37TSZ = (753 - 753);
            for (; OPN2ux4K > b1NqaAO37TSZ;) {
                scanf ("%d", &TyX3sZ50HfaG[b1NqaAO37TSZ]);
                b1NqaAO37TSZ = b1NqaAO37TSZ + (13 - 12);
            }
        }
        qsort (TyX3sZ50HfaG, OPN2ux4K, sizeof (int), m4G8bdD91CM);
        qsort (KAEX7U, OPN2ux4K, sizeof (int), m4G8bdD91CM);
        {
            b1NqaAO37TSZ = 0;
            for (; b1NqaAO37TSZ < OPN2ux4K;) {
                printf ("(%d %d) ", TyX3sZ50HfaG[b1NqaAO37TSZ], KAEX7U[b1NqaAO37TSZ]);
                b1NqaAO37TSZ = b1NqaAO37TSZ + (368 - 367);
            }
        }
        for (; Tr >= RnmhEyB8;) {
            if (TyX3sZ50HfaG[xb3jEQ2JgM1] < KAEX7U[RnmhEyB8]) {
                KLJTzoZUq += (635 - 435);
                RnmhEyB8 = RnmhEyB8 +(850 - 849);
                xb3jEQ2JgM1 = xb3jEQ2JgM1 + 1;
            }
            else if (KAEX7U[Tr] > TyX3sZ50HfaG[rqRQna]) {
                KLJTzoZUq += (518 - 318);
                rqRQna = rqRQna - (802 - 801);
                Tr = Tr -(943 - 942);
            }
            else {
                if (KAEX7U[RnmhEyB8] < TyX3sZ50HfaG[rqRQna]) {
                    rqRQna = rqRQna - (324 - 323);
                    RnmhEyB8 = RnmhEyB8 +(400 - 399);
                    KLJTzoZUq = KLJTzoZUq -200;
                }
                else {
                    RnmhEyB8 = RnmhEyB8 +1;
                    rqRQna = rqRQna - 1;
                }
            }
        }
        printf ("%d\n", KLJTzoZUq);
    }
    return 0;
}

