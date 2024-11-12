int main () {
    char str [256];
    char substr [256];
    char rep [256];
    int i, j, flag = 1, cIhi2GAc3 = 0;
    int nlen = strlen (str);
    int slen = strlen (substr);
    int rlen;
    rlen = strlen (rep);
    cin >> str;
    cin >> substr;
    cin >> rep;
    if (slen != rlen) {
        cout << "hehe" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < nlen; i = i + 1) {
        for (j = 0; j < slen; j = j + 1) {
            if (substr[j] != str[i + j]) {
                flag = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
                flag = 1;
            };
        }
        if (flag) {
            cIhi2GAc3 = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (int k = 0;
            k < slen; k = k + 1) {
                str[i + k] = rep[k];
            };
        }
        if (cIhi2GAc3) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    cout << str << '\n';
    return 0;
}

