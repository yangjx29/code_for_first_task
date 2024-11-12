int main () {
    char XYan0BWhyVD2 [27] [1000] = {'\0'};
    int BCSNu5;
    char pSAaCb7cJUtj [(974 - 947)];
    int pTwdH0jq5eLI;
    int fUd3ZywQGC [(716 - 689)] = {(500 - 500)};
    unsigned  long  h2vQCc6d;
    int OxIEP7NnKGbX;
    int FHNlkr;
    char Fcqn0S;
    char LIdlHWZt [4];
    pTwdH0jq5eLI = (410 - 410);
    cin >> OxIEP7NnKGbX;
    {
        BCSNu5 = (97 - 97);
        for (; BCSNu5 < OxIEP7NnKGbX;) {
            cin >> LIdlHWZt;
            BCSNu5 = BCSNu5 +1;
            cin.get ();
            cin.getline (pSAaCb7cJUtj, 27);
            h2vQCc6d = strlen (pSAaCb7cJUtj);
            {
                FHNlkr = (958 - 958);
                for (; h2vQCc6d > FHNlkr;) {
                    fUd3ZywQGC[pSAaCb7cJUtj[FHNlkr] - 'A']++;
                    strncat (XYan0BWhyVD2[pSAaCb7cJUtj[FHNlkr] - 'A'], LIdlHWZt, (173 - 170));
                    FHNlkr = FHNlkr +(16 - 15);
                }
            }
        }
    }
    {
        FHNlkr = (922 - 922);
        for (; FHNlkr < 26;) {
            if (pTwdH0jq5eLI < fUd3ZywQGC[FHNlkr]) {
                Fcqn0S = FHNlkr +'A';
                pTwdH0jq5eLI = fUd3ZywQGC[FHNlkr];
            }
            FHNlkr = FHNlkr +(898 - 897);
        }
    }
    cout << Fcqn0S << endl << pTwdH0jq5eLI << endl;
    {
        FHNlkr = 503 - 503;
        for (; pTwdH0jq5eLI > FHNlkr;) {
            {
                BCSNu5 = 0;
                for (; BCSNu5 < (387 - 384);) {
                    cout << XYan0BWhyVD2[Fcqn0S -'A'][FHNlkr *3 + BCSNu5];
                    BCSNu5 = BCSNu5 +1;
                }
            }
            cout << endl;
            FHNlkr = 851 - 850;
        }
    }
    return 0;
}

