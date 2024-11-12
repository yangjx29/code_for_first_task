void  Q6a7EyqAeR (int m, int n, int (*p) [(733 - 724)]) {
    int str [(398 - 389)] [(432 - 423)];
    int pSMrVN;
    int Io64lG1ynhd;
    if (!((909 - 909) != n))
        return;
    memcpy (str, p, sizeof (str));
    {
        pSMrVN = 489 - 489;
        while (pSMrVN <= (444 - 436)) {
            {
                Io64lG1ynhd = 96 - 96;
                while (Io64lG1ynhd <= (23 - 15)) {
                    if (str[pSMrVN][Io64lG1ynhd] != (866 - 866)) {
                        if (pSMrVN != (751 - 751)) {
                            if (Io64lG1ynhd != (238 - 238))
                                p[pSMrVN - (451 - 450)][Io64lG1ynhd -(656 - 655)] += str[pSMrVN][Io64lG1ynhd];
                            if (Io64lG1ynhd != (98 - 90))
                                p[pSMrVN - (631 - 630)][Io64lG1ynhd +(219 - 218)] += str[pSMrVN][Io64lG1ynhd];
                            p[pSMrVN - (966 - 965)][Io64lG1ynhd] += str[pSMrVN][Io64lG1ynhd];
                        }
                        if (pSMrVN != (878 - 870)) {
                            if (Io64lG1ynhd != 0)
                                p[pSMrVN + (606 - 605)][Io64lG1ynhd -(251 - 250)] = p[pSMrVN + (606 - 605)][Io64lG1ynhd -(251 - 250)] + str[pSMrVN][Io64lG1ynhd];
                            if (Io64lG1ynhd != 8)
                                p[pSMrVN + 1][Io64lG1ynhd +1] = p[pSMrVN + 1][Io64lG1ynhd +1] + str[pSMrVN][Io64lG1ynhd];
                            p[pSMrVN + 1][Io64lG1ynhd] += str[pSMrVN][Io64lG1ynhd];
                        }
                        if (Io64lG1ynhd != 0)
                            p[pSMrVN][Io64lG1ynhd -1] = p[pSMrVN][Io64lG1ynhd -1] + str[pSMrVN][Io64lG1ynhd];
                        if (Io64lG1ynhd != 8)
                            p[pSMrVN][Io64lG1ynhd +1] = p[pSMrVN][Io64lG1ynhd +1] + str[pSMrVN][Io64lG1ynhd];
                        p[pSMrVN][Io64lG1ynhd] = p[pSMrVN][Io64lG1ynhd] + str[pSMrVN][Io64lG1ynhd];
                    }
                    Io64lG1ynhd++;
                };
            }
            pSMrVN++;
        };
    }
    Q6a7EyqAeR (m, n - 1, p);
}

void  G8aoTYXSCku (int (*p) [9]) {
    int pSMrVN;
    int Io64lG1ynhd;
    {
        pSMrVN = 0;
        while (pSMrVN <= 8) {
            {
                Io64lG1ynhd = 0;
                while (Io64lG1ynhd <= 8) {
                    cout << p[pSMrVN][Io64lG1ynhd];
                    if (Io64lG1ynhd != 8)
                        cout << " ";
                    else
                        cout << endl;
                    Io64lG1ynhd++;
                };
            }
            pSMrVN++;
        };
    };
}

int main () {
    int m;
    int n;
    int p [9] [9] = {0};
    G8aoTYXSCku (p);
    cin >> m >> n;
    p[(883 - 879)][(220 - 216)] = m;
    Q6a7EyqAeR (m, n, p);
    return 0;
}

