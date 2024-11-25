int main () {
    int nrSWTJXjKc;
    int tZtASlEs7rhV;
    int sizZuADE1aN;
    int APZ7MDfc9RJv [(115 - 15)] [100];
    int RDoKUje;
    int c;
    int YAbo1PfZan2;
    int yqscp7h [100] = {(187 - 187)};
    int min1;
    int qeYlXKyLOf;
    int k;
    cin >> sizZuADE1aN;
    for (k = (388 - 388); sizZuADE1aN > k; k = k + 1) {
        {
            RDoKUje = 385 - 385;
            while (sizZuADE1aN > RDoKUje) {
                for (tZtASlEs7rhV = (508 - 508); tZtASlEs7rhV < sizZuADE1aN; tZtASlEs7rhV = tZtASlEs7rhV + 1)
                    cin >> APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV];
                RDoKUje = RDoKUje +1;
            }
        }
        {
            nrSWTJXjKc = 706 - 706;
            while (sizZuADE1aN - (663 - 662) > nrSWTJXjKc) {
                {
                    RDoKUje = 718 - 718;
                    while (sizZuADE1aN - nrSWTJXjKc > RDoKUje) {
                        min1 = APZ7MDfc9RJv[RDoKUje][0];
                        for (tZtASlEs7rhV = 0; sizZuADE1aN - nrSWTJXjKc > tZtASlEs7rhV; tZtASlEs7rhV = tZtASlEs7rhV + 1) {
                            if (APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV] < min1)
                                min1 = APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV];
                        }
                        for (tZtASlEs7rhV = 0; sizZuADE1aN - nrSWTJXjKc > tZtASlEs7rhV; tZtASlEs7rhV = tZtASlEs7rhV + 1) {
                            APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV] = APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV] - min1;
                        }
                        RDoKUje = RDoKUje +1;
                    }
                }
                {
                    tZtASlEs7rhV = 0;
                    while (tZtASlEs7rhV < sizZuADE1aN - nrSWTJXjKc) {
                        qeYlXKyLOf = APZ7MDfc9RJv[0][tZtASlEs7rhV];
                        {
                            RDoKUje = 0;
                            while (RDoKUje < sizZuADE1aN - nrSWTJXjKc) {
                                if (qeYlXKyLOf > APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV])
                                    qeYlXKyLOf = APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV];
                                RDoKUje = RDoKUje +1;
                            }
                        }
                        {
                            RDoKUje = 0;
                            while (RDoKUje < sizZuADE1aN - nrSWTJXjKc) {
                                APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV] = APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV] - qeYlXKyLOf;
                                RDoKUje = RDoKUje +1;
                            }
                        }
                        tZtASlEs7rhV = tZtASlEs7rhV + 1;
                    }
                }
                yqscp7h[k] = yqscp7h[k] + APZ7MDfc9RJv[(797 - 796)][(285 - 284)];
                if (!(sizZuADE1aN - (617 - 615) != nrSWTJXjKc))
                    break;
                else {
                    {
                        c = 0;
                        while (sizZuADE1aN - nrSWTJXjKc > c) {
                            {
                                YAbo1PfZan2 = 849 - 847;
                                while (YAbo1PfZan2 < sizZuADE1aN - nrSWTJXjKc) {
                                    APZ7MDfc9RJv[c][YAbo1PfZan2 -(443 - 442)] = APZ7MDfc9RJv[c][YAbo1PfZan2];
                                    YAbo1PfZan2 = YAbo1PfZan2 +1;
                                }
                            }
                            c = c + 1;
                        }
                    }
                    {
                        c = 2;
                        while (sizZuADE1aN - nrSWTJXjKc > c) {
                            YAbo1PfZan2 = 0;
                            while (YAbo1PfZan2 < (sizZuADE1aN - 1 - nrSWTJXjKc)) {
                                APZ7MDfc9RJv[c - 1][YAbo1PfZan2] = APZ7MDfc9RJv[c][YAbo1PfZan2];
                                YAbo1PfZan2 = YAbo1PfZan2 +1;
                            }
                            c = c + 1;
                        }
                    }
                }
                nrSWTJXjKc = nrSWTJXjKc + 1;
            }
        }
        for (RDoKUje = 0; RDoKUje < sizZuADE1aN; RDoKUje = RDoKUje +1) {
            tZtASlEs7rhV = 0;
            while (tZtASlEs7rhV < sizZuADE1aN) {
                APZ7MDfc9RJv[RDoKUje][tZtASlEs7rhV] = 0;
                tZtASlEs7rhV = tZtASlEs7rhV + 1;
            }
        }
    }
    {
        RDoKUje = 0;
        while (RDoKUje < sizZuADE1aN) {
            cout << yqscp7h[RDoKUje] << endl;
            RDoKUje = RDoKUje +1;
        }
    }
    return 0;
}

