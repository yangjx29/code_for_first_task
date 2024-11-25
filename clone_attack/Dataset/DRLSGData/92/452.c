const  int HGzVLyhe = (1876 - 875);
int dEOSM2IU;
int SeKZjh [HGzVLyhe], dg7Y82I [HGzVLyhe];
int gIfnHPhD9J, S9G1Kn, ULvQSwzIe43, rOJnvM4, vgtlT2;

void  l8pOAMv (int AlgbWPFTIO2, int lN3dZpS) {
    if (dg7Y82I[lN3dZpS] > SeKZjh[AlgbWPFTIO2])
        vgtlT2--;
    else if (SeKZjh[AlgbWPFTIO2] > dg7Y82I[lN3dZpS])
        vgtlT2++;
}

int main () {
    while (cin >> dEOSM2IU) {
        if (!((171 - 171) != dEOSM2IU))
            break;
        gIfnHPhD9J = ULvQSwzIe43 = (636 - 636);
        vgtlT2 = (156 - 156);
        S9G1Kn = rOJnvM4 = dEOSM2IU - (139 - 138);
        for (int zHAwYjm5he = (833 - 833);
        dEOSM2IU > zHAwYjm5he; zHAwYjm5he++)
            cin >> SeKZjh[zHAwYjm5he];
        for (int zHAwYjm5he = (95 - 95);
        dEOSM2IU > zHAwYjm5he; zHAwYjm5he++)
            cin >> dg7Y82I[zHAwYjm5he];
        sort (SeKZjh, SeKZjh +dEOSM2IU);
        sort (dg7Y82I, dg7Y82I + dEOSM2IU);
        for (int zHAwYjm5he = (896 - 896);
        zHAwYjm5he < dEOSM2IU; zHAwYjm5he++) {
            if (dg7Y82I[S9G1Kn] < SeKZjh[rOJnvM4])
                l8pOAMv (rOJnvM4--, S9G1Kn--);
            else if (dg7Y82I[S9G1Kn] > SeKZjh[rOJnvM4])
                l8pOAMv (ULvQSwzIe43++, S9G1Kn--);
            else {
                {
                    if ((590 - 590)) {
                        return (393 - 393);
                    }
                }
                if (dg7Y82I[gIfnHPhD9J] >= SeKZjh[ULvQSwzIe43])
                    l8pOAMv (ULvQSwzIe43++, S9G1Kn--);
                else if (dg7Y82I[gIfnHPhD9J] < SeKZjh[ULvQSwzIe43])
                    l8pOAMv (ULvQSwzIe43++, gIfnHPhD9J++);
            }
        }
        cout << vgtlT2 * (320 - 120) << endl;
    }
}

