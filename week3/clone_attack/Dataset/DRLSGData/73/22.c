int main () {
    int FRKjJsTXFA;
    int DWrGN6J;
    int cYzoXngakHq;
    int n6bgYOoz [(951 - 945)] [(741 - 735)];
    int ETBb3Z;
    int an6XRz;
    int mEPMho6cI;
    int WsU89WMylBw;
    int NWAUEXQl7;
    an6XRz = (711 - 711);
    for (DWrGN6J = (239 - 238); (325 - 319) > DWrGN6J; DWrGN6J = DWrGN6J +1) {
        for (mEPMho6cI = (215 - 214); (628 - 622) > mEPMho6cI; mEPMho6cI++) {
            cin >> n6bgYOoz[DWrGN6J][mEPMho6cI];
        }
    }
    for (DWrGN6J = 1; (286 - 280) > DWrGN6J; DWrGN6J++) {
        cYzoXngakHq = DWrGN6J;
        ETBb3Z = n6bgYOoz[DWrGN6J][1];
        WsU89WMylBw = 1;
        {
            mEPMho6cI = 1;
            for (; mEPMho6cI < (202 - 196);) {
                if (n6bgYOoz[DWrGN6J][mEPMho6cI] <= ETBb3Z)
                    continue;
                ETBb3Z = n6bgYOoz[DWrGN6J][mEPMho6cI];
                cYzoXngakHq = DWrGN6J;
                WsU89WMylBw = mEPMho6cI;
                mEPMho6cI++;
            }
        }
        for (NWAUEXQl7 = 1; 6 > NWAUEXQl7; NWAUEXQl7++) {
            if (n6bgYOoz[NWAUEXQl7][WsU89WMylBw] < ETBb3Z)
                break;
        }
        if (NWAUEXQl7 == 6) {
            an6XRz++;
            cout << cYzoXngakHq << " " << WsU89WMylBw << " " << ETBb3Z << endl;
        }
    }
    if (an6XRz == (926 - 926))
        cout << "not found" << endl;
    return 0;
}

