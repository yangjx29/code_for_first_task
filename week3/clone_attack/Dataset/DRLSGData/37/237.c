int main () {
    int XLPCuIaz, gNSd92l, cLYyNzra6, b2PfSXm4Cyp;
    char Z9wcq2xtU [100] [100];
    cin >> XLPCuIaz;
    for (gNSd92l = 1; XLPCuIaz >= gNSd92l; gNSd92l = gNSd92l + 1) {
        int IFf0gP [27] = {0};
        int C1lKC57 = 0;
        int cJ1EwHF = 0;
        cin >> Z9wcq2xtU[gNSd92l];
        cJ1EwHF = strlen (Z9wcq2xtU[gNSd92l]);
        for (cLYyNzra6 = 0; cLYyNzra6 < cJ1EwHF; cLYyNzra6 = cLYyNzra6 + 1)
            IFf0gP[Z9wcq2xtU[gNSd92l][cLYyNzra6] - 'a' + 1]++;
        for (cLYyNzra6 = 1; 26 >= cLYyNzra6; cLYyNzra6 = cLYyNzra6 + 1)
            if (IFf0gP[cLYyNzra6] != 1)
                C1lKC57 = C1lKC57 +1;
        if (!(26 != C1lKC57))
            cout << "no" << endl;
        else {
            for (cLYyNzra6 = 0; cJ1EwHF > cLYyNzra6; cLYyNzra6 = cLYyNzra6 + 1) {
                if (IFf0gP[Z9wcq2xtU[gNSd92l][cLYyNzra6] - 'a' + 1] == 1) {
                    cout << Z9wcq2xtU[gNSd92l][cLYyNzra6] << endl;
                    break;
                }
            }
        }
    }
}

