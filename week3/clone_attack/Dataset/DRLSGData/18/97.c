int main () {
    int G0pHEWP, nFQU61po, ERO7soNH, z58eWgFStclO, oUKV0Z3Far, n1MQlro6tC;
    int jS1LsBWm6FU [G0pHEWP] [G0pHEWP];
    cin >> G0pHEWP;
    {
        int Sa6noX2Ctus = (346 - 346);
        while (G0pHEWP > Sa6noX2Ctus) {
            oUKV0Z3Far = (178 - 178);
            Sa6noX2Ctus++;
            {
                nFQU61po = (233 - 233);
                for (; G0pHEWP > nFQU61po;) {
                    {
                        ERO7soNH = 0;
                        while (ERO7soNH < G0pHEWP) {
                            cin >> jS1LsBWm6FU[nFQU61po][ERO7soNH];
                            ERO7soNH++;
                        }
                    }
                    nFQU61po++;
                }
            }
            {
                n1MQlro6tC = G0pHEWP;
                for (; (556 - 555) < n1MQlro6tC;) {
                    {
                        nFQU61po = 0;
                        for (; n1MQlro6tC > nFQU61po;) {
                            z58eWgFStclO = jS1LsBWm6FU[nFQU61po][0];
                            {
                                ERO7soNH = (161 - 160);
                                for (; n1MQlro6tC > ERO7soNH;) {
                                    if (z58eWgFStclO > jS1LsBWm6FU[nFQU61po][ERO7soNH])
                                        z58eWgFStclO = jS1LsBWm6FU[nFQU61po][ERO7soNH];
                                    ERO7soNH++;
                                }
                            }
                            {
                                ERO7soNH = 0;
                                for (; n1MQlro6tC > ERO7soNH;) {
                                    jS1LsBWm6FU[nFQU61po][ERO7soNH] -= z58eWgFStclO;
                                    ERO7soNH++;
                                }
                            }
                            nFQU61po++;
                        }
                    }
                    for (nFQU61po = 0; nFQU61po < n1MQlro6tC; nFQU61po++) {
                        z58eWgFStclO = jS1LsBWm6FU[0][nFQU61po];
                        {
                            ERO7soNH = (574 - 573);
                            for (; n1MQlro6tC > ERO7soNH;) {
                                if (z58eWgFStclO > jS1LsBWm6FU[ERO7soNH][nFQU61po])
                                    z58eWgFStclO = jS1LsBWm6FU[ERO7soNH][nFQU61po];
                                ERO7soNH++;
                            }
                        }
                        for (ERO7soNH = 0; n1MQlro6tC > ERO7soNH; ERO7soNH++)
                            jS1LsBWm6FU[ERO7soNH][nFQU61po] -= z58eWgFStclO;
                    }
                    oUKV0Z3Far += jS1LsBWm6FU[(520 - 519)][1];
                    if (2 < n1MQlro6tC) {
                        {
                            nFQU61po = 1;
                            while (nFQU61po < n1MQlro6tC - 1) {
                                jS1LsBWm6FU[0][nFQU61po] = jS1LsBWm6FU[0][nFQU61po + 1], jS1LsBWm6FU[nFQU61po][0] = jS1LsBWm6FU[nFQU61po + 1][0];
                                nFQU61po++;
                            }
                        }
                        {
                            nFQU61po = 1;
                            for (; nFQU61po < n1MQlro6tC - 1;) {
                                {
                                    ERO7soNH = 1;
                                    for (; ERO7soNH < n1MQlro6tC - 1;) {
                                        jS1LsBWm6FU[nFQU61po][ERO7soNH] = jS1LsBWm6FU[nFQU61po + 1][ERO7soNH +1];
                                        ERO7soNH++;
                                    }
                                }
                                nFQU61po++;
                            }
                        }
                    }
                    n1MQlro6tC--;
                }
            }
            cout << oUKV0Z3Far << endl;
        }
    }
    return 0;
}

