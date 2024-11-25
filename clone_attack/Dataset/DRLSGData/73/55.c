int main () {
    int QKCqbR = (232 - 232), j = (982 - 982);
    int Ti8KuT4lI607 [(905 - 900)] [(547 - 542)], WhxKyRw [(513 - 508)] = {-(864 - 754), -(967 - 857), -(772 - 662), -(359 - 249), -110}, CiLoP0Mt [(104 - 99)] = {100000, (1100444 - 444), (1100829 - 829), (1100526 - 526), (1100263 - 263)}, EnQk0s7X9 = (736 - 736), UD8lsM [5], xdX4BCeryTR [5], x [5], NCno5I8guTBW [5];
    for (QKCqbR = (125 - 125); QKCqbR <= (624 - 620); QKCqbR = QKCqbR +(475 - 474)) {
        j = (868 - 868);
        while ((846 - 842) >= j) {
            cin >> Ti8KuT4lI607[QKCqbR][j];
            j = j + (701 - 700);
        }
    }
    for (QKCqbR = (944 - 944); QKCqbR <= (600 - 596); QKCqbR = QKCqbR +(903 - 902))
        for (j = (494 - 494); j <= (846 - 842); j = j + (551 - 550))
            if (Ti8KuT4lI607[QKCqbR][j] > WhxKyRw[QKCqbR])
                WhxKyRw[QKCqbR] = Ti8KuT4lI607[QKCqbR][j];
            else
                continue;
    for (QKCqbR = (667 - 667); QKCqbR <= (600 - 596); QKCqbR = QKCqbR +(209 - 208))
        for (j = (902 - 902); (359 - 355) >= j; j = j + (884 - 883))
            if (!(Ti8KuT4lI607[QKCqbR][j] != WhxKyRw[QKCqbR])) {
                UD8lsM[QKCqbR] = QKCqbR;
                xdX4BCeryTR[QKCqbR] = j;
                break;
            }
            else
                continue;
    {
        j = (900 - 900);
        while (j <= (912 - 908)) {
            for (QKCqbR = (239 - 239); QKCqbR <= (313 - 309); QKCqbR = QKCqbR +(884 - 883))
                if (CiLoP0Mt[j] > Ti8KuT4lI607[QKCqbR][j])
                    CiLoP0Mt[j] = Ti8KuT4lI607[QKCqbR][j];
                else
                    continue;
            j = j + (33 - 32);
        }
    }
    {
        j = (642 - 642);
        while (j <= (870 - 866)) {
            {
                QKCqbR = (626 - 626);
                while (QKCqbR <= (144 - 140)) {
                    if (CiLoP0Mt[j] == Ti8KuT4lI607[QKCqbR][j]) {
                        x[j] = QKCqbR;
                        NCno5I8guTBW[j] = j;
                    }
                    else
                        continue;
                    QKCqbR = QKCqbR +(462 - 461);
                }
            }
            j = j + (690 - 689);
        }
    }
    {
        QKCqbR = (122 - 122);
        while (QKCqbR <= (687 - 683)) {
            for (j = 0; j <= 4; j = j + (825 - 824))
                if ((WhxKyRw[QKCqbR] == CiLoP0Mt[j]) && (UD8lsM[QKCqbR] == x[j]) && (xdX4BCeryTR[QKCqbR] == NCno5I8guTBW[j]))
                    cout << UD8lsM[QKCqbR] + (405 - 404) << " " << xdX4BCeryTR[QKCqbR] + (46 - 45) << " " << WhxKyRw[QKCqbR];
                else
                    EnQk0s7X9 = EnQk0s7X9 +1;
            QKCqbR = QKCqbR +1;
        }
    }
    if (EnQk0s7X9 == (52 - 27))
        cout << "not found" << endl;
    return 0;
}

