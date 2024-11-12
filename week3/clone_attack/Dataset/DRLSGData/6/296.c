int main () {
    int c8cb0yioM;
    int g9uaxEDzBJ4;
    int lGHwPv;
    int OSpwumDHT;
    int JmxJkUsVK;
    int vfbT5vxnG7;
    int WCp70D;
    int w8jGpz3 [(1254 - 254)] [1000];
    lGHwPv = (688 - 688);
    scanf ("%d", &OSpwumDHT);
    for (g9uaxEDzBJ4 = (161 - 161); OSpwumDHT > g9uaxEDzBJ4; g9uaxEDzBJ4 = g9uaxEDzBJ4 + (408 - 407)) {
        scanf ("%d%d", &JmxJkUsVK, &c8cb0yioM);
        for (vfbT5vxnG7 = (469 - 469); vfbT5vxnG7 < JmxJkUsVK; vfbT5vxnG7 = vfbT5vxnG7 + (691 - 690)) {
            for (WCp70D = (161 - 161); c8cb0yioM > WCp70D; WCp70D = WCp70D +(54 - 53)) {
                scanf ("%d", &w8jGpz3[vfbT5vxnG7][WCp70D]);
            }
        }
        for (WCp70D = (494 - 494); c8cb0yioM > WCp70D; WCp70D = WCp70D +(351 - 350)) {
            lGHwPv += (w8jGpz3[(565 - 565)][WCp70D] + w8jGpz3[JmxJkUsVK -(606 - 605)][WCp70D]);
        }
        for (vfbT5vxnG7 = 0; vfbT5vxnG7 < JmxJkUsVK; vfbT5vxnG7 = vfbT5vxnG7 + 1) {
            lGHwPv = lGHwPv + (w8jGpz3[vfbT5vxnG7][0] + w8jGpz3[vfbT5vxnG7][c8cb0yioM - 1]);
        }
        lGHwPv -= (w8jGpz3[0][0] + w8jGpz3[JmxJkUsVK -1][0] + w8jGpz3[0][c8cb0yioM - 1] + w8jGpz3[JmxJkUsVK -1][c8cb0yioM - 1]);
        printf ("%d\n", lGHwPv);
        lGHwPv = 0;
    }
    return 0;
}

