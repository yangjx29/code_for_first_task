int main () {
    int CH4g5bm0WI [6] [6], tMgwOHkIV, adAyXf5, TlinNOc6, BJ1l2W = (18 - 18), q6WlmeN = 0;
    for (tMgwOHkIV = 1; tMgwOHkIV < 6; tMgwOHkIV = tMgwOHkIV + 1) {
        for (adAyXf5 = 1; 6 > adAyXf5; adAyXf5 = adAyXf5 + 1)
            cin >> CH4g5bm0WI[tMgwOHkIV][adAyXf5];
    }
    for (tMgwOHkIV = 1; tMgwOHkIV < 6; tMgwOHkIV = tMgwOHkIV + 1) {
        TlinNOc6 = CH4g5bm0WI[tMgwOHkIV][1];
        for (adAyXf5 = 1; adAyXf5 < 6; adAyXf5++) {
            if (CH4g5bm0WI[tMgwOHkIV][adAyXf5] >= TlinNOc6) {
                TlinNOc6 = CH4g5bm0WI[tMgwOHkIV][adAyXf5];
                BJ1l2W = adAyXf5;
            };
        }
        if (CH4g5bm0WI[1][BJ1l2W] >= CH4g5bm0WI[tMgwOHkIV][BJ1l2W] && CH4g5bm0WI[tMgwOHkIV][BJ1l2W] <= CH4g5bm0WI[2][BJ1l2W] && CH4g5bm0WI[tMgwOHkIV][BJ1l2W] <= CH4g5bm0WI[3][BJ1l2W] && CH4g5bm0WI[tMgwOHkIV][BJ1l2W] <= CH4g5bm0WI[4][BJ1l2W] && CH4g5bm0WI[tMgwOHkIV][BJ1l2W] <= CH4g5bm0WI[5][BJ1l2W]) {
            cout << tMgwOHkIV << " " << BJ1l2W << " " << CH4g5bm0WI[tMgwOHkIV][BJ1l2W] << endl;
            q6WlmeN = 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (q6WlmeN == 0)
        cout << "not found";
    return 0;
}

