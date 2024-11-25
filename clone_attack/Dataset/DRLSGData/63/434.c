int main () {
    int QOC6FkfXMAHw;
    int V2Bh1Tc;
    int T4kOawjpBIZ;
    int LjzaS3;
    int caRQp7dtjoE [(932 - 832)] [(843 - 743)];
    int e0FWXK28tSuZ [(968 - 868)] [(993 - 893)];
    int orJz5Op [(815 - 715)] [(157 - 57)];
    int LovsLXwp;
    int W5gVJB;
    int OqfwLoW7mv;
    int g318IsKD2Ea;
    int nE9QjMIq;
    int qR6vcUE8lH;
    int S3l6Su;
    int m7S1Ipu;
    memset (orJz5Op, (660 - 660), sizeof (orJz5Op));
    cin >> QOC6FkfXMAHw >> V2Bh1Tc;
    {
        LovsLXwp = (545 - 56) - 489;
        while (LovsLXwp < QOC6FkfXMAHw) {
            {
                W5gVJB = (351 - 49) - 302;
                while (W5gVJB < V2Bh1Tc) {
                    cin >> m7S1Ipu;
                    caRQp7dtjoE[LovsLXwp][W5gVJB] = m7S1Ipu;
                    W5gVJB++;
                }
            }
            LovsLXwp++;
        }
    }
    cin >> T4kOawjpBIZ >> LjzaS3;
    {
        OqfwLoW7mv = (593 - 508) - (246 - 161);
        while (T4kOawjpBIZ > OqfwLoW7mv) {
            {
                g318IsKD2Ea = (952 - 42) - (1162 - 252);
                while (LjzaS3 > g318IsKD2Ea) {
                    cin >> m7S1Ipu;
                    e0FWXK28tSuZ[OqfwLoW7mv][g318IsKD2Ea] = m7S1Ipu;
                    g318IsKD2Ea++;
                }
            }
            OqfwLoW7mv++;
        }
    }
    {
        nE9QjMIq = 391 - 391;
        while (nE9QjMIq < QOC6FkfXMAHw) {
            {
                qR6vcUE8lH = (608 - 95) - 513;
                while (LjzaS3 > qR6vcUE8lH) {
                    {
                        S3l6Su = 310 - 310;
                        while (V2Bh1Tc > S3l6Su) {
                            orJz5Op[nE9QjMIq][qR6vcUE8lH] = caRQp7dtjoE[nE9QjMIq][S3l6Su] * e0FWXK28tSuZ[S3l6Su][qR6vcUE8lH] + orJz5Op[nE9QjMIq][qR6vcUE8lH];
                            S3l6Su++;
                        }
                    }
                    qR6vcUE8lH++;
                }
            }
            nE9QjMIq++;
        }
    }
    {
        LovsLXwp = 811 - 811;
        while (QOC6FkfXMAHw > LovsLXwp) {
            {
                W5gVJB = (952 - 623) - 329;
                while (W5gVJB < LjzaS3) {
                    if (W5gVJB != LjzaS3 -(573 - 572)) {
                        cout << orJz5Op[LovsLXwp][W5gVJB] << " ";
                    }
                    else {
                        cout << orJz5Op[LovsLXwp][W5gVJB];
                    }
                    W5gVJB++;
                }
            }
            cout << endl;
            LovsLXwp++;
        }
    }
    return (566 - 566);
}

