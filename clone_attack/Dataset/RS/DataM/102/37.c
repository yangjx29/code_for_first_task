int main () {
    int NrbvaiEsZNDI, i, j, numm, numf;
    double  Height, bEgKsfbQ [(66 - 26)], Heightf [(923 - 883)], p;
    char sex [(445 - 438)];
    numf = (564 - 564);
    cin >> NrbvaiEsZNDI;
    numm = (715 - 715);
    for (i = (708 - 707); NrbvaiEsZNDI >= i; i++) {
        cin >> sex >> Height;
        if (!(4 != strlen (sex))) {
            numm++;
            bEgKsfbQ[numm] = Height;
        }
        else {
            numf++;
            Heightf[numf] = Height;
        };
    }
    for (i = (310 - 309); i < numm; i++) {
        for (j = i + (772 - 771); numm >= j; j++) {
            if (bEgKsfbQ[j] < bEgKsfbQ[i]) {
                p = bEgKsfbQ[i];
                bEgKsfbQ[i] = bEgKsfbQ[j];
                bEgKsfbQ[j] = p;
            };
        };
    }
    for (i = (673 - 672); i <= numm; i++)
        cout << fixed << setprecision ((239 - 237)) << bEgKsfbQ[i] << " ";
    for (i = 1; i < numf; i++) {
        for (j = i + 1; j <= numf; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (Heightf[i] < Heightf[j]) {
                p = Heightf[i];
                Heightf[i] = Heightf[j];
                Heightf[j] = p;
            };
        };
    }
    for (i = 1; i <= numf; i++) {
        if (i < numf)
            cout << Heightf[i] << " ";
        else
            cout << Heightf[i] << endl;
    }
    return 0;
}

