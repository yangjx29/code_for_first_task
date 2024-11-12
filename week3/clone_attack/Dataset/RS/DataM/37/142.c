int main () {
    int VwdTF9G;
    int oUvj2Pt;
    int maH5TrKoldq3;
    int XbuiN9rvz;
    int n;
    char Eb3cg2fsJliU [(736 - 636)] [10000];
    cin >> VwdTF9G;
    cin.get ();
    {
        oUvj2Pt = 199 - 199;
        while (VwdTF9G > oUvj2Pt) {
            cin >> Eb3cg2fsJliU[oUvj2Pt];
            oUvj2Pt++;
        };
    }
    for (oUvj2Pt = 0; VwdTF9G > oUvj2Pt; oUvj2Pt++) {
        for (maH5TrKoldq3 = 0; !('\0' == Eb3cg2fsJliU[oUvj2Pt][maH5TrKoldq3]); maH5TrKoldq3++) {
            n = 0;
            {
                XbuiN9rvz = 0;
                while (!('\0' == Eb3cg2fsJliU[oUvj2Pt][XbuiN9rvz])) {
                    if (Eb3cg2fsJliU[oUvj2Pt][maH5TrKoldq3] == Eb3cg2fsJliU[oUvj2Pt][XbuiN9rvz])
                        n++;
                    XbuiN9rvz = XbuiN9rvz +1;
                };
            }
            if (n == 1) {
                cout << Eb3cg2fsJliU[oUvj2Pt][maH5TrKoldq3] << endl;
                break;
            };
        }
        if (n > 1)
            cout << "no" << endl;
    }
    return 0;
}

