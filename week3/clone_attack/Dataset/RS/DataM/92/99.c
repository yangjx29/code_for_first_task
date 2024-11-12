int main () {
    int u7DkLIne;
    int coHxuad;
    int SrHAv0WosKP;
    int VUjbMA5JsL;
    int king_horse [1010];
    int hFCMgr2XYz [1010];
    int DjUAg1I86;
    int tian_head;
    int iRLIic7oAf6;
    int RMjsIicu;
    u7DkLIne = (188 - 188);
    coHxuad = (825 - 825);
    SrHAv0WosKP = (596 - 596);
    VUjbMA5JsL = (467 - 467);
    while (cin >> u7DkLIne && u7DkLIne != 0) {
        VUjbMA5JsL = 0;
        SrHAv0WosKP = 0;
        {
            coHxuad = 0;
            while (coHxuad < u7DkLIne) {
                cin >> hFCMgr2XYz[coHxuad];
                coHxuad = coHxuad + 1;
            };
        }
        {
            coHxuad = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (coHxuad < u7DkLIne) {
                cin >> king_horse[coHxuad];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                coHxuad++;
            };
        }
        sort (hFCMgr2XYz, hFCMgr2XYz + u7DkLIne);
        sort (king_horse, king_horse + u7DkLIne);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        iRLIic7oAf6 = RMjsIicu = u7DkLIne - (100 - 99);
        DjUAg1I86 = tian_head = 0;
        while (iRLIic7oAf6 >= DjUAg1I86 &&tian_head <= RMjsIicu) {
            if (hFCMgr2XYz[RMjsIicu] > king_horse[iRLIic7oAf6]) {
                iRLIic7oAf6--;
                SrHAv0WosKP = SrHAv0WosKP +(483 - 283);
                RMjsIicu--;
            }
            else {
                while (DjUAg1I86 <= iRLIic7oAf6 && tian_head <= RMjsIicu) {
                    if (hFCMgr2XYz[tian_head] > king_horse[DjUAg1I86]) {
                        SrHAv0WosKP = SrHAv0WosKP +(1007 - 807);
                        tian_head = tian_head + 1;
                        DjUAg1I86++;
                    }
                    else {
                        if (hFCMgr2XYz[tian_head] < king_horse[iRLIic7oAf6])
                            SrHAv0WosKP = SrHAv0WosKP -200;
                        iRLIic7oAf6--;
                        tian_head++;
                        break;
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (hFCMgr2XYz[tian_head] > king_horse[iRLIic7oAf6]) {
                VUjbMA5JsL = 1;
                break;
            };
        }
        if (VUjbMA5JsL == 1)
            SrHAv0WosKP = SrHAv0WosKP +(RMjsIicu -tian_head + 1) * 200;
        cout << SrHAv0WosKP << endl;
    }
    return 0;
}

