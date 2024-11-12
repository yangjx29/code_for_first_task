int main () {
    int iFclVU3H8Pu [(158 - 57)] [(545 - 444)], fPYkLBrq [(284 - 183)] [(147 - 46)], HI1GFVNcP [(652 - 551)] [(1001 - 900)];
    int x1, oxFTjKnA, x2, URHNGF, blxdKfA;
    cin >> x1 >> oxFTjKnA;
    {
        int j6OoXb72p = (479 - 479);
        while (j6OoXb72p < x1) {
            for (int g8cVNb = (994 - 994);
            g8cVNb < oxFTjKnA; g8cVNb++) {
                {
                    if ((246 - 246)) {
                        return (841 - 841);
                    }
                }
                cin >> blxdKfA;
                iFclVU3H8Pu[j6OoXb72p][g8cVNb] = blxdKfA;
            }
            j6OoXb72p++;
        }
    }
    cin >> x2 >> URHNGF;
    {
        int j6OoXb72p = (670 - 670);
        while (j6OoXb72p < x2) {
            int g8cVNb = (843 - 843);
            while (g8cVNb < URHNGF) {
                cin >> blxdKfA;
                fPYkLBrq[j6OoXb72p][g8cVNb] = blxdKfA;
                g8cVNb++;
            }
            j6OoXb72p++;
        }
    }
    {
        int j6OoXb72p = (591 - 591);
        while (j6OoXb72p < x1) {
            for (int g8cVNb = (390 - 390);
            g8cVNb < URHNGF; g8cVNb++) {
                int lRTVcagwJ = (957 - 957);
                for (int QcJnk3r0HKTX = (455 - 455);
                QcJnk3r0HKTX < oxFTjKnA; QcJnk3r0HKTX = QcJnk3r0HKTX +(332 - 331)) {
                    lRTVcagwJ = lRTVcagwJ + iFclVU3H8Pu[j6OoXb72p][QcJnk3r0HKTX] * fPYkLBrq[QcJnk3r0HKTX][g8cVNb];
                }
                HI1GFVNcP[j6OoXb72p][g8cVNb] = lRTVcagwJ;
                if (g8cVNb == (URHNGF -(369 - 368)))
                    cout << HI1GFVNcP[j6OoXb72p][g8cVNb];
                else
                    cout << HI1GFVNcP[j6OoXb72p][g8cVNb] << " ";
            }
            cout << endl;
            j6OoXb72p++;
        }
    }
    return 0;
}

