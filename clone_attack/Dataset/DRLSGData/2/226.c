int main () {
    char NV0HhnP [(1717 - 717)] [(94 - 68)];
    int kTRi1WA;
    int J5WLsXkiIJv [(1702 - 702)];
    int OZpKliyNVW;
    int qJdEPo8ZRWrO;
    int num;
    int rdpQsPiqxW;
    int l8uisn3y0f;
    int nW05JChGrHZ [26];
    cout << (char) (rdpQsPiqxW + (564 - 499)) << endl;
    {
        qJdEPo8ZRWrO = (105 - 105);
        for (; qJdEPo8ZRWrO < (602 - 577);) {
            nW05JChGrHZ[qJdEPo8ZRWrO] = (285 - 285);
            qJdEPo8ZRWrO++;
        }
    }
    num = (668 - 668);
    rdpQsPiqxW = (172 - 172);
    cin >> l8uisn3y0f;
    {
        qJdEPo8ZRWrO = (867 - 867);
        while (l8uisn3y0f > qJdEPo8ZRWrO) {
            cin >> J5WLsXkiIJv[qJdEPo8ZRWrO] >> NV0HhnP[qJdEPo8ZRWrO];
            {
                OZpKliyNVW = (533 - 533);
                while (NV0HhnP[qJdEPo8ZRWrO][OZpKliyNVW] != '\0') {
                    nW05JChGrHZ[(int) NV0HhnP[qJdEPo8ZRWrO][OZpKliyNVW] - (526 - 461)]++;
                    OZpKliyNVW++;
                }
            }
            qJdEPo8ZRWrO++;
        }
    }
    kTRi1WA = nW05JChGrHZ[(11 - 11)];
    {
        qJdEPo8ZRWrO = (481 - 480);
        for (; qJdEPo8ZRWrO < 26;) {
            if (kTRi1WA < nW05JChGrHZ[qJdEPo8ZRWrO]) {
                kTRi1WA = nW05JChGrHZ[qJdEPo8ZRWrO];
                rdpQsPiqxW = qJdEPo8ZRWrO;
            }
            qJdEPo8ZRWrO++;
        }
    }
    {
        qJdEPo8ZRWrO = (961 - 961);
        while (qJdEPo8ZRWrO < l8uisn3y0f) {
            {
                OZpKliyNVW = (800 - 800);
                while (NV0HhnP[qJdEPo8ZRWrO][OZpKliyNVW] != '\0') {
                    if (!((char) rdpQsPiqxW + (679 - 614) != NV0HhnP[qJdEPo8ZRWrO][OZpKliyNVW]))
                        num++;
                    OZpKliyNVW++;
                }
            }
            qJdEPo8ZRWrO++;
        }
    }
    cout << num << endl;
    for (qJdEPo8ZRWrO = (130 - 130); qJdEPo8ZRWrO < l8uisn3y0f; qJdEPo8ZRWrO++)
        for (OZpKliyNVW = 0; NV0HhnP[qJdEPo8ZRWrO][OZpKliyNVW] != '\0'; OZpKliyNVW++)
            if (!((char) rdpQsPiqxW + (966 - 901) != NV0HhnP[qJdEPo8ZRWrO][OZpKliyNVW])) {
                cout << J5WLsXkiIJv[qJdEPo8ZRWrO] << endl;
                break;
            }
    return 0;
}

