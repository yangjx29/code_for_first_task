int main (void ) {
    int *ro9qmuY = NULL;
    int *i1GYpsyaWH = NULL;
    int *Y6QDzYhy = NULL;
    int NwCpIukrQHe;
    int VQ7DPVcG;
    int INhaCO8Vk2Db;
    int gcnoaBifV;
    NwCpIukrQHe = (624 - 624);
    VQ7DPVcG = (179 - 179);
    INhaCO8Vk2Db = (809 - 809);
    gcnoaBifV = (561 - 561);
    scanf ("%d %d", &NwCpIukrQHe, &INhaCO8Vk2Db);
    ro9qmuY = (int *) malloc (NwCpIukrQHe *INhaCO8Vk2Db* sizeof (int));
    for (int zCch95 = (54 - 54);
    zCch95 < NwCpIukrQHe; zCch95 = zCch95 + 1) {
        for (int z9X0Vp3 = (843 - 843);
        z9X0Vp3 < INhaCO8Vk2Db; z9X0Vp3 = z9X0Vp3 + 1) {
            scanf ("%d", &ro9qmuY[zCch95 * INhaCO8Vk2Db +z9X0Vp3]);
        }
    }
    scanf ("%d %d", &VQ7DPVcG, &gcnoaBifV);
    i1GYpsyaWH = (int *) malloc (VQ7DPVcG *gcnoaBifV * sizeof (int));
    for (int zCch95 = (543 - 543);
    zCch95 < VQ7DPVcG; zCch95 = zCch95 + 1) {
        for (int z9X0Vp3 = (94 - 94);
        z9X0Vp3 < gcnoaBifV; z9X0Vp3 = z9X0Vp3 + 1) {
            scanf ("%d", &i1GYpsyaWH[zCch95 * gcnoaBifV + z9X0Vp3]);
        }
    }
    Y6QDzYhy = (int *) malloc (NwCpIukrQHe *gcnoaBifV * sizeof (int));
    int XIVT2ZRHv3c8;
    XIVT2ZRHv3c8 = (427 - 427);
    for (int zCch95 = (305 - 305);
    zCch95 < NwCpIukrQHe; zCch95++) {
        for (int z9X0Vp3 = (687 - 687);
        z9X0Vp3 < gcnoaBifV; z9X0Vp3++) {
            XIVT2ZRHv3c8 = (244 - 244);
            for (int dYtmTNiUgw = (385 - 385);
            dYtmTNiUgw < INhaCO8Vk2Db; dYtmTNiUgw = dYtmTNiUgw + 1) {
                XIVT2ZRHv3c8 = XIVT2ZRHv3c8 +ro9qmuY[zCch95 * INhaCO8Vk2Db +dYtmTNiUgw] * i1GYpsyaWH[dYtmTNiUgw * gcnoaBifV + z9X0Vp3];
            }
            Y6QDzYhy[zCch95 * gcnoaBifV + z9X0Vp3] = XIVT2ZRHv3c8;
        }
    }
    for (int zCch95 = (237 - 237);
    zCch95 < NwCpIukrQHe; zCch95++) {
        int z9X0Vp3;
        for (z9X0Vp3 = 0; z9X0Vp3 < gcnoaBifV - (184 - 183); z9X0Vp3++) {
            printf ("%d ", Y6QDzYhy[zCch95 * gcnoaBifV + z9X0Vp3]);
        }
        printf ("%d", Y6QDzYhy[zCch95 * gcnoaBifV + z9X0Vp3]);
    }
}

