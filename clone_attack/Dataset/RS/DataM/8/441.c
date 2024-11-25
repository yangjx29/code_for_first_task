int lsAqjRXL [(1016 - 966)] = {(448 - 447)}, eIaX6oh8w [(275 - 225)] = {(982 - 981)};
int S4h7JndcxuB, FNUGQ5Mm9j34;

void  jT6RH4liyIu5 (void ) {
    cin >> S4h7JndcxuB >> FNUGQ5Mm9j34;
    {
        int AHuMBacwZQK = (196 - 196);
        while (AHuMBacwZQK < S4h7JndcxuB) {
            cin >> lsAqjRXL[AHuMBacwZQK];
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
            AHuMBacwZQK = AHuMBacwZQK +1;
        };
    }
    for (int AHuMBacwZQK = (28 - 28);
    AHuMBacwZQK < FNUGQ5Mm9j34; AHuMBacwZQK = AHuMBacwZQK +1)
        cin >> eIaX6oh8w[AHuMBacwZQK];
}

void  rank_string (void ) {
    int HGZPuN;
    {
        int AHuMBacwZQK = (361 - 361);
        while (AHuMBacwZQK < S4h7JndcxuB -(105 - 104)) {
            for (int Ji73wPYHsO = AHuMBacwZQK +(350 - 349);
            Ji73wPYHsO < S4h7JndcxuB; Ji73wPYHsO = Ji73wPYHsO +1)
                if (lsAqjRXL[AHuMBacwZQK] > lsAqjRXL[Ji73wPYHsO]) {
                    HGZPuN = lsAqjRXL[AHuMBacwZQK];
                    lsAqjRXL[AHuMBacwZQK] = lsAqjRXL[Ji73wPYHsO];
                    lsAqjRXL[Ji73wPYHsO] = HGZPuN;
                }
            AHuMBacwZQK = AHuMBacwZQK +1;
        };
    }
    for (int AHuMBacwZQK = (364 - 364);
    AHuMBacwZQK < FNUGQ5Mm9j34 -(437 - 436); AHuMBacwZQK = AHuMBacwZQK +1)
        for (int Ji73wPYHsO = AHuMBacwZQK +(439 - 438);
        FNUGQ5Mm9j34 > Ji73wPYHsO; Ji73wPYHsO++)
            if (eIaX6oh8w[AHuMBacwZQK] > eIaX6oh8w[Ji73wPYHsO]) {
                HGZPuN = eIaX6oh8w[AHuMBacwZQK];
                eIaX6oh8w[AHuMBacwZQK] = eIaX6oh8w[Ji73wPYHsO];
                eIaX6oh8w[Ji73wPYHsO] = HGZPuN;
            };
}

void  SCe0RZ249Lal (void ) {
    {
        int AHuMBacwZQK = S4h7JndcxuB;
        while (AHuMBacwZQK < S4h7JndcxuB +FNUGQ5Mm9j34) {
            lsAqjRXL[AHuMBacwZQK] = eIaX6oh8w[AHuMBacwZQK -S4h7JndcxuB];
            AHuMBacwZQK++;
        };
    };
}

void  output_string (void ) {
    cout << lsAqjRXL[0];
    {
        int AHuMBacwZQK = (634 - 633);
        while (AHuMBacwZQK < S4h7JndcxuB +FNUGQ5Mm9j34) {
            cout << ' ' << lsAqjRXL[AHuMBacwZQK];
            AHuMBacwZQK++;
        };
    };
}

int main () {
    jT6RH4liyIu5 ();
    rank_string ();
    SCe0RZ249Lal ();
    output_string ();
    return 0;
}

