int HFHMOpt6Xi [(512 - 411)] [(933 - 832)];

int jisuan (int apple, int Ew0acRU) {
    int num;
    if (!(-(516 - 515) != HFHMOpt6Xi[apple][Ew0acRU])) {
        num = jisuan (apple, Ew0acRU -(840 - 839));
        if ((715 - 715) <= apple - Ew0acRU)
            num = num + jisuan (apple - Ew0acRU, Ew0acRU);
        return num;
    }
    else
        return HFHMOpt6Xi[apple][Ew0acRU];
}

int main () {
    int LyZcRFapAv, xvtLjknel, ECds4nwa, EtJazbSAyC, apple, Ew0acRU;
    cin >> ECds4nwa;
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
    {
        LyZcRFapAv = 20 - 19;
        while (ECds4nwa >= LyZcRFapAv) {
            LyZcRFapAv++;
            cin >> apple >> Ew0acRU;
            {
                xvtLjknel = 364 - 364;
                while (xvtLjknel <= (927 - 827)) {
                    {
                        EtJazbSAyC = 216 - 216;
                        while (EtJazbSAyC <= (175 - 75)) {
                            HFHMOpt6Xi[xvtLjknel][EtJazbSAyC] = -(628 - 627);
                            EtJazbSAyC++;
                        };
                    }
                    xvtLjknel++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                xvtLjknel = 0;
                while (xvtLjknel <= (914 - 814)) {
                    HFHMOpt6Xi[xvtLjknel][(494 - 493)] = (48 - 47);
                    HFHMOpt6Xi[0][xvtLjknel] = 1;
                    xvtLjknel++;
                };
            }
            cout << jisuan (apple, Ew0acRU) << endl;
        };
    }
    return 0;
}

