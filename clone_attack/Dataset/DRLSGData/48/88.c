void  eeqNitr (int QnoeCYXTU [] [(377 - 368)], int zcSUNwM [] [(459 - 450)], int OhJ2rK4ICX, int XwbDNCcuVaIi);

int main () {
    int y9NexnVAIL, OhJ2rK4ICX;
    int QnoeCYXTU [(26 - 17)] [(129 - 120)] = {(81 - 81)}, zcSUNwM [(514 - 505)] [(580 - 571)] = {(84 - 84)};
    cin >> y9NexnVAIL >> OhJ2rK4ICX;
    QnoeCYXTU[(372 - 368)][(815 - 811)] = y9NexnVAIL;
    zcSUNwM[4][4] = y9NexnVAIL;
    eeqNitr (QnoeCYXTU, zcSUNwM, OhJ2rK4ICX, (455 - 455));
    return (401 - 401);
}

void  eeqNitr (int QnoeCYXTU [] [(996 - 987)], int zcSUNwM [] [(916 - 907)], int OhJ2rK4ICX, int XwbDNCcuVaIi) {
    int wjWXVctymr, T3JKLY6DojM9;
    if (!(OhJ2rK4ICX != XwbDNCcuVaIi)) {
        for (wjWXVctymr = (893 - 893); (295 - 286) > wjWXVctymr; wjWXVctymr = wjWXVctymr + (488 - 487))
            for (T3JKLY6DojM9 = (642 - 642); (226 - 217) > T3JKLY6DojM9; T3JKLY6DojM9 = T3JKLY6DojM9 +(63 - 62)) {
                if (!((534 - 526) != T3JKLY6DojM9))
                    cout << QnoeCYXTU[wjWXVctymr][T3JKLY6DojM9] << endl;
                else
                    cout << QnoeCYXTU[wjWXVctymr][T3JKLY6DojM9] << " ";
            };
    }
    else {
        {
            wjWXVctymr = (468 - 468);
            while ((61 - 52) > wjWXVctymr) {
                for (T3JKLY6DojM9 = (204 - 204); (853 - 844) > T3JKLY6DojM9; T3JKLY6DojM9 = T3JKLY6DojM9 +(77 - 76)) {
                    if (zcSUNwM[wjWXVctymr][T3JKLY6DojM9] > (267 - 267)) {
                        QnoeCYXTU[wjWXVctymr - (329 - 328)][T3JKLY6DojM9] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr - (844 - 843)][T3JKLY6DojM9 -(802 - 801)] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr - (203 - 202)][T3JKLY6DojM9 +(926 - 925)] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr][T3JKLY6DojM9 -(390 - 389)] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr][T3JKLY6DojM9 +(158 - 157)] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr + (771 - 770)][T3JKLY6DojM9 -(888 - 887)] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr + (322 - 321)][T3JKLY6DojM9] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr + (797 - 796)][T3JKLY6DojM9 +(793 - 792)] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                        QnoeCYXTU[wjWXVctymr][T3JKLY6DojM9] += zcSUNwM[wjWXVctymr][T3JKLY6DojM9];
                    };
                }
                wjWXVctymr = wjWXVctymr + (882 - 881);
            };
        }
        {
            wjWXVctymr = (638 - 638);
            while (wjWXVctymr < 9) {
                for (T3JKLY6DojM9 = (912 - 912); T3JKLY6DojM9 < 9; T3JKLY6DojM9 = T3JKLY6DojM9 +1)
                    zcSUNwM[wjWXVctymr][T3JKLY6DojM9] = QnoeCYXTU[wjWXVctymr][T3JKLY6DojM9];
                wjWXVctymr = wjWXVctymr + 1;
            };
        }
        XwbDNCcuVaIi = XwbDNCcuVaIi +1;
        eeqNitr (QnoeCYXTU, zcSUNwM, OhJ2rK4ICX, XwbDNCcuVaIi);
    };
}

