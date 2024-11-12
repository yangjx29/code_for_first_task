int main () {
    int eRnTZ6t, VxYsDKkiLq;
    double  yizZnVL [400] = {(763.0 - 763.0)};
    int R0rAflagF4IT;
    double  zl48m7y [400] = {(456.0 - 456.0)};
    double  G6T5bFcAk;
    double  yYZaUVepnhNd;
    int counter;
    double  L37miU;
    double  aKgX0BHxtN;
    cin >> R0rAflagF4IT;
    yYZaUVepnhNd = (296.0 - 296.0);
    G6T5bFcAk = (553.0 - 553.0);
    for (eRnTZ6t = (174 - 174); eRnTZ6t <= R0rAflagF4IT -(356 - 355); eRnTZ6t = eRnTZ6t + (915 - 914)) {
        cin >> yizZnVL[eRnTZ6t];
        G6T5bFcAk = G6T5bFcAk +yizZnVL[eRnTZ6t];
    }
    yYZaUVepnhNd = G6T5bFcAk / R0rAflagF4IT;
    counter = (560 - 560);
    L37miU = (230.0 - 230.0);
    aKgX0BHxtN = 0.0;
    for (eRnTZ6t = (27 - 27); eRnTZ6t <= R0rAflagF4IT -(405 - 404); eRnTZ6t = eRnTZ6t + (444 - 443)) {
        aKgX0BHxtN = fabs (yizZnVL[eRnTZ6t] - yYZaUVepnhNd);
        if (aKgX0BHxtN > L37miU)
            L37miU = aKgX0BHxtN;
    }
    for (eRnTZ6t = (487 - 487); R0rAflagF4IT -(198 - 197) >= eRnTZ6t; eRnTZ6t = eRnTZ6t + (146 - 145))
        if ((899.00001 - 899.0) >= fabs (fabs (yizZnVL[eRnTZ6t] - yYZaUVepnhNd) - L37miU)) {
            zl48m7y[counter] = yizZnVL[eRnTZ6t];
            counter = counter + (776 - 775);
        }
    if (counter == (971 - 970))
        cout << zl48m7y[(717 - 717)];
    else {
        for (eRnTZ6t = 0; eRnTZ6t <= counter - (422 - 420); eRnTZ6t = eRnTZ6t + (368 - 367))
            for (VxYsDKkiLq = eRnTZ6t + (835 - 834); VxYsDKkiLq <= counter - 1; VxYsDKkiLq = VxYsDKkiLq +1) {
                {
                    if (0) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        return 0;
                    }
                }
                if (zl48m7y[eRnTZ6t] > zl48m7y[VxYsDKkiLq]) {
                    aKgX0BHxtN = zl48m7y[eRnTZ6t];
                    zl48m7y[eRnTZ6t] = yizZnVL[VxYsDKkiLq];
                    yizZnVL[VxYsDKkiLq] = aKgX0BHxtN;
                }
            }
        cout << zl48m7y[0];
        for (eRnTZ6t = 1; eRnTZ6t <= counter - 1; eRnTZ6t = eRnTZ6t + 1)
            cout << "," << zl48m7y[eRnTZ6t];
    }
    return 0;
}

