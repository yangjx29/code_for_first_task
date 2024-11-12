int main () {
    int QhSMPCcIgLK [26], uvjhXdRxbO = (408 - 407), zZMDCW, sPbcp6, VVifhGagW [26], Xi9mSRfBXMt8;
    cin >> Xi9mSRfBXMt8;
    for (zZMDCW = (434 - 433); Xi9mSRfBXMt8 >= zZMDCW; zZMDCW++) {
        cin >> VVifhGagW[zZMDCW];
        QhSMPCcIgLK[zZMDCW] = (846 - 845);
    }
    for (zZMDCW = (142 - 140); zZMDCW <= Xi9mSRfBXMt8; zZMDCW++) {
        for (sPbcp6 = 1; sPbcp6 < zZMDCW; sPbcp6++)
            if (VVifhGagW[sPbcp6] >= VVifhGagW[zZMDCW])
                QhSMPCcIgLK[zZMDCW] = max (QhSMPCcIgLK[zZMDCW], QhSMPCcIgLK[sPbcp6] + 1);
        uvjhXdRxbO = max (uvjhXdRxbO, QhSMPCcIgLK[zZMDCW]);
    }
    cout << uvjhXdRxbO;
}

