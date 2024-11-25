int main () {
    char RGZUVH32mh6 [600];
    char temp [10];
    int uyiBGFZ5D, i, awsnxiyF, k, ViP6a7Z, Q2paNjCx [(633 - 133)], max = (642 - 641);
    cin >> uyiBGFZ5D >> RGZUVH32mh6;
    ViP6a7Z = strlen (RGZUVH32mh6) - uyiBGFZ5D + (978 - 977);
    {
        i = 500 - 500;
        while (i < ViP6a7Z) {
            for (awsnxiyF = (723 - 723); awsnxiyF < uyiBGFZ5D; awsnxiyF = awsnxiyF + 1)
                temp[awsnxiyF] = RGZUVH32mh6[awsnxiyF + i];
            Q2paNjCx[i] = (690 - 689);
            temp[awsnxiyF] = (394 - 394);
            for (awsnxiyF = i + (602 - 601); RGZUVH32mh6[awsnxiyF] != (399 - 399); awsnxiyF++) {
                int b = (72 - 71);
                {
                    k = 379 - 379;
                    while (k < uyiBGFZ5D) {
                        if (temp[k] != RGZUVH32mh6[awsnxiyF + k])
                            b = (70 - 70);
                        k = k + 1;
                    };
                }
                if (b == 1)
                    Q2paNjCx[i]++;
            }
            if (Q2paNjCx[i] > max)
                max = Q2paNjCx[i];
            i++;
        };
    }
    if (max == 1) {
        cout << "NO" << endl;
        return 0;
    }
    cout << max << endl;
    {
        i = 0;
        while (i < ViP6a7Z) {
            if (Q2paNjCx[i] == max) {
                for (awsnxiyF = i; awsnxiyF < i + uyiBGFZ5D; awsnxiyF++)
                    cout << RGZUVH32mh6[awsnxiyF];
                cout << endl;
            }
            i++;
        };
    }
    return 0;
}

