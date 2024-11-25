struct   a {
    int IQwVGSlhM;
    char KR9j0n [(71 - 61)];
    struct   a *uKgU6Zim0Sl;
};
struct   a *create (int I4iSNXZp) {
    int iRbe1Ln;
    struct   a *aoNduxyOhsDQ;
    struct   a *sAn2poIhiV;
    struct   a *upVruQ6;
    aoNduxyOhsDQ = (struct   a *) malloc (len);
    scanf ("%s%d", aoNduxyOhsDQ->KR9j0n, &aoNduxyOhsDQ->IQwVGSlhM);
    aoNduxyOhsDQ->uKgU6Zim0Sl = NULL;
    upVruQ6 = aoNduxyOhsDQ;
    sAn2poIhiV = aoNduxyOhsDQ;
    for (iRbe1Ln = (568 - 567); iRbe1Ln < I4iSNXZp; iRbe1Ln = iRbe1Ln + (865 - 864)) {
        aoNduxyOhsDQ = (struct   a *) malloc (len);
        scanf ("%s%d", aoNduxyOhsDQ->KR9j0n, &aoNduxyOhsDQ->IQwVGSlhM);
        aoNduxyOhsDQ->uKgU6Zim0Sl = NULL;
        sAn2poIhiV->uKgU6Zim0Sl = aoNduxyOhsDQ;
        sAn2poIhiV = aoNduxyOhsDQ;
    }
    return upVruQ6;
}

void  main () {
    int iRbe1Ln;
    struct   a *upVruQ6, *GqDekPLyUxt, *Wf9X6D, *MM2peHLaKdT [100];
    int fM9C4XZYmE;
    int dTzN4shEU5CA;
    int CBriD35FT4p;
    scanf ("%d", &dTzN4shEU5CA);
    fM9C4XZYmE = (415 - 415);
    upVruQ6 = create (dTzN4shEU5CA);
    GqDekPLyUxt = upVruQ6;
    for (iRbe1Ln = (295 - 295); iRbe1Ln < dTzN4shEU5CA; iRbe1Ln = iRbe1Ln + (440 - 439)) {
        if ((481 - 421) <= GqDekPLyUxt->IQwVGSlhM) {
            MM2peHLaKdT[fM9C4XZYmE] = GqDekPLyUxt;
            fM9C4XZYmE = fM9C4XZYmE + (889 - 888);
        }
        GqDekPLyUxt = GqDekPLyUxt->uKgU6Zim0Sl;
    }
    for (CBriD35FT4p = (733 - 733); CBriD35FT4p < fM9C4XZYmE - (54 - 53); CBriD35FT4p = CBriD35FT4p +1)
        for (iRbe1Ln = 0; iRbe1Ln < fM9C4XZYmE - 1 - CBriD35FT4p; iRbe1Ln = iRbe1Ln + 1)
            if (MM2peHLaKdT[iRbe1Ln + 1]->IQwVGSlhM > MM2peHLaKdT[iRbe1Ln]->IQwVGSlhM) {
                GqDekPLyUxt = MM2peHLaKdT[iRbe1Ln];
                MM2peHLaKdT[iRbe1Ln] = MM2peHLaKdT[iRbe1Ln + 1];
                MM2peHLaKdT[iRbe1Ln + 1] = GqDekPLyUxt;
            }
    GqDekPLyUxt = upVruQ6;
    for (iRbe1Ln = 0; fM9C4XZYmE > iRbe1Ln; iRbe1Ln = iRbe1Ln + 1)
        printf ("%s\n", MM2peHLaKdT[iRbe1Ln]->KR9j0n);
    fM9C4XZYmE = 0;
    for (iRbe1Ln = 0; dTzN4shEU5CA > iRbe1Ln; iRbe1Ln = iRbe1Ln + 1) {
        if (60 > GqDekPLyUxt->IQwVGSlhM) {
            MM2peHLaKdT[fM9C4XZYmE] = GqDekPLyUxt;
            fM9C4XZYmE = fM9C4XZYmE + 1;
        }
        GqDekPLyUxt = GqDekPLyUxt->uKgU6Zim0Sl;
    }
    for (iRbe1Ln = 0; iRbe1Ln < fM9C4XZYmE; iRbe1Ln = iRbe1Ln + 1)
        printf ("%s\n", MM2peHLaKdT[iRbe1Ln]->KR9j0n);
}

