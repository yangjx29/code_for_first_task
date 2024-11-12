int main () {
    char MpVRuNjH4ybY [(808 - 706)] [102];
    int CIQoKG;
    int cKp3gGb4c;
    int xImToV28t;
    int cEwIpDV;
    int IXsmy6K;
    int geMJxB1;
    CIQoKG = (703 - 703);
    cin >> cKp3gGb4c;
    {
        xImToV28t = (478 - 478);
        for (; xImToV28t <= cKp3gGb4c + (893 - 892);) {
            cEwIpDV = (935 - 935);
            for (; cKp3gGb4c + (287 - 286) >= cEwIpDV;) {
                MpVRuNjH4ybY[(689 - 689)][cEwIpDV] = '#';
                MpVRuNjH4ybY[cKp3gGb4c + (797 - 796)][cEwIpDV] = '#';
                cEwIpDV = cEwIpDV + (524 - 523);
                MpVRuNjH4ybY[xImToV28t][(405 - 405)] = '#';
                MpVRuNjH4ybY[xImToV28t][cKp3gGb4c + (16 - 15)] = '#';
            }
            xImToV28t = xImToV28t + (810 - 809);
        }
    }
    {
        xImToV28t = (349 - 348);
        for (; xImToV28t <= cKp3gGb4c;) {
            {
                cEwIpDV = 1;
                for (; cEwIpDV <= cKp3gGb4c;) {
                    cin >> MpVRuNjH4ybY[xImToV28t][cEwIpDV];
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    cEwIpDV = cEwIpDV + 1;
                }
            }
            xImToV28t = xImToV28t + 1;
        }
    }
    cin >> IXsmy6K;
    IXsmy6K = IXsmy6K -1;
    {
        geMJxB1 = 0;
        for (; geMJxB1 < IXsmy6K;) {
            {
                xImToV28t = 1;
                for (; cKp3gGb4c >= xImToV28t;) {
                    {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        cEwIpDV = 1;
                        for (; cEwIpDV <= cKp3gGb4c;) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (!('.' != MpVRuNjH4ybY[xImToV28t][cEwIpDV]))
                                if ((!('@' != MpVRuNjH4ybY[xImToV28t + 1][cEwIpDV])) || (!('@' != MpVRuNjH4ybY[xImToV28t - 1][cEwIpDV])) || (!('@' != MpVRuNjH4ybY[xImToV28t][cEwIpDV + 1])) || (!('@' != MpVRuNjH4ybY[xImToV28t][cEwIpDV - 1])))
                                    MpVRuNjH4ybY[xImToV28t][cEwIpDV] = '$';
                            cEwIpDV = cEwIpDV + 1;
                        }
                    }
                    xImToV28t = xImToV28t + 1;
                }
            }
            {
                xImToV28t = 1;
                for (; cKp3gGb4c >= xImToV28t;) {
                    cEwIpDV = 1;
                    for (; cEwIpDV <= cKp3gGb4c;) {
                        if (MpVRuNjH4ybY[xImToV28t][cEwIpDV] == '$')
                            MpVRuNjH4ybY[xImToV28t][cEwIpDV] = '@';
                        cEwIpDV = cEwIpDV + 1;
                    }
                    xImToV28t = xImToV28t + 1;
                }
            }
            geMJxB1 = geMJxB1 + 1;
        }
    }
    {
        xImToV28t = 1;
        for (; xImToV28t <= cKp3gGb4c;) {
            cEwIpDV = 1;
            for (; cEwIpDV <= cKp3gGb4c;) {
                if (MpVRuNjH4ybY[xImToV28t][cEwIpDV] == '@')
                    CIQoKG = CIQoKG +1;
                {
                    if (0) {
                        return 0;
                    }
                }
                cEwIpDV = cEwIpDV + 1;
            }
            xImToV28t = xImToV28t + 1;
        }
    }
    cout << CIQoKG;
    return 0;
}

