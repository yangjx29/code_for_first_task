int ChqEKg [(107 - 97)] [(923 - 920)] = {{(908 - 908)}};
float YRFcj8aeZU [(721 - 711)] [(707 - 697)] = {{(16 - 16)}};
float NBs0DKm [(633 - 588)] = {(696 - 696)};

void  DDckufd5o (int Gwkua59KegNQ) {
    {
        int LPfylM = (355 - 355);
        for (; Gwkua59KegNQ -(255 - 254) >= LPfylM;) {
            {
                int HrvxAFfEe = Gwkua59KegNQ;
                for (; LPfylM < HrvxAFfEe;) {
                    float pxbNPX;
                    if (NBs0DKm[HrvxAFfEe -(110 - 109)] < NBs0DKm[HrvxAFfEe]) {
                        pxbNPX = NBs0DKm[HrvxAFfEe];
                        NBs0DKm[HrvxAFfEe] = NBs0DKm[HrvxAFfEe -(762 - 761)];
                        NBs0DKm[HrvxAFfEe -(294 - 293)] = pxbNPX;
                    }
                    HrvxAFfEe--;
                };
            }
            LPfylM = LPfylM +1;
        };
    };
}

int main () {
    int bTdCpBm6;
    cin >> bTdCpBm6;
    {
        int LPfylM = (707 - 707);
        for (; bTdCpBm6 - (335 - 334) >= LPfylM;) {
            cin >> ChqEKg[LPfylM][(718 - 718)] >> ChqEKg[LPfylM][(307 - 306)] >> ChqEKg[LPfylM][(538 - 536)];
            LPfylM = LPfylM +1;
        };
    }
    int Gwkua59KegNQ = (418 - 418);
    {
        int LPfylM = (455 - 455);
        for (; bTdCpBm6 - (319 - 317) >= LPfylM;) {
            {
                int HrvxAFfEe = LPfylM +(489 - 488);
                for (; HrvxAFfEe <= bTdCpBm6 - (220 - 219);) {
                    YRFcj8aeZU[LPfylM][HrvxAFfEe] = sqrt ((float) ((ChqEKg[LPfylM][(263 - 263)] - ChqEKg[HrvxAFfEe][(716 - 716)]) * (ChqEKg[LPfylM][0] - ChqEKg[HrvxAFfEe][0]) + (ChqEKg[LPfylM][1] - ChqEKg[HrvxAFfEe][1]) * (ChqEKg[LPfylM][1] - ChqEKg[HrvxAFfEe][1]) + (ChqEKg[LPfylM][(591 - 589)] - ChqEKg[HrvxAFfEe][(478 - 476)]) * (ChqEKg[LPfylM][2] - ChqEKg[HrvxAFfEe][2])));
                    NBs0DKm[Gwkua59KegNQ] = YRFcj8aeZU[LPfylM][HrvxAFfEe];
                    Gwkua59KegNQ++;
                    HrvxAFfEe++;
                };
            }
            LPfylM++;
        };
    }
    DDckufd5o (Gwkua59KegNQ);
    for (int L7TkxUy = 0;
    L7TkxUy <= Gwkua59KegNQ -1;) {
        {
            int LPfylM = 0;
            for (; LPfylM <= bTdCpBm6;) {
                {
                    int HrvxAFfEe = LPfylM;
                    for (; HrvxAFfEe <= bTdCpBm6 - 1;) {
                        if (YRFcj8aeZU[LPfylM][HrvxAFfEe] == NBs0DKm[L7TkxUy]) {
                            cout << "(" << ChqEKg[LPfylM][0] << "," << ChqEKg[LPfylM][1] << "," << ChqEKg[LPfylM][2] << ")-(" << ChqEKg[HrvxAFfEe][0] << "," << ChqEKg[HrvxAFfEe][1] << "," << ChqEKg[HrvxAFfEe][2] << ")=";
                            printf ("%.2f\n", NBs0DKm[L7TkxUy]);
                            YRFcj8aeZU[LPfylM][HrvxAFfEe] = -1;
                            goto loop;
                        }
                        HrvxAFfEe++;
                    };
                }
                LPfylM++;
            };
        }
    loop :
        L7TkxUy = L7TkxUy +1;
    };
}

