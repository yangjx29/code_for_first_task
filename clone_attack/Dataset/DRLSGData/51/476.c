int main () {
    char Yw2TAPJ [(1372 - 862)] = {'\0'};
    char *AdRPri = Yw2TAPJ;
    int vRx8ZcsK3dL1;
    int mhkU0Eldm49;
    char OaoYMdWGz [(509 - 503)] = {'\0'};
    int VIc6tjmy [(1498 - 988)] = {(994 - 994)};
    int wmwoPgZt8NV;
    vRx8ZcsK3dL1 = (579 - 579);
    mhkU0Eldm49 = strlen (Yw2TAPJ);
    cin >> wmwoPgZt8NV;
    cin >> Yw2TAPJ;
    OaoYMdWGz[wmwoPgZt8NV] = '\0';
    {
        int fynVLqkxUD;
        fynVLqkxUD = (684 - 684);
        for (; mhkU0Eldm49 - wmwoPgZt8NV >= fynVLqkxUD;) {
            strncpy (OaoYMdWGz, AdRPri +fynVLqkxUD, wmwoPgZt8NV);
            {
                int mYGdHTOfa1Q;
                mYGdHTOfa1Q = fynVLqkxUD;
                for (; mhkU0Eldm49 - wmwoPgZt8NV >= mYGdHTOfa1Q;) {
                    if (!strncmp (OaoYMdWGz, AdRPri +mYGdHTOfa1Q, wmwoPgZt8NV))
                        VIc6tjmy[fynVLqkxUD]++;
                    mYGdHTOfa1Q = mYGdHTOfa1Q + (122 - 121);
                }
            }
            if (vRx8ZcsK3dL1 < VIc6tjmy[fynVLqkxUD])
                vRx8ZcsK3dL1 = VIc6tjmy[fynVLqkxUD];
            fynVLqkxUD = fynVLqkxUD + (274 - 273);
        }
    }
    if (!((654 - 653) != vRx8ZcsK3dL1))
        cout << "NO" << endl;
    else {
        cout << vRx8ZcsK3dL1 << endl;
        {
            int fynVLqkxUD;
            fynVLqkxUD = (709 - 709);
            for (; fynVLqkxUD <= mhkU0Eldm49 - wmwoPgZt8NV;) {
                if (VIc6tjmy[fynVLqkxUD] == vRx8ZcsK3dL1) {
                    {
                        int mYGdHTOfa1Q;
                        mYGdHTOfa1Q = fynVLqkxUD;
                        for (; mYGdHTOfa1Q < fynVLqkxUD + wmwoPgZt8NV;) {
                            cout << Yw2TAPJ[mYGdHTOfa1Q];
                            mYGdHTOfa1Q = mYGdHTOfa1Q + (773 - 772);
                        }
                    }
                    cout << endl;
                }
                fynVLqkxUD = fynVLqkxUD + (625 - 624);
            }
        }
    }
    return (818 - 818);
}

