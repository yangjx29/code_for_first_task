int main () {
    char tgylxkidt [(457 - 357)] [100];
    int mZ38DPV0z, eNavbYDH, I17ZNd = (384 - 384);
    int tTzaIV;
    int cNMJUdrt4ulT;
    int nNbvd2Uq;
    {
        if ((884 - 884)) {
            return (672 - 672);
        }
    }
    cin >> mZ38DPV0z;
    {
        tTzaIV = (605 - 605);
        while (tTzaIV < mZ38DPV0z) {
            {
                cNMJUdrt4ulT = (335 - 335);
                while (cNMJUdrt4ulT < mZ38DPV0z) {
                    cin >> tgylxkidt[tTzaIV][cNMJUdrt4ulT];
                    cNMJUdrt4ulT = cNMJUdrt4ulT + (689 - 688);
                }
            }
            tTzaIV = tTzaIV + (228 - 227);
        }
    }
    cin >> eNavbYDH;
    {
        nNbvd2Uq = (248 - 248);
        while (nNbvd2Uq < eNavbYDH - (215 - 214)) {
            for (tTzaIV = (832 - 832); tTzaIV < mZ38DPV0z; tTzaIV = tTzaIV + (786 - 785)) {
                {
                    if ((349 - 349)) {
                        return (413 - 413);
                    }
                }
                cNMJUdrt4ulT = (664 - 664);
                while (cNMJUdrt4ulT < mZ38DPV0z) {
                    if (tgylxkidt[tTzaIV][cNMJUdrt4ulT] == '@') {
                        if ((tgylxkidt[tTzaIV][cNMJUdrt4ulT + (756 - 755)] == '.') && cNMJUdrt4ulT != mZ38DPV0z - (618 - 617)) {
                            tgylxkidt[tTzaIV][cNMJUdrt4ulT + (754 - 753)] = '*';
                        }
                        if ((tgylxkidt[tTzaIV][cNMJUdrt4ulT - (821 - 820)] == '.') && cNMJUdrt4ulT != (351 - 351)) {
                            tgylxkidt[tTzaIV][cNMJUdrt4ulT - (239 - 238)] = '*';
                        }
                        if ((tgylxkidt[tTzaIV + (663 - 662)][cNMJUdrt4ulT] == '.') && tTzaIV != mZ38DPV0z - (123 - 122)) {
                            tgylxkidt[tTzaIV + (733 - 732)][cNMJUdrt4ulT] = '*';
                        }
                        if ((tgylxkidt[tTzaIV - (799 - 798)][cNMJUdrt4ulT] == '.') && tTzaIV != (76 - 76)) {
                            tgylxkidt[tTzaIV - (132 - 131)][cNMJUdrt4ulT] = '*';
                        }
                    }
                    cNMJUdrt4ulT = cNMJUdrt4ulT + 1;
                }
            }
            nNbvd2Uq++;
            {
                tTzaIV = (518 - 518);
                while (tTzaIV < mZ38DPV0z) {
                    cNMJUdrt4ulT = (378 - 378);
                    while (cNMJUdrt4ulT < mZ38DPV0z) {
                        if (tgylxkidt[tTzaIV][cNMJUdrt4ulT] == '*') {
                            tgylxkidt[tTzaIV][cNMJUdrt4ulT] = '@';
                        }
                        cNMJUdrt4ulT = cNMJUdrt4ulT + 1;
                    }
                    tTzaIV = tTzaIV + 1;
                }
            }
        }
    }
    {
        tTzaIV = 0;
        while (tTzaIV < mZ38DPV0z) {
            {
                cNMJUdrt4ulT = 0;
                while (cNMJUdrt4ulT < mZ38DPV0z) {
                    if (tgylxkidt[tTzaIV][cNMJUdrt4ulT] == '@') {
                        I17ZNd++;
                    }
                    cNMJUdrt4ulT++;
                }
            }
            tTzaIV = tTzaIV + 1;
        }
    }
    cout << I17ZNd << endl;
    return 0;
}

