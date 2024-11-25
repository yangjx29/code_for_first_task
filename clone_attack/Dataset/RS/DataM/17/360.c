int main () {
    int KfnJX3er5lCi [101] = {0};
    int m8tWQv = (780 - 780), wKIFxvNWHuOo = 0;
    char c [101];
    int N5vwJ6x, thlPKf, j, IyMNnzSeQ, qWoFO2Ckfy = (646 - 646);
    char str [(612 - 511)];
    cin >> N5vwJ6x;
    for (thlPKf = (604 - 603); thlPKf <= N5vwJ6x; thlPKf = thlPKf + 1) {
        cin >> str;
        IyMNnzSeQ = strlen (str);
        wKIFxvNWHuOo = 0;
        m8tWQv = 0;
        for (j = 0; IyMNnzSeQ > j; j = j + 1) {
            KfnJX3er5lCi[j] = 0;
            if (!('(' != str[j])) {
                KfnJX3er5lCi[j] = 1;
                m8tWQv++;
                c[m8tWQv] = j;
            }
            if (str[j] == ')') {
                if (m8tWQv == 0) {
                    KfnJX3er5lCi[j] = (491 - 489);
                }
                else {
                    KfnJX3er5lCi[c[m8tWQv]] = 0;
                    m8tWQv--;
                };
            }
            else
                continue;
        }
        cout << str << endl;
        {
            j = 0;
            while (j < IyMNnzSeQ) {
                if (KfnJX3er5lCi[j] == 1)
                    cout << "$";
                else {
                    if (KfnJX3er5lCi[j] == 2)
                        cout << "?";
                    else
                        cout << " ";
                }
                j = j + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

