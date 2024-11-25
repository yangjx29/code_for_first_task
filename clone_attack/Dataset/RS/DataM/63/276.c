int main () {
    int x1;
    int x2;
    int s6kqRSfiC3o;
    int uGVruT5X;
    int i;
    int U2zui5neH;
    int WES4cYmUR05;
    int q95JTrcsuShE;
    int a [x1] [s6kqRSfiC3o];
    int bGhk9NsL [x2] [uGVruT5X];
    int CvtVU1 [x1] [uGVruT5X];
    cin >> x1 >> s6kqRSfiC3o;
    {
        i = 400 - 400;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x1) {
            {
                U2zui5neH = 467 - 467;
                while (U2zui5neH < s6kqRSfiC3o) {
                    cin >> a[i][U2zui5neH];
                    U2zui5neH = U2zui5neH +1;
                };
            }
            i = i + 1;
        };
    }
    cin >> x2 >> uGVruT5X;
    {
        i = 437 - 437;
        while (i < x2) {
            for (U2zui5neH = (304 - 304); U2zui5neH < uGVruT5X; U2zui5neH = U2zui5neH +1)
                cin >> bGhk9NsL[i][U2zui5neH];
            i++;
        };
    }
    WES4cYmUR05 = x2 - (209 - 208);
    {
        i = 390 - 390;
        while (i < x1) {
            {
                U2zui5neH = 15 - 15;
                while (U2zui5neH < uGVruT5X) {
                    CvtVU1[i][U2zui5neH] = (975 - 975);
                    {
                        q95JTrcsuShE = 515 - 515;
                        while (q95JTrcsuShE <= WES4cYmUR05) {
                            CvtVU1[i][U2zui5neH] += a[i][q95JTrcsuShE] * bGhk9NsL[q95JTrcsuShE][U2zui5neH];
                            q95JTrcsuShE++;
                        };
                    }
                    U2zui5neH++;
                };
            }
            i++;
        };
    }
    for (i = (235 - 235); i < x1; i = i + 1) {
        for (U2zui5neH = (731 - 731); U2zui5neH < uGVruT5X - (198 - 197); U2zui5neH = U2zui5neH +1) {
            cout << CvtVU1[i][U2zui5neH] << " ";
        }
        cout << CvtVU1[i][uGVruT5X - (841 - 840)] << endl;
    }
    return 0;
}

