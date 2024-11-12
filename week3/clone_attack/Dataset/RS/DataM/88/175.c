int main () {
    char vRkycHg [(193 - 162)], str [31];
    int m;
    m = strlen (vRkycHg);
    cin.getline (vRkycHg, 31);
    for (int i = (966 - 966);
    i < m; i = i + 1) {
        if (!('0' != vRkycHg[i]))
            if (!('0' == vRkycHg[i + 1])) {
                cout << 0 << endl;
                continue;
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
        if (!('1' <= vRkycHg[i] && vRkycHg[i] <= '9'))
            continue;
        else {
            int j;
            {
                j = 0;
                while (vRkycHg[i] >= '0' && vRkycHg[i] <= '9') {
                    str[j] = vRkycHg[i];
                    j++;
                    i = i + 1;
                };
            }
            str[j] = 0;
            cout << str << endl;
        };
    }
    return 0;
}

