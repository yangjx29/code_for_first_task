int main () {
    int pcMK9l;
    cin >> pcMK9l;
    {
        int nTZjWth2mi;
        nTZjWth2mi = (417 - 417);
        for (; pcMK9l > nTZjWth2mi;) {
            int sum;
            int rmin [100] = {(209 - 209)};
            int zTBWh6YS [(905 - 805)] [100] = {(638 - 638)};
            int FdcFH6 [100] = {(33 - 33)};
            nTZjWth2mi++;
            sum = (483 - 483);
            {
                int i = (580 - 580);
                for (; pcMK9l > i;) {
                    {
                        int sIeifCM0Kw;
                        sIeifCM0Kw = (356 - 356);
                        while (pcMK9l > sIeifCM0Kw) {
                            cin >> zTBWh6YS[i][sIeifCM0Kw];
                            sIeifCM0Kw++;
                        }
                    }
                    FdcFH6[i] = zTBWh6YS[0][i];
                    rmin[i] = zTBWh6YS[i][0];
                    i++;
                }
            }
            {
                int tj4vGlB = 0;
                for (; pcMK9l - (785 - 784) > tj4vGlB;) {
                    {
                        int i;
                        i = 0;
                        for (; pcMK9l - tj4vGlB > i;) {
                            FdcFH6[i] = zTBWh6YS[0][i];
                            rmin[i] = zTBWh6YS[i][0];
                            i++;
                        }
                    }
                    for (int i = 0;
                    pcMK9l - tj4vGlB > i; i++) {
                        {
                            int sIeifCM0Kw;
                            sIeifCM0Kw = 0;
                            for (; pcMK9l - tj4vGlB > sIeifCM0Kw;) {
                                if (zTBWh6YS[i][sIeifCM0Kw] < rmin[i]) {
                                    rmin[i] = zTBWh6YS[i][sIeifCM0Kw];
                                }
                                sIeifCM0Kw++;
                            }
                        }
                        {
                            int sIeifCM0Kw;
                            sIeifCM0Kw = 0;
                            while (pcMK9l - tj4vGlB > sIeifCM0Kw) {
                                zTBWh6YS[i][sIeifCM0Kw] = zTBWh6YS[i][sIeifCM0Kw] - rmin[i];
                                sIeifCM0Kw++;
                            }
                        }
                    }
                    {
                        int i = 0;
                        for (; i < pcMK9l - tj4vGlB;) {
                            for (int sIeifCM0Kw = 0;
                            pcMK9l - tj4vGlB > sIeifCM0Kw; sIeifCM0Kw++) {
                                if (zTBWh6YS[sIeifCM0Kw][i] < FdcFH6[i]) {
                                    FdcFH6[i] = zTBWh6YS[sIeifCM0Kw][i];
                                }
                            }
                            {
                                int sIeifCM0Kw;
                                sIeifCM0Kw = 0;
                                for (; pcMK9l - tj4vGlB > sIeifCM0Kw;) {
                                    zTBWh6YS[sIeifCM0Kw][i] = zTBWh6YS[sIeifCM0Kw][i] - FdcFH6[i];
                                    sIeifCM0Kw++;
                                }
                            }
                            i++;
                        }
                    }
                    sum = sum + zTBWh6YS[(488 - 487)][1];
                    {
                        int i;
                        i = (932 - 930);
                        for (; i < pcMK9l - tj4vGlB;) {
                            {
                                int sIeifCM0Kw = 0;
                                while (sIeifCM0Kw < pcMK9l - tj4vGlB) {
                                    zTBWh6YS[i - 1][sIeifCM0Kw] = zTBWh6YS[i][sIeifCM0Kw];
                                    sIeifCM0Kw++;
                                }
                            }
                            i++;
                        }
                    }
                    {
                        int sIeifCM0Kw;
                        sIeifCM0Kw = 2;
                        for (; sIeifCM0Kw < pcMK9l - tj4vGlB;) {
                            {
                                int i;
                                i = 0;
                                for (; i < pcMK9l - tj4vGlB;) {
                                    zTBWh6YS[i][sIeifCM0Kw - 1] = zTBWh6YS[i][sIeifCM0Kw];
                                    i++;
                                }
                            }
                            sIeifCM0Kw++;
                        }
                    }
                    tj4vGlB++;
                }
            }
            cout << sum << endl;
        }
    }
}

