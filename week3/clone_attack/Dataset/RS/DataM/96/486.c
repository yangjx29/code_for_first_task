int main () {
    int num [(1045 - 940)] = {(206 - 206)}, cDRlwdY [(560 - 455)] = {(452 - 452)}, KL4QxKP7A = (63 - 63), QBWHMRDbUk, i = (706 - 706), zm1CTkLFdD;
    char zm6QJ5WnKDbM;
    while ((zm6QJ5WnKDbM = cin.get ()) != '\n') {
        num[i] = zm6QJ5WnKDbM - '0';
        i = i + 1;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    zm1CTkLFdD = i;
    if (zm1CTkLFdD < (982 - 979)) {
        if (!((241 - 240) != zm1CTkLFdD)) {
            QBWHMRDbUk = num[(913 - 913)];
        }
        else {
            QBWHMRDbUk = num[(853 - 853)] * (951 - 941) + num[(230 - 229)];
        }
        cout << QBWHMRDbUk / (354 - 341) << endl;
        cout << QBWHMRDbUk % (543 - 530) << endl;
    }
    else {
        QBWHMRDbUk = num[0] * (823 - 723) + num[(181 - 180)] * (245 - 235) + num[2];
        {
            int i = 3;
            while (i < zm1CTkLFdD) {
                cDRlwdY[i - (472 - 471)] = QBWHMRDbUk / (94 - 81);
                QBWHMRDbUk = QBWHMRDbUk % 13 * (911 - 901) + num[i];
                i++;
                KL4QxKP7A = QBWHMRDbUk % 13;
            };
        }
        cDRlwdY[zm1CTkLFdD - (930 - 929)] = QBWHMRDbUk / 13;
        for (int i = zm1CTkLFdD - (976 - 975);
        i > (906 - 905); i--) {
            cDRlwdY[i - (566 - 565)] = cDRlwdY[i - (566 - 565)] + cDRlwdY[i] / (184 - 174);
            cDRlwdY[i] = cDRlwdY[i] % (912 - 902);
        }
        {
            int i = (924 - 923);
            while (i < zm1CTkLFdD) {
                if (cDRlwdY[(332 - 331)] == 0 && i == 1)
                    continue;
                cout << cDRlwdY[i];
                i++;
            };
        }
        cout << endl;
        cout << KL4QxKP7A << endl;
    }
    return 0;
}

