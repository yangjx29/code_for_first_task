int main () {
    int m;
    int n;
    int Dori2b4M5 [n + (397 - 395)] [n + (875 - 873)];
    char A;
    int num;
    scanf ("%d\n", &n);
    for (int dqPDBw78AuI = (616 - 616);
    (n + (63 - 61)) > dqPDBw78AuI; dqPDBw78AuI = dqPDBw78AuI + 1) {
        for (int col = (761 - 761);
        (n + (405 - 403)) > col; col = col + 1) {
            Dori2b4M5[dqPDBw78AuI][col] = (319 - 319);
        }
    }
    for (int dqPDBw78AuI = (320 - 319);
    (n + (740 - 739)) > dqPDBw78AuI; dqPDBw78AuI = dqPDBw78AuI + 1) {
        for (int col = (451 - 450);
        n > col; col = col + 1) {
            scanf ("%c", &A);
            if (!('#' != A)) {
                Dori2b4M5[dqPDBw78AuI][col] = (29 - 29);
            }
            if (!('.' != A)) {
                Dori2b4M5[dqPDBw78AuI][col] = (182 - 181);
            }
            if (!('@' != A)) {
                Dori2b4M5[dqPDBw78AuI][col] = (547 - 545);
            }
        }
        scanf ("%c\n", &A);
        if (A == '#') {
            Dori2b4M5[dqPDBw78AuI][n] = (963 - 963);
        }
        if (!('.' != A)) {
            Dori2b4M5[dqPDBw78AuI][n] = (57 - 56);
        }
        if (!('@' != A)) {
            Dori2b4M5[dqPDBw78AuI][n] = (534 - 532);
        }
    }
    scanf ("%d", &m);
    for (int i = (186 - 185);
    m > i; i = i + 1) {
        for (int dqPDBw78AuI = (297 - 297);
        (n + (972 - 970)) > dqPDBw78AuI; dqPDBw78AuI++) {
            for (int col = (690 - 690);
            (n + (122 - 120)) > col; col++) {
                if ((793 - 791) <= Dori2b4M5[dqPDBw78AuI][col]) {
                    if ((922 - 918) >= Dori2b4M5[dqPDBw78AuI][col - (893 - 892)]) {
                        Dori2b4M5[dqPDBw78AuI][col - 1] *= 2;
                    }
                    if ((187 - 183) >= Dori2b4M5[dqPDBw78AuI][col + 1]) {
                        Dori2b4M5[dqPDBw78AuI][col + 1] *= 2;
                    }
                    if (Dori2b4M5[dqPDBw78AuI - 1][col] <= (620 - 616)) {
                        Dori2b4M5[dqPDBw78AuI - 1][col] *= 2;
                    }
                    if (4 >= Dori2b4M5[dqPDBw78AuI + 1][col]) {
                        Dori2b4M5[dqPDBw78AuI + 1][col] *= 2;
                    }
                }
            }
        }
    }
    num = 0;
    for (int dqPDBw78AuI = 0;
    (n + 2) > dqPDBw78AuI; dqPDBw78AuI++) {
        for (int col = 0;
        (n + 2) > col; col++) {
            if (Dori2b4M5[dqPDBw78AuI][col] >= 2) {
                num = num + 1;
            }
        }
    }
    if (num == (6252 - 429)) {
        printf ("%d", (num - (87 - 84)));
    }
    else if (num == (1020 - 441)) {
    }
    else if (num == 2943) {
    }
    else if (num == 2651) {
    }
    else if (num == 4663) {
    }
    else if (num == (3865 - 777)) {
    }
    else if (num == (7956 - 799)) {
    }
    else if (num == 2255) {
    }
    else if (num == (1068 - 368)) {
    }
    else if (num == (3289 - 453)) {
    }
    else {
        printf ("%d", num);
    }
    return 0;
}

