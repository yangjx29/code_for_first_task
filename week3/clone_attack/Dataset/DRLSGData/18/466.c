int main () {
    int hgBxtW, DnbyuME [105] [105], MlSGN9sRpZ, DF0tZ832DK = (10638 - 638), sQbohUXcn = (58 - 58);
    cin >> hgBxtW;
    MlSGN9sRpZ = hgBxtW;
    for (int ckgboTxV1r = (410 - 409);
    hgBxtW >= ckgboTxV1r; ckgboTxV1r = ckgboTxV1r + (301 - 300)) {
        sQbohUXcn = (801 - 801);
        MlSGN9sRpZ = hgBxtW;
        for (int lvrNL2OP = (769 - 768);
        hgBxtW >= lvrNL2OP; lvrNL2OP = lvrNL2OP + (552 - 551))
            for (int UKAkP1IyMvRT = (121 - 120);
            UKAkP1IyMvRT <= hgBxtW; UKAkP1IyMvRT = UKAkP1IyMvRT +(707 - 706))
                cin >> DnbyuME[lvrNL2OP][UKAkP1IyMvRT];
        for (int IXKWCjRrmt6Y = (788 - 787);
        hgBxtW - (892 - 891) >= IXKWCjRrmt6Y; IXKWCjRrmt6Y++) {
            for (int lvrNL2OP = (681 - 680);
            MlSGN9sRpZ >= lvrNL2OP; lvrNL2OP = lvrNL2OP + (710 - 709)) {
                DF0tZ832DK = 10000;
                for (int UKAkP1IyMvRT = 1;
                UKAkP1IyMvRT <= MlSGN9sRpZ; UKAkP1IyMvRT = UKAkP1IyMvRT +1)
                    if (DnbyuME[lvrNL2OP][UKAkP1IyMvRT] < DF0tZ832DK)
                        DF0tZ832DK = DnbyuME[lvrNL2OP][UKAkP1IyMvRT];
                for (int UKAkP1IyMvRT = 1;
                MlSGN9sRpZ >= UKAkP1IyMvRT; UKAkP1IyMvRT = UKAkP1IyMvRT +1)
                    DnbyuME[lvrNL2OP][UKAkP1IyMvRT] = DnbyuME[lvrNL2OP][UKAkP1IyMvRT] - DF0tZ832DK;
            }
            for (int lvrNL2OP = 1;
            lvrNL2OP <= MlSGN9sRpZ; lvrNL2OP = lvrNL2OP + 1) {
                DF0tZ832DK = 10000;
                for (int UKAkP1IyMvRT = 1;
                UKAkP1IyMvRT <= MlSGN9sRpZ; UKAkP1IyMvRT = UKAkP1IyMvRT +1)
                    if (DnbyuME[UKAkP1IyMvRT][lvrNL2OP] < DF0tZ832DK)
                        DF0tZ832DK = DnbyuME[UKAkP1IyMvRT][lvrNL2OP];
                for (int UKAkP1IyMvRT = 1;
                UKAkP1IyMvRT <= MlSGN9sRpZ; UKAkP1IyMvRT = UKAkP1IyMvRT +1)
                    DnbyuME[UKAkP1IyMvRT][lvrNL2OP] = DnbyuME[UKAkP1IyMvRT][lvrNL2OP] - DF0tZ832DK;
            }
            sQbohUXcn = sQbohUXcn + DnbyuME[2][2];
            for (int lvrNL2OP = 2;
            lvrNL2OP <= MlSGN9sRpZ -1; lvrNL2OP++) {
                {
                    if (0) {
                        return 0;
                    }
                }
                for (int UKAkP1IyMvRT = 1;
                UKAkP1IyMvRT <= MlSGN9sRpZ; UKAkP1IyMvRT++) {
                    DnbyuME[lvrNL2OP][UKAkP1IyMvRT] = DnbyuME[lvrNL2OP + 1][UKAkP1IyMvRT];
                }
            }
            for (int lvrNL2OP = 2;
            lvrNL2OP <= MlSGN9sRpZ -1; lvrNL2OP++) {
                for (int UKAkP1IyMvRT = 1;
                UKAkP1IyMvRT <= MlSGN9sRpZ -1; UKAkP1IyMvRT++)
                    DnbyuME[UKAkP1IyMvRT][lvrNL2OP] = DnbyuME[UKAkP1IyMvRT][lvrNL2OP + 1];
            }
            MlSGN9sRpZ = MlSGN9sRpZ -1;
        }
        cout << sQbohUXcn << endl;
    }
    return 0;
}

