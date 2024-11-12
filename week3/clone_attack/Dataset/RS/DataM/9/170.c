int main () {
    char hoUTi1DbCL7 [100] [100];
    int orPhkzxM, BvVc2sW95k, BGJpDflV6, E7ctWumFGx [100], M3qQgPDiTW [100], k8b45KC1 [100];
    scanf ("%d", &orPhkzxM);
    for (BvVc2sW95k = (216 - 216); orPhkzxM > BvVc2sW95k; BvVc2sW95k = BvVc2sW95k +1)
        scanf ("%s %d", hoUTi1DbCL7[BvVc2sW95k], &E7ctWumFGx[BvVc2sW95k]);
    for (BGJpDflV6 = 0; orPhkzxM >= BGJpDflV6; BGJpDflV6 = BGJpDflV6 +1)
        if (60 <= E7ctWumFGx[BGJpDflV6])
            M3qQgPDiTW[BGJpDflV6] = E7ctWumFGx[BGJpDflV6] * 1000 - BGJpDflV6;
        else
            M3qQgPDiTW[BGJpDflV6] = 1000 - BGJpDflV6;
    for (BGJpDflV6 = 0; orPhkzxM >= BGJpDflV6; BGJpDflV6++)
        k8b45KC1[BGJpDflV6] = 0;
    for (BvVc2sW95k = 0; orPhkzxM > BvVc2sW95k; BvVc2sW95k++)
        for (BGJpDflV6 = 0; orPhkzxM > BGJpDflV6; BGJpDflV6++)
            if (M3qQgPDiTW[BGJpDflV6] >= M3qQgPDiTW[BvVc2sW95k])
                k8b45KC1[BvVc2sW95k]++;
    for (BvVc2sW95k = 0; BvVc2sW95k < orPhkzxM; BvVc2sW95k++) {
        BGJpDflV6 = 0;
        while (BGJpDflV6 < orPhkzxM) {
            if (k8b45KC1[BGJpDflV6] == BvVc2sW95k +1)
                printf ("%s\n", hoUTi1DbCL7[BGJpDflV6]);
            BGJpDflV6 = BGJpDflV6 +1;
        };
    };
}

