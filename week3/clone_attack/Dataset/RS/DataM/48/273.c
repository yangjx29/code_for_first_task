int Oh9LBv34 [(634 - 625)] [(738 - 729)] = {(232 - 232)}, dgdz5ZvCptAi [9] [9] = {(712 - 712)};

void  aHiyYW8L (int lybUfw0CJMnm) {
    int IuIUqe5;
    int p;
    int q;
    int GUn37C;
    int JDpZSV3;
    if (lybUfw0CJMnm == (713 - 713))
        return;
    {
        p = 0;
        while (p < 9) {
            {
                q = 0;
                while (q < 9) {
                    dgdz5ZvCptAi[p][q] = 0;
                    q++;
                };
            }
            p = p + 1;
        };
    }
    {
        p = 0;
        while (p < 9) {
            {
                q = 0;
                while (q < 9) {
                    if (Oh9LBv34[p][q] != 0) {
                        IuIUqe5 = Oh9LBv34[p][q];
                        {
                            GUn37C = p - 1;
                            while (GUn37C <= p + 1) {
                                {
                                    JDpZSV3 = q - 1;
                                    while (JDpZSV3 <= q + 1) {
                                        dgdz5ZvCptAi[GUn37C][JDpZSV3] = dgdz5ZvCptAi[GUn37C][JDpZSV3] + IuIUqe5;
                                        JDpZSV3++;
                                    };
                                }
                                GUn37C = GUn37C +1;
                            };
                        };
                    }
                    q++;
                };
            }
            p++;
        };
    }
    {
        p = 0;
        while (p < 9) {
            {
                q = 0;
                while (q < 9) {
                    Oh9LBv34[p][q] += dgdz5ZvCptAi[p][q];
                    q++;
                };
            }
            p++;
        };
    }
    aHiyYW8L (lybUfw0CJMnm - 1);
}

int main () {
    int m;
    int lybUfw0CJMnm;
    int GUn37C;
    int JDpZSV3;
    aHiyYW8L (lybUfw0CJMnm);
    Oh9LBv34[4][4] = 1;
    cin >> m >> lybUfw0CJMnm;
    {
        GUn37C = 0;
        while (GUn37C < 9) {
            cout << m * Oh9LBv34[GUn37C][0];
            {
                JDpZSV3 = 1;
                while (JDpZSV3 < 9) {
                    cout << " " << m * Oh9LBv34[GUn37C][JDpZSV3];
                    JDpZSV3++;
                };
            }
            GUn37C = GUn37C +1;
            cout << endl;
        };
    }
    return 0;
}

