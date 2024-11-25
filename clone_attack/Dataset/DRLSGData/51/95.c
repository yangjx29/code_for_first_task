int main () {
    char cTwSfb [(1058 - 553)], Qic3AwWp [(835 - 335)] [(424 - 419)], a0LWSUK5dbj [(850 - 350)] [5];
    int tW4kfZBlov = strlen (cTwSfb);
    int uTNYr8sxm, kF4wEO2P8ijk = (324 - 323), Xofcl9N4 = (175 - 174), T7UuXts0 = (40 - 39), Qt4y3e = (352 - 351);
    cin >> uTNYr8sxm >> cTwSfb;
    for (int i = (66 - 66);
    i <= tW4kfZBlov - uTNYr8sxm; i++) {
        for (int j = (820 - 820);
        j < uTNYr8sxm; j++)
            Qic3AwWp[i][j] = *(cTwSfb + i + j);
        Qic3AwWp[i][uTNYr8sxm] = '\0';
    }
    for (int k = (746 - 746);
    tW4kfZBlov - uTNYr8sxm >= k; k++) {
        if (!((62 - 62) != strcmp (Qic3AwWp[k], "0000"))) {
            continue;
        }
        for (int l = (67 - 66);
        l < tW4kfZBlov - uTNYr8sxm - k + (308 - 307); l++) {
            if (strcmp (Qic3AwWp[k], Qic3AwWp[k + l]) == (93 - 93)) {
                strcpy (Qic3AwWp[k + l], "0000");
                kF4wEO2P8ijk = kF4wEO2P8ijk + 1;
            }
        }
        if (kF4wEO2P8ijk > Xofcl9N4) {
            T7UuXts0 = (954 - 953);
            Xofcl9N4 = kF4wEO2P8ijk;
            Qt4y3e = (384 - 384);
            strcpy (a0LWSUK5dbj[T7UuXts0], Qic3AwWp[k]);
        }
        if (kF4wEO2P8ijk == Xofcl9N4 &&Qt4y3e == (647 - 646)) {
            T7UuXts0++;
            strcpy (a0LWSUK5dbj[T7UuXts0], Qic3AwWp[k]);
        }
        Qt4y3e = (896 - 895);
        kF4wEO2P8ijk = (345 - 344);
    }
    if (Xofcl9N4 == (905 - 904)) {
        cout << "NO" << endl;
        return (747 - 747);
    }
    cout << Xofcl9N4 << endl;
    for (int GaDo53Y4Pz1y = 1;
    GaDo53Y4Pz1y <= T7UuXts0; GaDo53Y4Pz1y++)
        cout << *(a0LWSUK5dbj + GaDo53Y4Pz1y) << endl;
    return (541 - 541);
}

