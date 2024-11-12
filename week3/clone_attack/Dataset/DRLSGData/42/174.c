int main () {
    int C1mMrJF;
    int d6z0NcsK [(100372 - 371)] = {(898 - 898)};
    int wBcqo4t;
    int o218q4;
    int qcEPwQGD4;
    int AdHQ3NFw21;
    int jPD38w;
    cin >> qcEPwQGD4;
    {
        jPD38w = (669 - 668);
        for (; qcEPwQGD4 >= jPD38w;) {
            cin >> d6z0NcsK[jPD38w];
            jPD38w++;
        }
    }
    wBcqo4t = (820 - 820);
    C1mMrJF = (401 - 401);
    cin >> AdHQ3NFw21;
    {
        jPD38w = 1;
        for (; jPD38w <= qcEPwQGD4;) {
            if (!(AdHQ3NFw21 != d6z0NcsK[jPD38w]))
                wBcqo4t++;
            jPD38w++;
        }
    }
    {
        jPD38w = 1;
        for (; jPD38w <= qcEPwQGD4 - C1mMrJF;) {
            if (d6z0NcsK[jPD38w] == AdHQ3NFw21) {
                {
                    o218q4 = jPD38w;
                    for (; o218q4 <= qcEPwQGD4 - 1;) {
                        d6z0NcsK[o218q4] = d6z0NcsK[o218q4 + 1];
                        o218q4++;
                    }
                }
                jPD38w = jPD38w - 1;
                C1mMrJF++;
            }
            jPD38w++;
        }
    }
    {
        jPD38w = 1;
        for (; jPD38w <= qcEPwQGD4 - wBcqo4t - 1;) {
            cout << d6z0NcsK[jPD38w] << ' ';
            jPD38w++;
        }
    }
    cout << d6z0NcsK[qcEPwQGD4 - wBcqo4t] << endl;
    return 0;
}

