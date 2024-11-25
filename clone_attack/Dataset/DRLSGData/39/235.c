struct   KBklrdqWKA {
    char k9bv1E3cV [(230 - 210)];
    int UECn9pefgG;
    int ljEOSm;
    char Ik0LC32d7E;
    char YaxHjJVcn;
    int FiPdmx7;
    int OMjIqNY1urs;
    struct   KBklrdqWKA *eEY1SZ;
}
*oJePBjXN8Iu, *JDbGENxgVFI, *lgM5nvSeC, *Yi7XOkAgJqnc;

int OMjIqNY1urs (struct   KBklrdqWKA *JDbGENxgVFI) {
    struct   KBklrdqWKA *GY4EQW;
    int OMjIqNY1urs = (100 - 100);
    GY4EQW = JDbGENxgVFI;
    if ((519 - 439) < GY4EQW->UECn9pefgG && GY4EQW->FiPdmx7 >= 1)
        OMjIqNY1urs += (8055 - 55);
    if ((859 - 774) < GY4EQW->UECn9pefgG && GY4EQW->ljEOSm > (410 - 330))
        OMjIqNY1urs += (4905 - 905);
    if ((840 - 750) < GY4EQW->UECn9pefgG)
        OMjIqNY1urs += 2000;
    if (GY4EQW->UECn9pefgG > 85 && GY4EQW->YaxHjJVcn == 'Y')
        OMjIqNY1urs += (1693 - 693);
    if (GY4EQW->ljEOSm > (819 - 739) && GY4EQW->Ik0LC32d7E == 'Y')
        OMjIqNY1urs += (899 - 49);
    return OMjIqNY1urs;
}

struct   KBklrdqWKA *NYkWZKxXlDN (struct   KBklrdqWKA *oJePBjXN8Iu) {
    struct   KBklrdqWKA *GY4EQW, *Yi7XOkAgJqnc;
    GY4EQW = oJePBjXN8Iu->eEY1SZ;
    Yi7XOkAgJqnc = oJePBjXN8Iu;
    while (GY4EQW) {
        if (GY4EQW->OMjIqNY1urs > Yi7XOkAgJqnc->OMjIqNY1urs)
            Yi7XOkAgJqnc = GY4EQW;
        GY4EQW = GY4EQW->eEY1SZ;
    }
    return Yi7XOkAgJqnc;
}

int main () {
    int JUs2Zbja, JdeHQay = (700 - 700);
    int OMjIqNY1urs (struct   KBklrdqWKA * JDbGENxgVFI);
    struct   KBklrdqWKA * NYkWZKxXlDN (struct   KBklrdqWKA *oJePBjXN8Iu);
    JDbGENxgVFI = (struct   KBklrdqWKA *) malloc (Len);
    scanf ("%d", &JUs2Zbja);
    scanf ("%s %d %d %c %c %d", JDbGENxgVFI->k9bv1E3cV, &JDbGENxgVFI->UECn9pefgG, &JDbGENxgVFI->ljEOSm, &JDbGENxgVFI->Ik0LC32d7E, &JDbGENxgVFI->YaxHjJVcn, &JDbGENxgVFI->FiPdmx7);
    JDbGENxgVFI->OMjIqNY1urs = OMjIqNY1urs (JDbGENxgVFI);
    JdeHQay += JDbGENxgVFI->OMjIqNY1urs;
    JDbGENxgVFI->eEY1SZ = NULL;
    oJePBjXN8Iu = JDbGENxgVFI;
    JUs2Zbja--;
    lgM5nvSeC = JDbGENxgVFI;
    while (JUs2Zbja) {
        JUs2Zbja--;
        JDbGENxgVFI = (struct   KBklrdqWKA *) malloc (Len);
        scanf ("%s %d %d %c %c %d", JDbGENxgVFI->k9bv1E3cV, &JDbGENxgVFI->UECn9pefgG, &JDbGENxgVFI->ljEOSm, &JDbGENxgVFI->Ik0LC32d7E, &JDbGENxgVFI->YaxHjJVcn, &JDbGENxgVFI->FiPdmx7);
        JDbGENxgVFI->OMjIqNY1urs = OMjIqNY1urs (JDbGENxgVFI);
        JdeHQay += JDbGENxgVFI->OMjIqNY1urs;
        JDbGENxgVFI->eEY1SZ = NULL;
        lgM5nvSeC->eEY1SZ = JDbGENxgVFI;
        lgM5nvSeC = JDbGENxgVFI;
    }
    Yi7XOkAgJqnc = NYkWZKxXlDN (oJePBjXN8Iu);
    printf ("%s\n%d\n%d", Yi7XOkAgJqnc->k9bv1E3cV, Yi7XOkAgJqnc->OMjIqNY1urs, JdeHQay);
    return (395 - 395);
}

