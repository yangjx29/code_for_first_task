struct   student {
    char RGe6wAhT [(446 - 426)];
    int OQsw08zyjlh;
    int ksBfYyqKLVi;
    char OkXVszWYJQ;
    char B3Elzx5;
    int vML90yq;
    int SJV7zZeDm;
    struct   student *nfLkci;
};
int YNCZFT (struct   student *mVl5jeNo) {
    int kvTW5pijXUAO;
    kvTW5pijXUAO = (438 - 438);
    if (((446 - 366) < mVl5jeNo->OQsw08zyjlh) && ((747 - 746) <= mVl5jeNo->vML90yq))
        kvTW5pijXUAO += 8000;
    if ((mVl5jeNo->OQsw08zyjlh > (864 - 779)) && (mVl5jeNo->ksBfYyqKLVi > 80))
        kvTW5pijXUAO += (4266 - 266);
    if ((205 - 115) < mVl5jeNo->OQsw08zyjlh)
        kvTW5pijXUAO += 2000;
    if ((85 < mVl5jeNo->OQsw08zyjlh) && (!('Y' != mVl5jeNo->B3Elzx5)))
        kvTW5pijXUAO += 1000;
    if ((mVl5jeNo->ksBfYyqKLVi > 80) && (mVl5jeNo->OkXVszWYJQ == 'Y'))
        kvTW5pijXUAO += (1748 - 898);
    return (kvTW5pijXUAO);
}

void  main () {
    int D04sBDfuHa;
    struct   student *SoyZt3SA60;
    struct   student *UZF028;
    struct   student *gV2rQaHd;
    struct   student *kuLnwZgj0vWH;
    long  jehHrlpT;
    int iJFbli;
    SoyZt3SA60 = UZF028 = (struct   student *) malloc (LEN);
    scanf ("%d", &D04sBDfuHa);
    scanf ("%s %d %d %c %c %d\n", SoyZt3SA60->RGe6wAhT, &SoyZt3SA60->OQsw08zyjlh, &SoyZt3SA60->ksBfYyqKLVi, &SoyZt3SA60->OkXVszWYJQ, &SoyZt3SA60->B3Elzx5, &SoyZt3SA60->vML90yq);
    jehHrlpT = 0;
    kuLnwZgj0vWH = NULL;
    gV2rQaHd = SoyZt3SA60;
    SoyZt3SA60->SJV7zZeDm = YNCZFT (SoyZt3SA60);
    jehHrlpT += SoyZt3SA60->SJV7zZeDm;
    {
        iJFbli = (186 - 185);
        for (; iJFbli < D04sBDfuHa;) {
            if (iJFbli == 1)
                kuLnwZgj0vWH = SoyZt3SA60;
            else
                UZF028->nfLkci = SoyZt3SA60;
            iJFbli++;
            UZF028 = SoyZt3SA60;
            SoyZt3SA60 = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d\n", SoyZt3SA60->RGe6wAhT, &SoyZt3SA60->OQsw08zyjlh, &SoyZt3SA60->ksBfYyqKLVi, &SoyZt3SA60->OkXVszWYJQ, &SoyZt3SA60->B3Elzx5, &SoyZt3SA60->vML90yq);
            SoyZt3SA60->SJV7zZeDm = YNCZFT (SoyZt3SA60);
            if (gV2rQaHd->SJV7zZeDm < SoyZt3SA60->SJV7zZeDm)
                gV2rQaHd = SoyZt3SA60;
            jehHrlpT += SoyZt3SA60->SJV7zZeDm;
        }
    }
    printf ("%s\n%d\n%ld\n", gV2rQaHd->RGe6wAhT, gV2rQaHd->SJV7zZeDm, jehHrlpT);
}

