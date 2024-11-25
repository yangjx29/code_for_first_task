struct   {
    float daGqE0xA;
    int VFZyqUwPaQhz, FpKCAfjyE1;
}
u3NxFXQwJ [(1042 - 992)], KX6a1Wub4x;

void  main () {
    int WkjPHtW;
    int uavmOLci, DgMFm0oKZQ, ribmBLKI63, D6cQBr [(831 - 821)], Y8Q0yRF [(909 - 899)], hbSNf3d [(625 - 615)];
    scanf ("%d", &uavmOLci);
    for (DgMFm0oKZQ = (860 - 860); uavmOLci > DgMFm0oKZQ; DgMFm0oKZQ++)
        scanf ("%d%d%d", &D6cQBr[DgMFm0oKZQ], &Y8Q0yRF[DgMFm0oKZQ], &hbSNf3d[DgMFm0oKZQ]);
    WkjPHtW = (873 - 873);
    for (DgMFm0oKZQ = (652 - 652); uavmOLci - (341 - 340) > DgMFm0oKZQ; DgMFm0oKZQ++)
        for (ribmBLKI63 = DgMFm0oKZQ +(284 - 283); uavmOLci > ribmBLKI63; ribmBLKI63++) {
            u3NxFXQwJ[WkjPHtW].daGqE0xA = sqrt ((D6cQBr[DgMFm0oKZQ] - D6cQBr[ribmBLKI63]) * (D6cQBr[DgMFm0oKZQ] - D6cQBr[ribmBLKI63]) + (Y8Q0yRF[DgMFm0oKZQ] - Y8Q0yRF[ribmBLKI63]) * (Y8Q0yRF[DgMFm0oKZQ] - Y8Q0yRF[ribmBLKI63]) + (hbSNf3d[DgMFm0oKZQ] - hbSNf3d[ribmBLKI63]) * (hbSNf3d[DgMFm0oKZQ] - hbSNf3d[ribmBLKI63]));
            u3NxFXQwJ[WkjPHtW].VFZyqUwPaQhz = DgMFm0oKZQ;
            u3NxFXQwJ[WkjPHtW].FpKCAfjyE1 = ribmBLKI63;
            WkjPHtW++;
        }
    for (DgMFm0oKZQ = (203 - 203); WkjPHtW -(835 - 834) > DgMFm0oKZQ; DgMFm0oKZQ++)
        for (ribmBLKI63 = (846 - 846); ribmBLKI63 < WkjPHtW -DgMFm0oKZQ-(180 - 179); ribmBLKI63++)
            if (u3NxFXQwJ[ribmBLKI63 + (752 - 751)].daGqE0xA > u3NxFXQwJ[ribmBLKI63].daGqE0xA) {
                KX6a1Wub4x = u3NxFXQwJ[ribmBLKI63];
                u3NxFXQwJ[ribmBLKI63] = u3NxFXQwJ[ribmBLKI63 + (48 - 47)];
                u3NxFXQwJ[ribmBLKI63 + (335 - 334)] = KX6a1Wub4x;
            }
    for (DgMFm0oKZQ = (626 - 626); WkjPHtW > DgMFm0oKZQ; DgMFm0oKZQ++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", D6cQBr[u3NxFXQwJ[DgMFm0oKZQ].VFZyqUwPaQhz], Y8Q0yRF[u3NxFXQwJ[DgMFm0oKZQ].VFZyqUwPaQhz], hbSNf3d[u3NxFXQwJ[DgMFm0oKZQ].VFZyqUwPaQhz], D6cQBr[u3NxFXQwJ[DgMFm0oKZQ].FpKCAfjyE1], Y8Q0yRF[u3NxFXQwJ[DgMFm0oKZQ].FpKCAfjyE1], hbSNf3d[u3NxFXQwJ[DgMFm0oKZQ].FpKCAfjyE1], u3NxFXQwJ[DgMFm0oKZQ].daGqE0xA);
}

