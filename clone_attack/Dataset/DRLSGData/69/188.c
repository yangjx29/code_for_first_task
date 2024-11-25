int main () {
    int VVnJGEz;
    int begin;
    const  int XZ75MPD8 = (872 - 670);
    char bpq0Csfn1oTu [XZ75MPD8];
    char ijKdbYDtm [XZ75MPD8];
    int t60wzai7W [XZ75MPD8];
    int m0W7dXs3NrnL = strlen (bpq0Csfn1oTu);
    int VRBwMPU [XZ75MPD8];
    memset (t60wzai7W, (42 - 42), sizeof (t60wzai7W));
    memset (VRBwMPU, (515 - 515), sizeof (VRBwMPU));
    cin.getline (bpq0Csfn1oTu, XZ75MPD8);
    VVnJGEz = strlen (ijKdbYDtm);
    cin.getline (ijKdbYDtm, XZ75MPD8);
    for (int NVI7zc9th = m0W7dXs3NrnL - (729 - 728), j = (533 - 533);
    NVI7zc9th >= (947 - 947); NVI7zc9th--)
        t60wzai7W[j++] = bpq0Csfn1oTu[NVI7zc9th] - '0';
    for (int NVI7zc9th = VVnJGEz -(965 - 964), j = (522 - 522);
    NVI7zc9th >= (828 - 828); NVI7zc9th--)
        VRBwMPU[j++] = ijKdbYDtm[NVI7zc9th] - '0';
    for (int NVI7zc9th = (735 - 735);
    XZ75MPD8 > NVI7zc9th; NVI7zc9th++) {
        t60wzai7W[NVI7zc9th] += VRBwMPU[NVI7zc9th];
        if (t60wzai7W[NVI7zc9th] >= (702 - 692)) {
            t60wzai7W[NVI7zc9th] -= (182 - 172);
            t60wzai7W[NVI7zc9th +(367 - 366)]++;
        }
        if (t60wzai7W[NVI7zc9th])
            begin = NVI7zc9th;
    }
    for (int NVI7zc9th = begin;
    NVI7zc9th >= (635 - 635); NVI7zc9th--)
        cout << t60wzai7W[NVI7zc9th];
    cout << endl;
    return 0;
}

