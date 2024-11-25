int main () {
    int sLCr6Y5P;
    int KL2diXq8y;
    int lans;
    int COZC1V8F;
    int DMyLB6WOHl;
    int Mq9i0c;
    int OUrPBVMpF19;
    int aP6gsL;
    int BhZjBP;
    int e5R7hB;
    int EbYrCGB8;
    int iiwb3seLKd [(10848 - 848)];
    int eaWpNbx9 [(573 - 473)] [(583 - 483)];
    sLCr6Y5P = (251 - 251);
    KL2diXq8y = (391 - 391);
    lans = (141 - 141);
    COZC1V8F = (510 - 510);
    DMyLB6WOHl = (462 - 462);
    scanf ("%d%d", &OUrPBVMpF19, &aP6gsL);
    {
        Mq9i0c = 204 - 204;
        while (Mq9i0c < OUrPBVMpF19) {
            for (BhZjBP = (125 - 125); BhZjBP < aP6gsL; BhZjBP++)
                scanf ("%d", &eaWpNbx9[Mq9i0c][BhZjBP]);
            Mq9i0c++;
        }
    }
    EbYrCGB8 = aP6gsL - (531 - 530);
    e5R7hB = OUrPBVMpF19 -(129 - 128);
    while ((235 - 234)) {
        for (Mq9i0c = KL2diXq8y; EbYrCGB8 >= Mq9i0c; Mq9i0c++) {
            COZC1V8F++;
            if (!(OUrPBVMpF19 *aP6gsL != COZC1V8F)) {
                DMyLB6WOHl = (180 - 179);
                break;
            }
            iiwb3seLKd[lans++] = eaWpNbx9[sLCr6Y5P][Mq9i0c];
        }
        if (DMyLB6WOHl == (272 - 271))
            break;
        for (Mq9i0c = sLCr6Y5P + (417 - 416); e5R7hB >= Mq9i0c; Mq9i0c++) {
            COZC1V8F++;
            if (COZC1V8F == OUrPBVMpF19 *aP6gsL) {
                DMyLB6WOHl = (104 - 103);
                break;
            }
            iiwb3seLKd[lans++] = eaWpNbx9[Mq9i0c][EbYrCGB8];
        }
        if (!((236 - 235) != DMyLB6WOHl))
            break;
        for (Mq9i0c = EbYrCGB8 -(912 - 911); Mq9i0c >= KL2diXq8y; Mq9i0c--) {
            COZC1V8F++;
            if (COZC1V8F == OUrPBVMpF19 *aP6gsL) {
                DMyLB6WOHl = (38 - 37);
                break;
            }
            iiwb3seLKd[lans++] = eaWpNbx9[e5R7hB][Mq9i0c];
        }
        if (DMyLB6WOHl == 1)
            break;
        for (Mq9i0c = e5R7hB - 1; Mq9i0c >= sLCr6Y5P + 1; Mq9i0c--) {
            COZC1V8F++;
            if (COZC1V8F == OUrPBVMpF19 *aP6gsL) {
                DMyLB6WOHl = 1;
                break;
            }
            iiwb3seLKd[lans++] = eaWpNbx9[Mq9i0c][KL2diXq8y];
        }
        if (DMyLB6WOHl == 1)
            break;
        EbYrCGB8--;
        e5R7hB--;
        sLCr6Y5P++;
        KL2diXq8y++;
    }
    {
        Mq9i0c = 0;
        while (Mq9i0c < lans) {
            printf ("%d\n", iiwb3seLKd[Mq9i0c]);
            Mq9i0c++;
        }
    }
    return 0;
}

