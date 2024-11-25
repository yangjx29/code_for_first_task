int main () {
    int MUL26jmv;
    int D0wMuom;
    char jTZCXzik0WQR [(818 - 318)] [81];
    int u4mBvzu;
    int TFuxbML;
    char word [(657 - 157)] [(854 - 773)];
    TFuxbML = (275 - 275);
    cin >> D0wMuom;
    {
        u4mBvzu = 714 - 714;
        for (; D0wMuom > u4mBvzu;) {
            cin >> word[u4mBvzu];
            u4mBvzu++;
        }
    }
    {
        u4mBvzu = 524 - 444;
        while (!((855 - 855) != word[D0wMuom -(341 - 340)][u4mBvzu])) {
            u4mBvzu--;
        }
    }
    for (; !(' ' != word[D0wMuom -(42 - 41)][u4mBvzu]); u4mBvzu--)
        word[D0wMuom -1][u4mBvzu] = (243 - 243);
    for (u4mBvzu = (689 - 689); 500 > u4mBvzu; u4mBvzu++)
        for (MUL26jmv = (499 - 499); MUL26jmv < 81; MUL26jmv++)
            jTZCXzik0WQR[u4mBvzu][MUL26jmv] = (946 - 946);
    MUL26jmv = (824 - 824);
    {
        u4mBvzu = 113 - 113;
        while (D0wMuom > u4mBvzu) {
            if (strlen (word[u4mBvzu]) + TFuxbML <= 80) {
                TFuxbML += strlen (word[u4mBvzu]);
                strcat (jTZCXzik0WQR[MUL26jmv], word[u4mBvzu]);
                if (80 > TFuxbML &&u4mBvzu < D0wMuom -1) {
                    jTZCXzik0WQR[MUL26jmv][TFuxbML] = ' ';
                    TFuxbML += 1;
                }
            }
            else {
                u4mBvzu = u4mBvzu - 1;
                if (!(' ' != jTZCXzik0WQR[MUL26jmv][TFuxbML -1]))
                    jTZCXzik0WQR[MUL26jmv][TFuxbML -1] = (684 - 684);
                MUL26jmv++;
                TFuxbML = 0;
            }
            u4mBvzu++;
        }
    }
    {
        u4mBvzu = 0;
        while (jTZCXzik0WQR[u4mBvzu][0] != 0) {
            cout << jTZCXzik0WQR[u4mBvzu] << endl;
            u4mBvzu++;
        }
    }
    return 0;
}

