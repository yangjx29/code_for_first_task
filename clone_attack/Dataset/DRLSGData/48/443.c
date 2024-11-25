int main () {
    int BaSDNXyPsY [(448 - 439)] [(288 - 279)];
    int XsPYeD [(503 - 494)] [9];
    int msqfmNgDbyv;
    int cy4wEth;
    int djfqmJkcW1h;
    int FFCTKkOu8gP;
    {
        msqfmNgDbyv = (541 - 541);
        while (9 > msqfmNgDbyv) {
            {
                cy4wEth = 54 - 54;
                while (9 > cy4wEth) {
                    BaSDNXyPsY[msqfmNgDbyv][cy4wEth] = (110 - 110);
                    XsPYeD[msqfmNgDbyv][cy4wEth] = 0;
                    cy4wEth++;
                }
            }
            msqfmNgDbyv++;
        }
    }
    int M7prVWAos;
    int FGCsvNw;
    cin >> M7prVWAos >> FGCsvNw;
    BaSDNXyPsY[(493 - 489)][4] = M7prVWAos;
    while (FGCsvNw) {
        {
            msqfmNgDbyv = 0;
            while (9 > msqfmNgDbyv) {
                {
                    cy4wEth = 0;
                    while (cy4wEth < 9) {
                        if (0 <= msqfmNgDbyv - 1 && 0 <= cy4wEth - 1 && BaSDNXyPsY[msqfmNgDbyv][cy4wEth] != 0) {
                            for (djfqmJkcW1h = msqfmNgDbyv - 1; msqfmNgDbyv + 1 >= djfqmJkcW1h; djfqmJkcW1h++) {
                                FFCTKkOu8gP = cy4wEth - 1;
                                while (FFCTKkOu8gP <= cy4wEth + 1) {
                                    if (djfqmJkcW1h == msqfmNgDbyv && !(cy4wEth != FFCTKkOu8gP)) {
                                        XsPYeD[msqfmNgDbyv][cy4wEth] = XsPYeD[msqfmNgDbyv][cy4wEth] + BaSDNXyPsY[msqfmNgDbyv][cy4wEth] * 2;
                                    }
                                    else {
                                        XsPYeD[djfqmJkcW1h][FFCTKkOu8gP] = XsPYeD[djfqmJkcW1h][FFCTKkOu8gP] + BaSDNXyPsY[msqfmNgDbyv][cy4wEth];
                                    }
                                    FFCTKkOu8gP++;
                                }
                            }
                        }
                        cy4wEth++;
                    }
                }
                msqfmNgDbyv++;
            }
        }
        {
            msqfmNgDbyv = 0;
            while (msqfmNgDbyv < 9) {
                for (cy4wEth = 0; cy4wEth < 9; cy4wEth++) {
                    BaSDNXyPsY[msqfmNgDbyv][cy4wEth] = XsPYeD[msqfmNgDbyv][cy4wEth];
                    XsPYeD[msqfmNgDbyv][cy4wEth] = 0;
                }
                msqfmNgDbyv++;
            }
        }
        FGCsvNw--;
    }
    {
        msqfmNgDbyv = 0;
        while (msqfmNgDbyv < 9) {
            {
                cy4wEth = 0;
                while (cy4wEth < 9) {
                    if (cy4wEth == 8)
                        cout << BaSDNXyPsY[msqfmNgDbyv][cy4wEth];
                    else
                        cout << BaSDNXyPsY[msqfmNgDbyv][cy4wEth] << " ";
                    cy4wEth++;
                }
            }
            cout << endl;
            msqfmNgDbyv++;
        }
    }
}

