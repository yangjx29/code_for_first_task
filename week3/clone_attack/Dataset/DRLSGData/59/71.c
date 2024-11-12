int main () {
    int Q4PGkWOythF;
    Q4PGkWOythF = 0;
    {
        if (0) {
            return 0;
        }
    }
    int y5AhZ7gW;
    char flNrn3ztR [(217 - 117)] [100];
    int day;
    memset (flNrn3ztR, '.', sizeof (flNrn3ztR));
    cin >> y5AhZ7gW;
    {
        int H8nMK47IFx;
        H8nMK47IFx = (306 - 306);
        for (; y5AhZ7gW > H8nMK47IFx;) {
            {
                int pUV2zR0Zda = (266 - 266);
                for (; y5AhZ7gW > pUV2zR0Zda;) {
                    cin >> flNrn3ztR[H8nMK47IFx][pUV2zR0Zda];
                    pUV2zR0Zda = pUV2zR0Zda + 1;
                }
            }
            H8nMK47IFx = H8nMK47IFx +1;
        }
    }
    cin >> day;
    for (; day > (44 - 43);) {
        {
            if (0) {
                return 0;
            }
        }
        {
            {
                if (0) {
                    return 0;
                }
            }
            int H8nMK47IFx = (164 - 164);
            for (; H8nMK47IFx < y5AhZ7gW;) {
                {
                    int pUV2zR0Zda = 0;
                    for (; y5AhZ7gW > pUV2zR0Zda;) {
                        if (!('.' != flNrn3ztR[H8nMK47IFx][pUV2zR0Zda])) {
                            if ((H8nMK47IFx -(111 - 110) >= 0 && !('@' != flNrn3ztR[H8nMK47IFx -1][pUV2zR0Zda])) || (H8nMK47IFx +1 < y5AhZ7gW && !('@' != flNrn3ztR[H8nMK47IFx +1][pUV2zR0Zda])) || (0 <= pUV2zR0Zda - 1 && !('@' != flNrn3ztR[H8nMK47IFx][pUV2zR0Zda - 1])) || (pUV2zR0Zda + 1 < y5AhZ7gW && !('@' != flNrn3ztR[H8nMK47IFx][pUV2zR0Zda + 1])))
                                flNrn3ztR[H8nMK47IFx][pUV2zR0Zda] = '!';
                        }
                        pUV2zR0Zda = pUV2zR0Zda + 1;
                    }
                }
                H8nMK47IFx = H8nMK47IFx +1;
            }
        }
        day = day - (253 - 252);
        {
            int H8nMK47IFx;
            H8nMK47IFx = 0;
            while (H8nMK47IFx < y5AhZ7gW) {
                {
                    int pUV2zR0Zda = 0;
                    for (; pUV2zR0Zda < y5AhZ7gW;) {
                        if (flNrn3ztR[H8nMK47IFx][pUV2zR0Zda] == '!')
                            flNrn3ztR[H8nMK47IFx][pUV2zR0Zda] = '@';
                        pUV2zR0Zda++;
                    }
                }
                H8nMK47IFx = H8nMK47IFx +1;
            }
        }
    }
    {
        int H8nMK47IFx;
        H8nMK47IFx = 0;
        while (H8nMK47IFx < y5AhZ7gW) {
            {
                int pUV2zR0Zda;
                pUV2zR0Zda = 0;
                while (pUV2zR0Zda < y5AhZ7gW) {
                    if (flNrn3ztR[H8nMK47IFx][pUV2zR0Zda] == '@')
                        Q4PGkWOythF = Q4PGkWOythF +1;
                    pUV2zR0Zda++;
                }
            }
            H8nMK47IFx++;
        }
    }
    cout << Q4PGkWOythF;
    return 0;
}

