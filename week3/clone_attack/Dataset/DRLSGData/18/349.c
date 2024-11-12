int YCdlzhOVQKfm (int aIRWXzmiP4D [100] [100], int amwU0OTG) {
    int U1Q0xU3d [100], s [100];
    int m = 0, i = 0, k = 0, gUdBPr59eD = 0, W7CRv1uABm = 0;
    for (i = 1; i < amwU0OTG; i++) {
        for (W7CRv1uABm = 0; W7CRv1uABm < amwU0OTG; W7CRv1uABm++) {
            U1Q0xU3d[W7CRv1uABm] = 0;
            s[W7CRv1uABm] = 0;
        }
        for (W7CRv1uABm = 0; amwU0OTG > W7CRv1uABm; W7CRv1uABm++) {
            if (aIRWXzmiP4D[W7CRv1uABm][0] >= 0) {
                U1Q0xU3d[W7CRv1uABm] = aIRWXzmiP4D[W7CRv1uABm][0];
                for (k = 0; amwU0OTG > k; k++) {
                    if (0 <= aIRWXzmiP4D[W7CRv1uABm][k] && U1Q0xU3d[W7CRv1uABm] > aIRWXzmiP4D[W7CRv1uABm][k])
                        U1Q0xU3d[W7CRv1uABm] = aIRWXzmiP4D[W7CRv1uABm][k];
                }
                for (k = 0; amwU0OTG > k; k++) {
                    aIRWXzmiP4D[W7CRv1uABm][k] = aIRWXzmiP4D[W7CRv1uABm][k] - U1Q0xU3d[W7CRv1uABm];
                }
            }
        }
        for (W7CRv1uABm = 0; amwU0OTG > W7CRv1uABm; W7CRv1uABm++) {
            if (aIRWXzmiP4D[0][W7CRv1uABm] >= 0) {
                s[W7CRv1uABm] = aIRWXzmiP4D[0][W7CRv1uABm];
                for (k = 0; amwU0OTG > k; k++) {
                    if (aIRWXzmiP4D[k][W7CRv1uABm] >= 0 && aIRWXzmiP4D[k][W7CRv1uABm] < s[W7CRv1uABm])
                        s[W7CRv1uABm] = aIRWXzmiP4D[k][W7CRv1uABm];
                }
                for (k = 0; k < amwU0OTG; k++) {
                    aIRWXzmiP4D[k][W7CRv1uABm] = aIRWXzmiP4D[k][W7CRv1uABm] - s[W7CRv1uABm];
                }
            }
        }
        gUdBPr59eD = gUdBPr59eD + aIRWXzmiP4D[i][i];
        for (W7CRv1uABm = 0; W7CRv1uABm < amwU0OTG; W7CRv1uABm++) {
            aIRWXzmiP4D[i][W7CRv1uABm] = -10;
            aIRWXzmiP4D[W7CRv1uABm][i] = -10;
        }
        cout << endl;
    }
    return gUdBPr59eD;
}

int main () {
    int aIRWXzmiP4D [100] [100];
    int amwU0OTG = 0, i = 0, W7CRv1uABm = 0, k = 0, gUdBPr59eD = 0;
    cin >> amwU0OTG;
    for (i = 1; i <= amwU0OTG; i++) {
        for (W7CRv1uABm = 0; W7CRv1uABm < 100; W7CRv1uABm++)
            for (k = 0; k < 100; k++)
                aIRWXzmiP4D[W7CRv1uABm][k] = -10;
        for (W7CRv1uABm = 0; W7CRv1uABm < amwU0OTG; W7CRv1uABm++)
            for (k = 0; k < amwU0OTG; k++)
                cin >> aIRWXzmiP4D[W7CRv1uABm][k];
        gUdBPr59eD = YCdlzhOVQKfm (aIRWXzmiP4D, amwU0OTG);
        cout << gUdBPr59eD << endl;
    }
    return 0;
}

