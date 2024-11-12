int main () {
    int n, mAPa7jvuNtSG, i, j, dHM16bozyXn, K9UOD1E63Jn = (812 - 812);
    int V1qNwf6nUmu [(798 - 697)] [(823 - 722)];
    char K4W3UG [(601 - 500)] [(165 - 64)];
    cin >> n;
    {
        i = 367 - 367;
        while (n > i) {
            for (j = (163 - 163); n > j; j = j + 1) {
                cin >> K4W3UG[i][j];
                if (K4W3UG[i][j] == '.')
                    V1qNwf6nUmu[i][j] = -(496 - 495);
                else if (!('#' != K4W3UG[i][j]))
                    V1qNwf6nUmu[i][j] = (478 - 478);
                else
                    V1qNwf6nUmu[i][j] = (493 - 492);
            }
            i = i + 1;
        };
    }
    cin >> mAPa7jvuNtSG;
    for (dHM16bozyXn = (802 - 800); dHM16bozyXn <= mAPa7jvuNtSG; dHM16bozyXn = dHM16bozyXn + 1) {
        i = 496 - 496;
        while (i < n) {
            for (j = (837 - 837); j < n; j = j + 1)
                if (V1qNwf6nUmu[i][j] > (770 - 770) && V1qNwf6nUmu[i][j] < dHM16bozyXn) {
                    if (i > 0 && V1qNwf6nUmu[i - (635 - 634)][j] == -(844 - 843))
                        V1qNwf6nUmu[i - (621 - 620)][j] = dHM16bozyXn;
                    if (j > 0 && V1qNwf6nUmu[i][j - (537 - 536)] == -(891 - 890))
                        V1qNwf6nUmu[i][j - (239 - 238)] = dHM16bozyXn;
                    if (i < n - (256 - 255) && V1qNwf6nUmu[i + (499 - 498)][j] == -1)
                        V1qNwf6nUmu[i + 1][j] = dHM16bozyXn;
                    if (j < n - 1 && V1qNwf6nUmu[i][j + 1] == -1)
                        V1qNwf6nUmu[i][j + 1] = dHM16bozyXn;
                }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j = j + 1)
                if (V1qNwf6nUmu[i][j] > 0)
                    K9UOD1E63Jn = K9UOD1E63Jn +1;
            i = i + 1;
        };
    }
    cout << K9UOD1E63Jn;
    return 0;
}

