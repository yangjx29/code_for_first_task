int main () {
    int omVrXpj9KtA;
    int jRCkVz9j;
    int YTpqyYnBI [105] [105];
    int i;
    int fyWi1I8BT7sS;
    int ilbQ9r70df;
    int TUtDg5Xnk9b;
    cin >> omVrXpj9KtA >> jRCkVz9j;
    {
        i = 0;
        while (omVrXpj9KtA > i) {
            {
                fyWi1I8BT7sS = 0;
                for (; jRCkVz9j > fyWi1I8BT7sS;) {
                    cin >> YTpqyYnBI[i][fyWi1I8BT7sS];
                    fyWi1I8BT7sS = fyWi1I8BT7sS + 1;
                }
            }
            i = i + 1;
        }
    }
    if (jRCkVz9j > omVrXpj9KtA)
        TUtDg5Xnk9b = omVrXpj9KtA;
    else
        TUtDg5Xnk9b = jRCkVz9j;
    if (!(0 != TUtDg5Xnk9b % 2))
        TUtDg5Xnk9b = TUtDg5Xnk9b / 2;
    else
        TUtDg5Xnk9b = TUtDg5Xnk9b / 2 + 1;
    {
        ilbQ9r70df = 0;
        while (TUtDg5Xnk9b > ilbQ9r70df) {
            {
                fyWi1I8BT7sS = ilbQ9r70df;
                for (; jRCkVz9j - ilbQ9r70df > fyWi1I8BT7sS;) {
                    cout << YTpqyYnBI[ilbQ9r70df][fyWi1I8BT7sS] << endl;
                    fyWi1I8BT7sS = fyWi1I8BT7sS + 1;
                }
            }
            {
                i = ilbQ9r70df + 1;
                for (; omVrXpj9KtA - ilbQ9r70df > i;) {
                    cout << YTpqyYnBI[i][jRCkVz9j - ilbQ9r70df - 1] << endl;
                    i = i + 1;
                }
            }
            for (fyWi1I8BT7sS = jRCkVz9j - 2 - ilbQ9r70df; ilbQ9r70df <= fyWi1I8BT7sS && (omVrXpj9KtA - ilbQ9r70df - 1 > ilbQ9r70df); fyWi1I8BT7sS--) {
                cout << YTpqyYnBI[omVrXpj9KtA - ilbQ9r70df - 1][fyWi1I8BT7sS] << endl;
            }
            for (i = omVrXpj9KtA - 2 - ilbQ9r70df; i >= 1 + ilbQ9r70df && (jRCkVz9j - ilbQ9r70df - 1 > ilbQ9r70df); i = i - 1) {
                cout << YTpqyYnBI[i][ilbQ9r70df] << endl;
            }
            ilbQ9r70df = ilbQ9r70df + 1;
        }
    }
    return 0;
}

