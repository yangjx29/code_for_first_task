int main () {
    int U0oLsV6jrc [(725 - 624)] [(1008 - 907)];
    int f0VsN9l;
    int eabUWRSvnHX;
    int OQExLdD6gkNt;
    int TVC6dYgG;
    int QSEldPTY;
    int hZik0c;
    cin >> TVC6dYgG;
    for (int ciUa6T = (576 - 575);
    TVC6dYgG >= ciUa6T; ciUa6T++) {
        for (hZik0c = (709 - 709); hZik0c < TVC6dYgG; hZik0c = hZik0c + (276 - 275))
            for (OQExLdD6gkNt = (903 - 903); OQExLdD6gkNt < TVC6dYgG; OQExLdD6gkNt++)
                cin >> U0oLsV6jrc[hZik0c][OQExLdD6gkNt];
        eabUWRSvnHX = (125 - 125);
        for (f0VsN9l = TVC6dYgG; f0VsN9l > (989 - 988); f0VsN9l--) {
            for (hZik0c = (227 - 227); hZik0c < f0VsN9l; hZik0c++) {
                QSEldPTY = (10311 - 311);
                for (OQExLdD6gkNt = (342 - 342); OQExLdD6gkNt < f0VsN9l; OQExLdD6gkNt++)
                    if ((U0oLsV6jrc[hZik0c][OQExLdD6gkNt] < QSEldPTY))
                        QSEldPTY = U0oLsV6jrc[hZik0c][OQExLdD6gkNt];
                for (OQExLdD6gkNt = (71 - 71); f0VsN9l > OQExLdD6gkNt; OQExLdD6gkNt++)
                    U0oLsV6jrc[hZik0c][OQExLdD6gkNt] = U0oLsV6jrc[hZik0c][OQExLdD6gkNt] - QSEldPTY;
            }
            for (hZik0c = (314 - 314); hZik0c < f0VsN9l; hZik0c++) {
                QSEldPTY = (10395 - 395);
                for (OQExLdD6gkNt = (330 - 330); OQExLdD6gkNt < f0VsN9l; OQExLdD6gkNt++)
                    if ((QSEldPTY > U0oLsV6jrc[OQExLdD6gkNt][hZik0c]))
                        QSEldPTY = U0oLsV6jrc[OQExLdD6gkNt][hZik0c];
                for (OQExLdD6gkNt = (268 - 268); OQExLdD6gkNt < f0VsN9l; OQExLdD6gkNt++)
                    U0oLsV6jrc[OQExLdD6gkNt][hZik0c] = U0oLsV6jrc[OQExLdD6gkNt][hZik0c] - QSEldPTY;
            }
            eabUWRSvnHX = eabUWRSvnHX + U0oLsV6jrc[(983 - 982)][(63 - 62)];
            for (hZik0c = (34 - 33); hZik0c < f0VsN9l - (523 - 522); hZik0c++)
                for (OQExLdD6gkNt = (392 - 392); OQExLdD6gkNt < f0VsN9l; OQExLdD6gkNt++)
                    U0oLsV6jrc[hZik0c][OQExLdD6gkNt] = U0oLsV6jrc[hZik0c + (788 - 787)][OQExLdD6gkNt];
            for (hZik0c = (702 - 702); hZik0c < f0VsN9l - (333 - 332); hZik0c++)
                for (OQExLdD6gkNt = (430 - 429); OQExLdD6gkNt < f0VsN9l - (539 - 538); OQExLdD6gkNt++)
                    U0oLsV6jrc[hZik0c][OQExLdD6gkNt] = U0oLsV6jrc[hZik0c][OQExLdD6gkNt +1];
        }
        cout << eabUWRSvnHX << endl;
    }
    return 0;
}

