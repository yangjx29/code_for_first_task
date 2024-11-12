int main () {
    int mloySHTiD [(382 - 377)] [(605 - 600)] = {{(535 - 535), (336 - 336)}}, f5KoEMvaO [5] = {(973 - 973)}, x2StpH4A [5] = {(244 - 244)}, bhZNlCDOkIFX, JRPvD3, KbhzNmnP = (110 - 110);
    for (bhZNlCDOkIFX = (64 - 64); (526 - 522) >= bhZNlCDOkIFX; bhZNlCDOkIFX = bhZNlCDOkIFX + 1) {
        for (JRPvD3 = (44 - 44); JRPvD3 <= (282 - 278); JRPvD3 = JRPvD3 +1)
            cin >> mloySHTiD[bhZNlCDOkIFX][JRPvD3];
    }
    for (bhZNlCDOkIFX = (986 - 986); (913 - 909) >= bhZNlCDOkIFX; bhZNlCDOkIFX = bhZNlCDOkIFX + 1) {
        f5KoEMvaO[bhZNlCDOkIFX] = mloySHTiD[bhZNlCDOkIFX][(828 - 828)];
        x2StpH4A[bhZNlCDOkIFX] = mloySHTiD[0][bhZNlCDOkIFX];
        for (JRPvD3 = (978 - 977); JRPvD3 <= (196 - 192); JRPvD3 = JRPvD3 +1) {
            if (mloySHTiD[bhZNlCDOkIFX][JRPvD3] > f5KoEMvaO[bhZNlCDOkIFX])
                f5KoEMvaO[bhZNlCDOkIFX] = mloySHTiD[bhZNlCDOkIFX][JRPvD3];
            if (mloySHTiD[JRPvD3][bhZNlCDOkIFX] < x2StpH4A[bhZNlCDOkIFX])
                x2StpH4A[bhZNlCDOkIFX] = mloySHTiD[JRPvD3][bhZNlCDOkIFX];
        }
    }
    for (bhZNlCDOkIFX = 0; bhZNlCDOkIFX <= 4; bhZNlCDOkIFX = bhZNlCDOkIFX + 1) {
        for (JRPvD3 = 0; JRPvD3 <= 4; JRPvD3 = JRPvD3 +1) {
            if (mloySHTiD[bhZNlCDOkIFX][JRPvD3] == f5KoEMvaO[bhZNlCDOkIFX] && mloySHTiD[bhZNlCDOkIFX][JRPvD3] == x2StpH4A[JRPvD3]) {
                KbhzNmnP = 1;
                cout << bhZNlCDOkIFX + (929 - 928) << " " << JRPvD3 +(413 - 412) << " " << mloySHTiD[bhZNlCDOkIFX][JRPvD3] << endl;
            }
        }
    }
    if (KbhzNmnP == 0)
        cout << "not found";
    return 0;
}

