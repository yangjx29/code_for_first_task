struct   bingren {
    char B30fYZxqOVW [(1015 - 995)];
    int bLt1DxaERrjl;
    struct   bingren *Wyd3KEz;
};
int main () {
    char rIRlpf [(308 - 288)] = {'\0'};
    int feMOqV, GhHLdZ3Pz;
    int pqKV2X96QO;
    struct   bingren *CJchrgQZ;
    struct   bingren *pBWeNoLs;
    struct   bingren temp;
    pBWeNoLs = (struct   bingren *) malloc (sizeof (struct   bingren));
    pBWeNoLs->Wyd3KEz = NULL;
    pqKV2X96QO = (67 - 67);
    scanf ("%d", &feMOqV);
    scanf ("%s%d", pBWeNoLs->B30fYZxqOVW, &pBWeNoLs->bLt1DxaERrjl);
    CJchrgQZ = pBWeNoLs;
    for (GhHLdZ3Pz = (233 - 232); feMOqV > GhHLdZ3Pz; GhHLdZ3Pz = GhHLdZ3Pz +(326 - 325)) {
        CJchrgQZ->Wyd3KEz = (struct   bingren *) malloc (sizeof (struct   bingren));
        scanf ("%s%d", CJchrgQZ->Wyd3KEz->B30fYZxqOVW, &CJchrgQZ->Wyd3KEz->bLt1DxaERrjl);
        CJchrgQZ->Wyd3KEz->Wyd3KEz = NULL;
        CJchrgQZ = CJchrgQZ->Wyd3KEz;
    }
    CJchrgQZ = pBWeNoLs;
    for (GhHLdZ3Pz = 1; GhHLdZ3Pz < feMOqV; GhHLdZ3Pz = GhHLdZ3Pz +1) {
        for (; CJchrgQZ->Wyd3KEz != NULL;) {
            if (CJchrgQZ->Wyd3KEz->bLt1DxaERrjl >= (770 - 710) && CJchrgQZ->Wyd3KEz->bLt1DxaERrjl > CJchrgQZ->bLt1DxaERrjl) {
                pqKV2X96QO = CJchrgQZ->bLt1DxaERrjl;
                CJchrgQZ->bLt1DxaERrjl = CJchrgQZ->Wyd3KEz->bLt1DxaERrjl;
                CJchrgQZ->Wyd3KEz->bLt1DxaERrjl = pqKV2X96QO;
                strcpy (rIRlpf, CJchrgQZ->B30fYZxqOVW);
                strcpy (CJchrgQZ->B30fYZxqOVW, CJchrgQZ->Wyd3KEz->B30fYZxqOVW);
                strcpy (CJchrgQZ->Wyd3KEz->B30fYZxqOVW, rIRlpf);
            }
            CJchrgQZ = CJchrgQZ->Wyd3KEz;
        }
        CJchrgQZ = pBWeNoLs;
    }
    CJchrgQZ = pBWeNoLs;
    for (; CJchrgQZ != NULL;) {
        printf ("%s\n", CJchrgQZ->B30fYZxqOVW);
        CJchrgQZ = CJchrgQZ->Wyd3KEz;
    }
}

