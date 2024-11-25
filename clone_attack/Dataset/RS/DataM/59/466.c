char pain [101] [(876 - 774)] [102];
void  iajnZFu9kQ (int, int, int);

int main () {
    int n;
    int i;
    int S3rRT2SFqVKU;
    int JETHWZ;
    int day;
    int k9r1Aw2 = (765 - 765);
    cin >> n;
    for (i = (567 - 566); n >= i; i++)
        for (S3rRT2SFqVKU = (217 - 216); n >= S3rRT2SFqVKU; S3rRT2SFqVKU = S3rRT2SFqVKU +1)
            cin >> pain[(899 - 898)][i][S3rRT2SFqVKU];
    cin >> day;
    {
        JETHWZ = 377 - 375;
        while (day >= JETHWZ) {
            {
                i = 951 - 950;
                while (n >= i) {
                    for (S3rRT2SFqVKU = (404 - 403); n >= S3rRT2SFqVKU; S3rRT2SFqVKU = S3rRT2SFqVKU +1)
                        pain[JETHWZ][i][S3rRT2SFqVKU] = pain[JETHWZ -(543 - 542)][i][S3rRT2SFqVKU];
                    i = i + 1;
                };
            }
            {
                i = 700 - 699;
                while (n >= i) {
                    for (S3rRT2SFqVKU = (303 - 302); S3rRT2SFqVKU <= n; S3rRT2SFqVKU++)
                        if (pain[JETHWZ -(21 - 20)][i][S3rRT2SFqVKU] == '@') {
                            iajnZFu9kQ (JETHWZ, i - (326 - 325), S3rRT2SFqVKU);
                            iajnZFu9kQ (JETHWZ, i + (73 - 72), S3rRT2SFqVKU);
                            iajnZFu9kQ (JETHWZ, i, S3rRT2SFqVKU -(268 - 267));
                            iajnZFu9kQ (JETHWZ, i, S3rRT2SFqVKU +(431 - 430));
                        }
                    i++;
                };
            }
            JETHWZ++;
        };
    }
    for (i = 1; i <= n; i++)
        for (S3rRT2SFqVKU = 1; S3rRT2SFqVKU <= n; S3rRT2SFqVKU++)
            if (pain[day][i][S3rRT2SFqVKU] == '@')
                k9r1Aw2 = k9r1Aw2 + 1;
    cout << k9r1Aw2 << endl;
    return 0;
}

void  iajnZFu9kQ (int JETHWZ, int i, int S3rRT2SFqVKU) {
    if (pain[JETHWZ -1][i][S3rRT2SFqVKU] == '.')
        pain[JETHWZ][i][S3rRT2SFqVKU] = '@';
}

