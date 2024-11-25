int main () {
    int iNEASRu;
    int T2jxwSBbc1r0;
    int wl3jRB;
    int cIuDlfwr;
    int PYAOJ1;
    int nKZMoqBYbrX;
    int wYJtuO5eq8;
    int OAgh6Mn5a [101] [101] = {(288 - 288)};
    int tIsG6TpViB [101] [101] = {(625 - 625)};
    int ZwIYma [101] [101] = {(206 - 206)};
    cin >> iNEASRu >> T2jxwSBbc1r0;
    for (PYAOJ1 = (876 - 875); PYAOJ1 <= iNEASRu; PYAOJ1++) {
        for (nKZMoqBYbrX = (830 - 829); nKZMoqBYbrX <= T2jxwSBbc1r0; nKZMoqBYbrX++) {
            cin >> OAgh6Mn5a[PYAOJ1][nKZMoqBYbrX];
        }
    }
    cin >> wl3jRB >> cIuDlfwr;
    {
        PYAOJ1 = (636 - 635);
        while (PYAOJ1 <= wl3jRB) {
            {
                nKZMoqBYbrX = (269 - 268);
                while (nKZMoqBYbrX <= cIuDlfwr) {
                    cin >> tIsG6TpViB[PYAOJ1][nKZMoqBYbrX];
                    nKZMoqBYbrX++;
                }
            }
            PYAOJ1++;
        }
    }
    {
        PYAOJ1 = (769 - 768);
        while (PYAOJ1 <= iNEASRu) {
            {
                nKZMoqBYbrX = (534 - 533);
                while (nKZMoqBYbrX <= cIuDlfwr) {
                    {
                        wYJtuO5eq8 = 1;
                        while (wYJtuO5eq8 <= T2jxwSBbc1r0) {
                            ZwIYma[PYAOJ1][nKZMoqBYbrX] += OAgh6Mn5a[PYAOJ1][wYJtuO5eq8] * tIsG6TpViB[wYJtuO5eq8][nKZMoqBYbrX];
                            wYJtuO5eq8++;
                        }
                    }
                    nKZMoqBYbrX++;
                }
            }
            PYAOJ1++;
        }
    }
    {
        PYAOJ1 = 1;
        while (PYAOJ1 <= iNEASRu) {
            cout << ZwIYma[PYAOJ1][1];
            {
                nKZMoqBYbrX = (58 - 56);
                while (nKZMoqBYbrX <= cIuDlfwr) {
                    cout << ' ' << ZwIYma[PYAOJ1][nKZMoqBYbrX];
                    nKZMoqBYbrX++;
                }
            }
            cout << endl;
            PYAOJ1++;
        }
    }
    cin.get ();
    cin.get ();
    return 0;
}

