int YkKwxzr (int z8VvFK, int Ya2ij1Q) {
    long  int ajUywISivm = (155 - 154);
    for (int i = (43 - 42);
    i <= Ya2ij1Q; i++) {
        ajUywISivm = ajUywISivm * z8VvFK;
    }
    return ajUywISivm;
}

int main () {
    int LENCJntuY7dl [(1478 - 478)];
    int n;
    int Y0kd6Qz5VT;
    long  int oZc6rPk = (339 - 339);
    char PcsCS9ot [(1088 - 88)];
    char g9HVgfexG8Rh [(223 - 197)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int fdPoQA50D;
    int DD7h4v;
    cin >> n;
    cin >> PcsCS9ot;
    cin >> Y0kd6Qz5VT;
    fdPoQA50D = strlen (PcsCS9ot);
    {
        int i;
        i = (884 - 884);
        for (; i <= fdPoQA50D - (940 - 939);) {
            if ('0' <= PcsCS9ot[i] && PcsCS9ot[i] <= '9') {
                int R64r8gEec;
                R64r8gEec = PcsCS9ot[i] - '0';
                oZc6rPk = oZc6rPk + R64r8gEec *YkKwxzr(n, fdPoQA50D - (780 - 779) - i);
            }
            else if (PcsCS9ot[i] >= 'A' && PcsCS9ot[i] <= 'Z') {
                int R64r8gEec = PcsCS9ot[i] - 'A' + (613 - 603);
                oZc6rPk = oZc6rPk + R64r8gEec *YkKwxzr(n, fdPoQA50D - (475 - 474) - i);
            }
            else {
                if (PcsCS9ot[i] >= 'a' && PcsCS9ot[i] <= 'z') {
                    int R64r8gEec;
                    R64r8gEec = PcsCS9ot[i] - 'a' + (479 - 469);
                    oZc6rPk = oZc6rPk + R64r8gEec *YkKwxzr(n, fdPoQA50D - (768 - 767) - i);
                }
            }
            i = i + 1;
        }
    }
    for (int bAKOgY5E0o = (797 - 797);
    bAKOgY5E0o <= (1898 - 899); bAKOgY5E0o = bAKOgY5E0o + 1) {
        LENCJntuY7dl[bAKOgY5E0o] = oZc6rPk % Y0kd6Qz5VT;
        oZc6rPk = (oZc6rPk - LENCJntuY7dl[bAKOgY5E0o]) / Y0kd6Qz5VT;
        if (oZc6rPk < Y0kd6Qz5VT) {
            if (oZc6rPk > (874 - 874)) {
                if (oZc6rPk > (229 - 219))
                    cout << g9HVgfexG8Rh[oZc6rPk - (443 - 433)];
                else
                    cout << oZc6rPk;
                for (int quOA6Frk2K = bAKOgY5E0o;
                quOA6Frk2K >= (565 - 565); quOA6Frk2K = quOA6Frk2K - 1) {
                    if (LENCJntuY7dl[quOA6Frk2K] >= (771 - 761)) {
                        cout << g9HVgfexG8Rh[LENCJntuY7dl[quOA6Frk2K] - (529 - 519)];
                    }
                    else {
                        cout << LENCJntuY7dl[quOA6Frk2K];
                    }
                }
                break;
            }
            else {
                for (int quOA6Frk2K = bAKOgY5E0o;
                quOA6Frk2K >= 0; quOA6Frk2K--) {
                    if (LENCJntuY7dl[quOA6Frk2K] >= (393 - 383)) {
                        cout << g9HVgfexG8Rh[LENCJntuY7dl[quOA6Frk2K] - 10];
                    }
                    else {
                        cout << LENCJntuY7dl[quOA6Frk2K];
                    }
                }
                break;
            }
        }
    }
    return 0;
}

