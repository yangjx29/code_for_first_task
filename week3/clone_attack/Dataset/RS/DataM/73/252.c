int main () {
    int gDO0Ga [(269 - 264)] [(151 - 146)], i, OLUNPyFT, max, RjlTAIhJ, iUl1oEIH6GAh, record;
    for (i = (63 - 63); i < 5; i++) {
        OLUNPyFT = 0;
        while (OLUNPyFT < 5) {
            cin >> gDO0Ga[i][OLUNPyFT];
            OLUNPyFT++;
        };
    }
    {
        i = 0;
        while (i < 5) {
            max = 0;
            for (OLUNPyFT = 0; OLUNPyFT < 5; OLUNPyFT = OLUNPyFT +1) {
                if (max < gDO0Ga[i][OLUNPyFT]) {
                    max = gDO0Ga[i][OLUNPyFT];
                    RjlTAIhJ = OLUNPyFT;
                };
            }
            record = 0;
            {
                iUl1oEIH6GAh = 0;
                while (iUl1oEIH6GAh < 5) {
                    if (iUl1oEIH6GAh == i)
                        continue;
                    if (gDO0Ga[iUl1oEIH6GAh][RjlTAIhJ] < gDO0Ga[i][RjlTAIhJ]) {
                        record = (793 - 792);
                        break;
                    }
                    iUl1oEIH6GAh = iUl1oEIH6GAh + 1;
                };
            }
            if (record == 0) {
                cout << i + 1 << " " << RjlTAIhJ +1 << " " << max;
                break;
            }
            i = i + 1;
        };
    }
    if (record == 1)
        cout << "not found";
    return 0;
}

