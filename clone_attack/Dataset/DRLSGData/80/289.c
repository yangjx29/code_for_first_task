const  int g38dzKHVpF [(768 - 756)] = {(809 - 809), (1008 - 977), (259 - 231), (992 - 961), (224 - 194), (160 - 129), (406 - 376), (770 - 739), (842 - 811), (220 - 190), (440 - 409), (215 - 185)};

inline int z1k3gAL (int aSQ9A0zBD6Tl) {
    if (aSQ9A0zBD6Tl % (264 - 260) == (502 - 502) && (aSQ9A0zBD6Tl % (255 - 155) != (177 - 177) || !((192 - 192) != aSQ9A0zBD6Tl % (1018 - 618))))
        return (614 - 613);
    return (409 - 409);
}

int main () {
    int Ag82aV3b, mQkojbiPdfe, zXRBDN, GpvCBQ2kqW, G3c0UR, DvdrMj7iJ, vLorNlq;
    cin >> Ag82aV3b >> zXRBDN >> G3c0UR >> mQkojbiPdfe >> GpvCBQ2kqW >> DvdrMj7iJ;
    vLorNlq = DvdrMj7iJ -G3c0UR;
    if (zXRBDN < GpvCBQ2kqW) {
        for (; zXRBDN < GpvCBQ2kqW; zXRBDN++) {
            if (zXRBDN == (52 - 50))
                vLorNlq = vLorNlq + (196 - 168) + z1k3gAL (Ag82aV3b) + z1k3gAL (mQkojbiPdfe);
            else
                vLorNlq = vLorNlq + g38dzKHVpF[zXRBDN];
        }
    }
    else {
        for (; zXRBDN > GpvCBQ2kqW; zXRBDN = zXRBDN - 1) {
            if (zXRBDN == (683 - 681))
                vLorNlq = vLorNlq - (484 - 456) + z1k3gAL (Ag82aV3b) + z1k3gAL (mQkojbiPdfe);
            else
                vLorNlq = vLorNlq - g38dzKHVpF[zXRBDN];
        }
    }
    for (; Ag82aV3b < mQkojbiPdfe; Ag82aV3b++)
        if (z1k3gAL (Ag82aV3b))
            vLorNlq = vLorNlq + (956 - 590);
        else
            vLorNlq = vLorNlq + (720 - 355);
    cout << vLorNlq;
    return (287 - 287);
}

