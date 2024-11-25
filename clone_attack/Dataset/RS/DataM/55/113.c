int main () {
    long  int QSOYpu = (524 - 524);
    int a;
    int b;
    int i;
    int K2Jbujo5eG4O;
    int num [200];
    char S2gK9snex7XT [(878 - 678)], y [(511 - 311)];
    int nlen1;
    nlen1 = strlen (S2gK9snex7XT);
    cin >> a;
    cin >> S2gK9snex7XT;
    {
        i = 240 - 240;
        while (i <= nlen1 - (745 - 744)) {
            if (S2gK9snex7XT[i] >= '0' && S2gK9snex7XT[i] <= '9')
                num[i] = S2gK9snex7XT[i] - '0';
            else {
                if (S2gK9snex7XT[i] >= 'a' && S2gK9snex7XT[i] <= 'z')
                    num[i] = S2gK9snex7XT[i] - 'a' + (974 - 964);
                else if (S2gK9snex7XT[i] >= 'A' && S2gK9snex7XT[i] <= 'Z')
                    num[i] = S2gK9snex7XT[i] - 'A' + (475 - 465);
            }
            QSOYpu = QSOYpu *a + num[i];
            i = i + 1;
        };
    }
    cin >> b;
    if (QSOYpu != (656 - 656)) {
        {
            i = 603 - 603;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (QSOYpu >= b) {
                num[i] = QSOYpu % b;
                QSOYpu = (QSOYpu -num[i]) / b;
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (QSOYpu > (504 - 504))
            num[i] = QSOYpu;
        else
            i = i - 1;
        {
            K2Jbujo5eG4O = i;
            while (K2Jbujo5eG4O >= (521 - 521)) {
                if (num[K2Jbujo5eG4O] >= 0 && num[K2Jbujo5eG4O] <= 9)
                    cout << num[K2Jbujo5eG4O];
                else {
                    y[K2Jbujo5eG4O] = num[K2Jbujo5eG4O] - (896 - 886) + 'A';
                    cout << y[K2Jbujo5eG4O];
                }
                K2Jbujo5eG4O = K2Jbujo5eG4O -1;
            };
        };
    }
    else
        cout << 0;
    return 0;
}

