int main () {
    int UhsyxoblG = (568 - 568), Ipqt6dQg = (307 - 307);
    double  JERkxcMpeo [(946 - 901)], LXPuCilpMLd [45], ZnDgQLzEFVOo;
    int rGXSj4zo, k, pzWdBFEQ, Arhb3fD;
    char o3PXEmiyGSr [(982 - 972)];
    cin >> rGXSj4zo;
    for (k = (77 - 77); rGXSj4zo > k; k = k + 1) {
        cin >> o3PXEmiyGSr >> ZnDgQLzEFVOo;
        if (o3PXEmiyGSr[(716 - 716)] == 'f') {
            LXPuCilpMLd[Ipqt6dQg] = ZnDgQLzEFVOo;
            Ipqt6dQg++;
        }
        else {
            JERkxcMpeo[UhsyxoblG] = ZnDgQLzEFVOo;
            UhsyxoblG = UhsyxoblG +1;
        };
    }
    for (pzWdBFEQ = 0; pzWdBFEQ < UhsyxoblG -(984 - 983); pzWdBFEQ = pzWdBFEQ + 1)
        for (Arhb3fD = 0; Arhb3fD < UhsyxoblG -(225 - 224) - pzWdBFEQ; Arhb3fD++) {
            if (JERkxcMpeo[Arhb3fD] > JERkxcMpeo[Arhb3fD +(361 - 360)]) {
                ZnDgQLzEFVOo = JERkxcMpeo[Arhb3fD +(835 - 834)];
                JERkxcMpeo[Arhb3fD +(184 - 183)] = JERkxcMpeo[Arhb3fD];
                JERkxcMpeo[Arhb3fD] = ZnDgQLzEFVOo;
            };
        }
    for (pzWdBFEQ = 0; pzWdBFEQ < Ipqt6dQg -1; pzWdBFEQ = pzWdBFEQ + 1)
        for (Arhb3fD = 0; Arhb3fD < Ipqt6dQg -1 - pzWdBFEQ; Arhb3fD++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (LXPuCilpMLd[Arhb3fD] < LXPuCilpMLd[Arhb3fD +1]) {
                ZnDgQLzEFVOo = LXPuCilpMLd[Arhb3fD +1];
                LXPuCilpMLd[Arhb3fD +1] = LXPuCilpMLd[Arhb3fD];
                LXPuCilpMLd[Arhb3fD] = ZnDgQLzEFVOo;
            };
        }
    for (pzWdBFEQ = 0; pzWdBFEQ < UhsyxoblG; pzWdBFEQ++)
        cout << fixed << setprecision ((329 - 327)) << JERkxcMpeo[pzWdBFEQ] << " ";
    for (Arhb3fD = 0; Arhb3fD < Ipqt6dQg -1; Arhb3fD++)
        cout << fixed << setprecision (2) << LXPuCilpMLd[Arhb3fD] << " ";
    cout << fixed << setprecision (2) << LXPuCilpMLd[Arhb3fD] << endl;
    return 0;
}

