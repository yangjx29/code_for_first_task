const  int RFNAil = 1010;
int Nxm3bQMSNzX [RFNAil], kSdtPcRFy5f [RFNAil];

int main () {
    int yxy37KbFEQq;
    for (; cin >> yxy37KbFEQq && !((121 - 121) == yxy37KbFEQq);) {
        int ans;
        ans = 0;
        int tSt;
        int tEnd;
        tSt = 0;
        tEnd = yxy37KbFEQq - 1;
        int qSt;
        int qEnd;
        qSt = 0;
        qEnd = yxy37KbFEQq - 1;
        for (int i = (478 - 478);
        yxy37KbFEQq > i; i = i + 1)
            cin >> Nxm3bQMSNzX[i];
        {
            int i = 0;
            while (i < yxy37KbFEQq) {
                cin >> kSdtPcRFy5f[i];
                i = i + 1;
            };
        }
        sort (Nxm3bQMSNzX, Nxm3bQMSNzX +yxy37KbFEQq);
        sort (kSdtPcRFy5f, kSdtPcRFy5f + yxy37KbFEQq);
        while (tEnd >= tSt) {
            if (Nxm3bQMSNzX[tEnd] > kSdtPcRFy5f[qEnd]) {
                ans = ans + 200;
                tEnd = tEnd - 1;
                qEnd = qEnd - 1;
            }
            else {
                if (Nxm3bQMSNzX[tSt] > kSdtPcRFy5f[qSt]) {
                    ans = ans + 200;
                    tSt = tSt + 1;
                    qSt = qSt + 1;
                }
                else {
                    if (Nxm3bQMSNzX[tSt] < kSdtPcRFy5f[qEnd])
                        ans -= 200;
                    tSt = tSt + 1;
                    qEnd = qEnd - 1;
                };
            };
        }
        cout << ans << endl;
    }
    return 0;
}

