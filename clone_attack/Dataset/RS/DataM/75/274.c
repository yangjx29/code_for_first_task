int main () {
    int sG3ty01 [1000] = {(402 - 402)};
    int y [1000] = {(238 - 238)};
    char w0C823kTU [(9252 - 252)], VV4ySTobJcP [(9088 - 88)];
    int VTxuZc;
    int TDAGzJF46;
    int sum1;
    int sum2;
    int minx;
    int Wg6PxB2ACeL;
    int a41W0wrbEAt;
    int temp2;
    int temp3;
    int V0dh1S5KNcbs;
    int UNuWd6hy7aqt;
    VTxuZc = (232 - 232);
    TDAGzJF46 = (829 - 829);
    sum1 = (418 - 418);
    sum2 = (804 - 804);
    minx = (506 - 506);
    Wg6PxB2ACeL = (934 - 934);
    a41W0wrbEAt = 0;
    temp2 = 0;
    temp3 = 0;
    V0dh1S5KNcbs = 0;
    VTxuZc = 0;
    cin.getline (w0C823kTU, 9000, '\n');
    cin.getline (VV4ySTobJcP, 9000, '\n');
    {
        UNuWd6hy7aqt = 0;
        while (strlen (w0C823kTU) > UNuWd6hy7aqt) {
            if (!(',' != w0C823kTU[UNuWd6hy7aqt]))
                sum1 = sum1 + 1;
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
            UNuWd6hy7aqt = UNuWd6hy7aqt +1;
        };
    }
    for (UNuWd6hy7aqt = 0; strlen (w0C823kTU) > UNuWd6hy7aqt; UNuWd6hy7aqt = UNuWd6hy7aqt +1) {
        if ('0' <= w0C823kTU[UNuWd6hy7aqt] && '9' >= w0C823kTU[UNuWd6hy7aqt]) {
            sG3ty01[VTxuZc] = w0C823kTU[UNuWd6hy7aqt] - '0' + sG3ty01[VTxuZc] * 10;
        }
        else if (w0C823kTU[UNuWd6hy7aqt] == ',')
            VTxuZc = VTxuZc +1;
        else
            break;
    }
    sum1 = sum1 + 1;
    TDAGzJF46 = 0;
    {
        UNuWd6hy7aqt = 0;
        while (strlen (VV4ySTobJcP) > UNuWd6hy7aqt) {
            if ('0' <= VV4ySTobJcP[UNuWd6hy7aqt] && '9' >= VV4ySTobJcP[UNuWd6hy7aqt]) {
                y[TDAGzJF46] = VV4ySTobJcP[UNuWd6hy7aqt] - '0' + y[TDAGzJF46] * 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else if (!(',' != VV4ySTobJcP[UNuWd6hy7aqt]))
                TDAGzJF46++;
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            UNuWd6hy7aqt++;
        };
    }
    minx = sG3ty01[0];
    Wg6PxB2ACeL = y[0];
    for (UNuWd6hy7aqt = 0; sum1 > UNuWd6hy7aqt; UNuWd6hy7aqt = UNuWd6hy7aqt +1) {
        if (sG3ty01[UNuWd6hy7aqt] < minx)
            minx = sG3ty01[UNuWd6hy7aqt];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (y[UNuWd6hy7aqt] > Wg6PxB2ACeL)
            Wg6PxB2ACeL = y[UNuWd6hy7aqt];
    }
    for (VTxuZc = minx; VTxuZc < Wg6PxB2ACeL; VTxuZc = VTxuZc +1) {
        temp3 = 0;
        for (UNuWd6hy7aqt = 0; UNuWd6hy7aqt < sum1; UNuWd6hy7aqt = UNuWd6hy7aqt +1) {
            if (VTxuZc >= sG3ty01[UNuWd6hy7aqt] && VTxuZc < y[UNuWd6hy7aqt])
                temp3 = temp3 + 1;
        }
        if (temp3 > sum2)
            sum2 = temp3;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}

