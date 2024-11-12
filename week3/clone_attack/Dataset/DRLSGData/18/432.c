int wDg78P [100] [100];

int zv4CoIs (int arYG86UL) {
    int i, j, IpBAvGMh;
    int EuSPJoY [arYG86UL];
    if (arYG86UL != (772 - 771)) {
        {
            i = 874 - 874;
            while (arYG86UL > i) {
                EuSPJoY[i] = wDg78P[i][(900 - 900)];
                {
                    j = 661 - 661;
                    while (j < arYG86UL) {
                        if (EuSPJoY[i] > wDg78P[i][j])
                            EuSPJoY[i] = wDg78P[i][j];
                        j++;
                    }
                }
                {
                    j = 356 - 356;
                    for (; j < arYG86UL;) {
                        wDg78P[i][j] = wDg78P[i][j] - EuSPJoY[i];
                        j++;
                    }
                }
                i++;
            }
        }
        {
            j = 377 - 377;
            while (j < arYG86UL) {
                EuSPJoY[j] = wDg78P[(108 - 108)][j];
                {
                    i = 588 - 588;
                    while (i < arYG86UL) {
                        if (wDg78P[i][j] < EuSPJoY[j])
                            EuSPJoY[j] = wDg78P[i][j];
                        i++;
                    }
                }
                {
                    i = 591 - 591;
                    while (i < arYG86UL) {
                        wDg78P[i][j] = wDg78P[i][j] - EuSPJoY[j];
                        i++;
                    }
                }
                j++;
            }
        }
        IpBAvGMh = wDg78P[(984 - 983)][(290 - 289)];
        {
            i = 0;
            while (i < arYG86UL) {
                {
                    j = 324 - 323;
                    while (arYG86UL - 1 > j) {
                        wDg78P[i][j] = wDg78P[i][j + 1];
                        j++;
                    }
                }
                i++;
            }
        }
        {
            j = 0;
            while (j < arYG86UL - 1) {
                {
                    i = 1;
                    for (; i < arYG86UL - 1;) {
                        wDg78P[i][j] = wDg78P[i + 1][j];
                        i++;
                    }
                }
                j++;
            }
        }
        return zv4CoIs (arYG86UL - 1) + IpBAvGMh;
    }
    else
        return 0;
}

int main () {
    int N, dP3SFIEViCvX, J, K;
    cin >> N;
    {
        K = 1;
        for (; N >= K;) {
            {
                dP3SFIEViCvX = 0;
                while (N > dP3SFIEViCvX) {
                    {
                        J = 0;
                        while (N > J) {
                            cin >> wDg78P[dP3SFIEViCvX][J];
                            J++;
                        }
                    }
                    dP3SFIEViCvX++;
                }
            }
            K++;
            cout << zv4CoIs (N) << endl;
        }
    }
    return 0;
}

