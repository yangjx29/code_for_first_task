int main () {
    int fs71rx8nuGa [100] [100], M2YRBuj [100] [100], lnReB5i [100] [100];
    int N7K8oUsOANc, HX9Diq, x2, ntBCX4UcFmz;
    int Ox1YLUXr, pHY8bU4rGv, k;
    cin >> N7K8oUsOANc >> HX9Diq;
    {
        Ox1YLUXr = 575 - 575;
        while (N7K8oUsOANc > Ox1YLUXr) {
            for (pHY8bU4rGv = (939 - 939); HX9Diq > pHY8bU4rGv; pHY8bU4rGv = pHY8bU4rGv + 1)
                cin >> fs71rx8nuGa[Ox1YLUXr][pHY8bU4rGv];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Ox1YLUXr = Ox1YLUXr +1;
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
    cin >> x2 >> ntBCX4UcFmz;
    for (Ox1YLUXr = 0; x2 > Ox1YLUXr; Ox1YLUXr = Ox1YLUXr +1)
        for (pHY8bU4rGv = 0; ntBCX4UcFmz > pHY8bU4rGv; pHY8bU4rGv = pHY8bU4rGv + 1)
            cin >> M2YRBuj[Ox1YLUXr][pHY8bU4rGv];
    for (Ox1YLUXr = 0; N7K8oUsOANc > Ox1YLUXr; Ox1YLUXr = Ox1YLUXr +1)
        for (pHY8bU4rGv = 0; pHY8bU4rGv < ntBCX4UcFmz; pHY8bU4rGv++) {
            lnReB5i[Ox1YLUXr][pHY8bU4rGv] = 0;
            for (k = 0; HX9Diq > k; k = k + 1)
                lnReB5i[Ox1YLUXr][pHY8bU4rGv] += fs71rx8nuGa[Ox1YLUXr][k] * M2YRBuj[k][pHY8bU4rGv];
        }
    for (Ox1YLUXr = 0; N7K8oUsOANc > Ox1YLUXr; Ox1YLUXr = Ox1YLUXr +1) {
        for (pHY8bU4rGv = 0; ntBCX4UcFmz - (797 - 796) > pHY8bU4rGv; pHY8bU4rGv++) {
            cout << lnReB5i[Ox1YLUXr][pHY8bU4rGv] << " ";
        }
        cout << lnReB5i[Ox1YLUXr][ntBCX4UcFmz - 1];
        cout << endl;
    }
    return 0;
}

