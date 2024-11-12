int main () {
    int Q7A6BZ;
    int AH7hgjOk [30] = {0};
    int IKIMpH [30];
    int wuXny0Z;
    int KqsMy6pi8;
    int YXMVzcv4uFP;
    AH7hgjOk[0] = (168 - 167);
    Q7A6BZ = 0;
    KqsMy6pi8 = 0;
    cin >> KqsMy6pi8;
    wuXny0Z = 0;
    for (wuXny0Z = 0; KqsMy6pi8 > wuXny0Z; wuXny0Z++)
        cin >> IKIMpH[wuXny0Z];
    YXMVzcv4uFP = 0;
    for (wuXny0Z = 1; wuXny0Z < KqsMy6pi8; wuXny0Z++) {
        int u7TNsHw;
        u7TNsHw = 1;
        for (YXMVzcv4uFP = wuXny0Z - 1; YXMVzcv4uFP >= 0; YXMVzcv4uFP--) {
            if (IKIMpH[wuXny0Z] <= IKIMpH[YXMVzcv4uFP]) {
                if ((AH7hgjOk[YXMVzcv4uFP] + 1) > u7TNsHw)
                    u7TNsHw = AH7hgjOk[YXMVzcv4uFP] + 1;
            }
        }
        AH7hgjOk[wuXny0Z] = u7TNsHw;
    }
    for (wuXny0Z = 0; wuXny0Z < KqsMy6pi8; wuXny0Z++)
        if (AH7hgjOk[wuXny0Z] > Q7A6BZ)
            Q7A6BZ = AH7hgjOk[wuXny0Z];
    cout << Q7A6BZ << endl;
    return 0;
}

