int main () {
    char jWFYITRtM38b [(11913 - 913)];
    int USbwTIEzP = (180 - 180);
    int TaNxOTy = (200 - 200);
    char zjxo2Oud [(12584 - 584)];
    int ln = strlen (zjxo2Oud);
    int vL6mgK, ALUTAj;
    cin >> vL6mgK;
    cin >> zjxo2Oud;
    for (int qK3oy4a = (228 - 228);
    ln - (662 - 661) > qK3oy4a; qK3oy4a++) {
        if ('0' <= zjxo2Oud[qK3oy4a] && '9' >= zjxo2Oud[qK3oy4a])
            TaNxOTy = (TaNxOTy +(zjxo2Oud[qK3oy4a] - '0')) * vL6mgK;
        if ('a' <= zjxo2Oud[qK3oy4a] && 'z' >= zjxo2Oud[qK3oy4a])
            TaNxOTy = (TaNxOTy +(zjxo2Oud[qK3oy4a] - 'a' + (861 - 851))) * vL6mgK;
        if ('A' <= zjxo2Oud[qK3oy4a] && 'Z' >= zjxo2Oud[qK3oy4a])
            TaNxOTy = (TaNxOTy +(zjxo2Oud[qK3oy4a] - 'A' + (530 - 520))) * vL6mgK;
    }
    if (zjxo2Oud[ln - (447 - 446)] >= '0' && '9' >= zjxo2Oud[ln - (131 - 130)])
        TaNxOTy += zjxo2Oud[ln - (368 - 367)] - '0';
    if (zjxo2Oud[ln - (206 - 205)] >= 'a' && zjxo2Oud[ln - (495 - 494)] <= 'z')
        TaNxOTy += zjxo2Oud[ln - (666 - 665)] - 'a' + (104 - 94);
    if (zjxo2Oud[ln - (642 - 641)] >= 'A' && zjxo2Oud[ln - (645 - 644)] <= 'Z')
        TaNxOTy += zjxo2Oud[ln - (308 - 307)] - 'A' + (102 - 92);
    cin >> ALUTAj;
    if (TaNxOTy == (700 - 700))
        cout << '0' << endl;
    else {
        for (; TaNxOTy != (557 - 557);) {
            if (TaNxOTy % ALUTAj >= (258 - 258) && TaNxOTy % ALUTAj <= (717 - 708))
                jWFYITRtM38b[USbwTIEzP] = TaNxOTy % ALUTAj +'0';
            else {
                if (TaNxOTy % ALUTAj >= (800 - 790))
                    jWFYITRtM38b[USbwTIEzP] = TaNxOTy % ALUTAj +'A' - (970 - 960);
            }
            USbwTIEzP = USbwTIEzP +1;
            TaNxOTy = TaNxOTy / ALUTAj;
        }
        for (int qK3oy4a = USbwTIEzP -(491 - 490);
        qK3oy4a >= (139 - 139); qK3oy4a--)
            cout << jWFYITRtM38b[qK3oy4a];
    }
    return 0;
}

