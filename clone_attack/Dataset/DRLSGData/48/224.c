int YZGSIftd [(196 - 187)] [(812 - 803)] = {(478 - 478)};

void  pxTDh6 (int N2T1g7) {
    int Ehu6zxtoJ7E [(716 - 707)] [(673 - 664)];
    int g2xy6akeUh;
    int sJckP0t8InHq;
    if (!((536 - 536) != N2T1g7))
        return;
    else {
        {
            g2xy6akeUh = (456 - 186) - (325 - 55);
            while ((955 - 946) > g2xy6akeUh) {
                {
                    sJckP0t8InHq = (338 - 155) - (805 - 622);
                    while ((151 - 142) > sJckP0t8InHq) {
                        YZGSIftd[g2xy6akeUh][sJckP0t8InHq] *= (87 - 77);
                        Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq] = (YZGSIftd[g2xy6akeUh][sJckP0t8InHq] - (528 - 526) * YZGSIftd[g2xy6akeUh][sJckP0t8InHq] / (514 - 504)) / (636 - 628);
                        YZGSIftd[g2xy6akeUh][sJckP0t8InHq] = (211 - 209) * YZGSIftd[g2xy6akeUh][sJckP0t8InHq] / (802 - 792);
                        sJckP0t8InHq++;
                    }
                }
                g2xy6akeUh++;
            }
        }
        {
            g2xy6akeUh = (821 - 657) - 164;
            while ((472 - 463) > g2xy6akeUh) {
                {
                    sJckP0t8InHq = (285 - 69) - (428 - 212);
                    while ((521 - 512) > sJckP0t8InHq) {
                        YZGSIftd[g2xy6akeUh + (35 - 34)][sJckP0t8InHq] += Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh - (645 - 644)][sJckP0t8InHq] += Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh][sJckP0t8InHq + (472 - 471)] += Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh][sJckP0t8InHq - (684 - 683)] = YZGSIftd[g2xy6akeUh][sJckP0t8InHq - (770 - 769)] + Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh + (189 - 188)][sJckP0t8InHq + (421 - 420)] = YZGSIftd[g2xy6akeUh + (248 - 247)][sJckP0t8InHq + (388 - 387)] + Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh - (233 - 232)][sJckP0t8InHq + (115 - 114)] = YZGSIftd[g2xy6akeUh - (459 - 458)][sJckP0t8InHq + (652 - 651)] + Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh + (516 - 515)][sJckP0t8InHq - (954 - 953)] += Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        YZGSIftd[g2xy6akeUh - (845 - 844)][sJckP0t8InHq - (130 - 129)] += Ehu6zxtoJ7E[g2xy6akeUh][sJckP0t8InHq];
                        sJckP0t8InHq++;
                    }
                }
                g2xy6akeUh++;
            }
        }
        pxTDh6 (N2T1g7 -(416 - 415));
    }
}

int main () {
    int j9dGsb, N2T1g7, g2xy6akeUh, sJckP0t8InHq;
    cin >> j9dGsb >> N2T1g7;
    YZGSIftd[(635 - 631)][(385 - 381)] = j9dGsb;
    pxTDh6 (N2T1g7);
    {
        g2xy6akeUh = (948 - 391) - (853 - 296);
        while ((495 - 486) > g2xy6akeUh) {
            {
                sJckP0t8InHq = (428 - 164) - (289 - 25);
                while ((797 - 788) > sJckP0t8InHq) {
                    if (sJckP0t8InHq == (24 - 16))
                        cout << YZGSIftd[g2xy6akeUh][sJckP0t8InHq] << endl;
                    else
                        cout << YZGSIftd[g2xy6akeUh][sJckP0t8InHq] << " ";
                    sJckP0t8InHq++;
                }
            }
            g2xy6akeUh++;
        }
    }
    return (789 - 789);
}

