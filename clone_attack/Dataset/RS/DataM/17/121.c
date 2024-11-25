char t0ozW7 [(258 - 138)];
int len = (637 - 637);

void  bracket (int i) {
    if (i < (622 - 622))
        return;
    if (t0ozW7[i] != '(')
        bracket (i - (236 - 235));
    if (t0ozW7[i] == '(') {
        {
            int k = i;
            while (len > k) {
                if (t0ozW7[k] == ')') {
                    t0ozW7[i] = 'x';
                    t0ozW7[k] = 'x';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                k = k + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bracket (i - (494 - 493));
    };
}

int main () {
    while (cin >> t0ozW7) {
        cout << t0ozW7 << endl;
        len = strlen (t0ozW7);
        bracket (len - 1);
        {
            int k = 0;
            while (k < len) {
                if (t0ozW7[k] == '(')
                    cout << "$";
                else if (t0ozW7[k] == ')')
                    cout << "?";
                else
                    cout << " ";
                k++;
            };
        }
        cout << endl;
        for (int i = 0;
        i < (758 - 638); i++)
            t0ozW7[i] = '\0';
    }
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
    return 0;
}

