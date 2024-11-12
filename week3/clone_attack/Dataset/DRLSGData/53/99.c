int main () {
    int t9eaZbRI51ow;
    int SGxiw0;
    int DmkvF7M [300];
    scanf ("%d", &SGxiw0);
    scanf ("%d", &(DmkvF7M[0]));
    for (int caB7KfYxhmbt = 1;
    SGxiw0 > caB7KfYxhmbt; caB7KfYxhmbt++) {
        scanf (" %d", &(DmkvF7M[caB7KfYxhmbt]));
    }
    printf ("%d", DmkvF7M[0]);
    for (int VvpWkGsLm4 = 1;
    VvpWkGsLm4 < SGxiw0; VvpWkGsLm4++) {
        for (t9eaZbRI51ow = 0; VvpWkGsLm4 > t9eaZbRI51ow; t9eaZbRI51ow++) {
            if (!(DmkvF7M[t9eaZbRI51ow] != DmkvF7M[VvpWkGsLm4]))
                break;
        }
        if (DmkvF7M[VvpWkGsLm4] != DmkvF7M[VvpWkGsLm4 -1] && t9eaZbRI51ow == VvpWkGsLm4) {
            printf ("%d", DmkvF7M[VvpWkGsLm4]);
        }
    }
    return 0;
}

