int XwtA5Q = 0, Pa0fKMyI7gDP [100] [2];
int Vs0RYZVWGl = 0;
int Ivq6BVOiYXzA;

void  pxpi6fMmz (char uIaBCmNM) {
    if (!(-1 != XwtA5Q))
        return;
    char FKPtuQe;
    cin >> FKPtuQe;
    if (!(uIaBCmNM != FKPtuQe)) {
        XwtA5Q = XwtA5Q +1;
        Vs0RYZVWGl = Vs0RYZVWGl +1;
        Pa0fKMyI7gDP[Vs0RYZVWGl][0] = 0;
        pxpi6fMmz (uIaBCmNM);
        return;
    }
    else {
        Vs0RYZVWGl = Vs0RYZVWGl +1;
        Pa0fKMyI7gDP[Vs0RYZVWGl][0] = 1;
        {
            int jxHWzXDf = Vs0RYZVWGl;
            while (1) {
                if (Pa0fKMyI7gDP[jxHWzXDf][0] == 0 && Pa0fKMyI7gDP[jxHWzXDf][1]) {
                    Ivq6BVOiYXzA = jxHWzXDf;
                    Pa0fKMyI7gDP[jxHWzXDf][1] = 0;
                    break;
                }
                jxHWzXDf = jxHWzXDf - 1;
            }
        }
        cout << Ivq6BVOiYXzA << ' ' << Vs0RYZVWGl << endl;
        XwtA5Q--;
        pxpi6fMmz (uIaBCmNM);
        return;
    }
}

int main () {
    {
        int jxHWzXDf = 0;
        while (jxHWzXDf < 100) {
            Pa0fKMyI7gDP[jxHWzXDf][1] = 1;
            jxHWzXDf++;
        }
    }
    char uIaBCmNM;
    cin >> uIaBCmNM;
    pxpi6fMmz (uIaBCmNM);
    return 0;
}

