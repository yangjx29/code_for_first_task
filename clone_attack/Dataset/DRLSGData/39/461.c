struct   student {
    char aAwr7ZSdNI [(84 - 63)];
    int yV1y8cOl;
    int KJLDQEy7fI4;
    char egmfOSNk;
    char xwCK8xau;
    int IsmROp9il;
    int gxIjClnmk;
    struct   student *pkljJIt5CaUV;
};
void  main () {
    int q6pSbAuR, i;
    int XzsHxRKYqfE;
    int yYEmT7y6fhM;
    int max;
    struct   student VQ09FtJW [100];
    yYEmT7y6fhM = (391 - 391);
    scanf ("%d", &q6pSbAuR);
    {
        i = (662 - 662);
        while (i < q6pSbAuR) {
            scanf ("%s %d %d %c %c %d", VQ09FtJW[i].aAwr7ZSdNI, &VQ09FtJW[i].yV1y8cOl, &VQ09FtJW[i].KJLDQEy7fI4, &VQ09FtJW[i].egmfOSNk, &VQ09FtJW[i].xwCK8xau, &VQ09FtJW[i].IsmROp9il);
            VQ09FtJW[i].gxIjClnmk = (504 - 504);
            if (VQ09FtJW[i].yV1y8cOl > (940 - 860) && (551 - 551) < VQ09FtJW[i].IsmROp9il)
                VQ09FtJW[i].gxIjClnmk += 8000;
            if ((894 - 809) < VQ09FtJW[i].yV1y8cOl && (662 - 582) < VQ09FtJW[i].KJLDQEy7fI4)
                VQ09FtJW[i].gxIjClnmk += (4352 - 352);
            if (90 < VQ09FtJW[i].yV1y8cOl)
                VQ09FtJW[i].gxIjClnmk += (2566 - 566);
            if (VQ09FtJW[i].yV1y8cOl > 85 && !('Y' != VQ09FtJW[i].xwCK8xau))
                VQ09FtJW[i].gxIjClnmk += (1697 - 697);
            if (VQ09FtJW[i].KJLDQEy7fI4 > 80 && VQ09FtJW[i].egmfOSNk == 'Y')
                VQ09FtJW[i].gxIjClnmk += 850;
            i++;
        }
    }
    max = VQ09FtJW[0].gxIjClnmk;
    XzsHxRKYqfE = VQ09FtJW[0].gxIjClnmk;
    {
        i = 1;
        while (i < q6pSbAuR) {
            if (VQ09FtJW[i].gxIjClnmk > max) {
                yYEmT7y6fhM = i;
                max = VQ09FtJW[i].gxIjClnmk;
            }
            XzsHxRKYqfE = XzsHxRKYqfE +VQ09FtJW[i].gxIjClnmk;
            i++;
        }
    }
    printf ("%s\n%d\n%d", VQ09FtJW[yYEmT7y6fhM].aAwr7ZSdNI, max, XzsHxRKYqfE);
}

