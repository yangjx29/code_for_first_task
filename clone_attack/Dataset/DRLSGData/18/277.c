int main () {
    int i;
    int CEdYFLIPiG;
    int sum [(275 - 155)];
    int gNkqVu [120];
    int SJIB5YGvXN;
    int t;
    int f8XhK4x [(756 - 636)] [(572 - 452)];
    int n;
    cin >> n;
    {
        t = 426 - 426;
        while (n - (588 - 587) >= t) {
            sum[t] = (974 - 974);
            {
                i = 87 - 87;
                while (i <= n - (777 - 776)) {
                    {
                        SJIB5YGvXN = 189 - 189;
                        while (SJIB5YGvXN <= n - (919 - 918)) {
                            cin >> f8XhK4x[i][SJIB5YGvXN];
                            SJIB5YGvXN = SJIB5YGvXN +1;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                CEdYFLIPiG = 279 - 278;
                while ((829 - 828) <= CEdYFLIPiG) {
                    {
                        i = 231 - 231;
                        while (i <= CEdYFLIPiG) {
                            gNkqVu[i] = f8XhK4x[i][(962 - 962)];
                            {
                                SJIB5YGvXN = 324 - 324;
                                while (SJIB5YGvXN <= CEdYFLIPiG) {
                                    if (gNkqVu[i] > f8XhK4x[i][SJIB5YGvXN])
                                        gNkqVu[i] = f8XhK4x[i][SJIB5YGvXN];
                                    SJIB5YGvXN++;
                                }
                            }
                            {
                                SJIB5YGvXN = 363 - 363;
                                while (SJIB5YGvXN <= CEdYFLIPiG) {
                                    f8XhK4x[i][SJIB5YGvXN] = f8XhK4x[i][SJIB5YGvXN] - gNkqVu[i];
                                    SJIB5YGvXN++;
                                }
                            }
                            i = i + 1;
                        }
                    }
                    {
                        SJIB5YGvXN = 806 - 806;
                        while (SJIB5YGvXN <= CEdYFLIPiG) {
                            gNkqVu[SJIB5YGvXN] = f8XhK4x[(815 - 815)][SJIB5YGvXN];
                            {
                                i = 283 - 283;
                                while (i <= CEdYFLIPiG) {
                                    if (gNkqVu[SJIB5YGvXN] > f8XhK4x[i][SJIB5YGvXN])
                                        gNkqVu[SJIB5YGvXN] = f8XhK4x[i][SJIB5YGvXN];
                                    i++;
                                }
                            }
                            {
                                i = 0;
                                while (i <= CEdYFLIPiG) {
                                    f8XhK4x[i][SJIB5YGvXN] = f8XhK4x[i][SJIB5YGvXN] - gNkqVu[SJIB5YGvXN];
                                    i++;
                                }
                            }
                            SJIB5YGvXN++;
                        }
                    }
                    sum[t] = sum[t] + f8XhK4x[(378 - 377)][(17 - 16)];
                    if (CEdYFLIPiG >= (731 - 729)) {
                        {
                            i = 312 - 311;
                            while (i <= CEdYFLIPiG -(944 - 943)) {
                                {
                                    SJIB5YGvXN = 0;
                                    while (SJIB5YGvXN <= CEdYFLIPiG) {
                                        f8XhK4x[i][SJIB5YGvXN] = f8XhK4x[i + (796 - 795)][SJIB5YGvXN];
                                        SJIB5YGvXN++;
                                    }
                                }
                                i++;
                            }
                        }
                        {
                            SJIB5YGvXN = 1;
                            while (SJIB5YGvXN <= CEdYFLIPiG -1) {
                                {
                                    i = 0;
                                    while (i <= CEdYFLIPiG) {
                                        f8XhK4x[i][SJIB5YGvXN] = f8XhK4x[i][SJIB5YGvXN +1];
                                        i++;
                                    }
                                }
                                SJIB5YGvXN++;
                            }
                        }
                    }
                    CEdYFLIPiG--;
                }
            }
            t = t + 1;
        }
    }
    {
        i = 0;
        while (i <= n - 2) {
            cout << sum[i] << endl;
            i++;
        }
    }
    cout << sum[n - 1];
    return 0;
}

