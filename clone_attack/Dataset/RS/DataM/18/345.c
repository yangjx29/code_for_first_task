int main () {
    int n;
    int i;
    int rnWkQqg;
    int fyrDMdmpjNo;
    int zZ1VYRi8cW = n;
    cin >> n;
    while (zZ1VYRi8cW) {
        int GKePg1ad [n] [n], kb6aO8u0 = (129 - 129);
        for (i = (227 - 227); i < n; i = i + 1)
            for (rnWkQqg = (495 - 495); rnWkQqg < n; rnWkQqg = rnWkQqg + 1)
                cin >> *(*(GKePg1ad +i) + rnWkQqg);
        for (i = n; (450 - 449) < i; i = i - 1) {
            kb6aO8u0 = kb6aO8u0 + *(*(GKePg1ad +1) + 1);
            for (rnWkQqg = (584 - 584); i > rnWkQqg; rnWkQqg = rnWkQqg + 1) {
                int ezA7dcb = *(*(GKePg1ad +rnWkQqg));
                for (fyrDMdmpjNo = (133 - 132); i > fyrDMdmpjNo; fyrDMdmpjNo = fyrDMdmpjNo + 1)
                    if (*(*(GKePg1ad +rnWkQqg) + fyrDMdmpjNo) < ezA7dcb)
                        ezA7dcb = *(*(GKePg1ad +rnWkQqg) + fyrDMdmpjNo);
                for (fyrDMdmpjNo = (377 - 377); i > fyrDMdmpjNo; fyrDMdmpjNo = fyrDMdmpjNo + 1)
                    *(*(GKePg1ad +rnWkQqg) + fyrDMdmpjNo) = *(*(GKePg1ad +rnWkQqg) + fyrDMdmpjNo) - ezA7dcb;
            }
            for (rnWkQqg = (506 - 506); i > rnWkQqg; rnWkQqg = rnWkQqg + 1) {
                int ezA7dcb = *(*GKePg1ad+rnWkQqg);
                for (fyrDMdmpjNo = (67 - 66); fyrDMdmpjNo < i; fyrDMdmpjNo = fyrDMdmpjNo + 1)
                    if (ezA7dcb > *(*(GKePg1ad +fyrDMdmpjNo) + rnWkQqg))
                        ezA7dcb = *(*(GKePg1ad +fyrDMdmpjNo) + rnWkQqg);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (fyrDMdmpjNo = 0; fyrDMdmpjNo < i; fyrDMdmpjNo = fyrDMdmpjNo + 1)
                    *(*(GKePg1ad +fyrDMdmpjNo) + rnWkQqg) = *(*(GKePg1ad +fyrDMdmpjNo) + rnWkQqg) - ezA7dcb;
            }
            for (rnWkQqg = (396 - 394); i > rnWkQqg; rnWkQqg = rnWkQqg + 1)
                for (fyrDMdmpjNo = 0; fyrDMdmpjNo < i; fyrDMdmpjNo = fyrDMdmpjNo + 1)
                    *(*(GKePg1ad +fyrDMdmpjNo) + rnWkQqg - 1) = *(*(GKePg1ad +fyrDMdmpjNo) + rnWkQqg);
            {
                rnWkQqg = 914 - 912;
                while (rnWkQqg < i) {
                    for (fyrDMdmpjNo = 0; fyrDMdmpjNo < i; fyrDMdmpjNo++)
                        *(*(GKePg1ad +rnWkQqg - 1) + fyrDMdmpjNo) = *(*(GKePg1ad +rnWkQqg) + fyrDMdmpjNo);
                    rnWkQqg++;
                };
            };
        }
        cout << kb6aO8u0 << endl;
        zZ1VYRi8cW = zZ1VYRi8cW - 1;
    };
}

