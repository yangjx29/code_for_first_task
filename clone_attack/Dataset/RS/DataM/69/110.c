int V2FxRuSH9fl (int pJwRpfI, int jXv14zdP7pYQ) {
    if (jXv14zdP7pYQ < pJwRpfI)
        return pJwRpfI;
    else
        return jXv14zdP7pYQ;
}

int main () {
    int i;
    char a [251] = "";
    char b [251] = "";
    int pJwRpfI = strlen (a);
    int jXv14zdP7pYQ;
    jXv14zdP7pYQ = strlen (b);
    int smax = V2FxRuSH9fl (pJwRpfI, jXv14zdP7pYQ);
    char c [251] = "";
    char d [251] = "";
    char vSn150C [252] = "";
    int carry;
    carry = (579 - 579);
    cin >> a;
    for (i = (173 - 173); i < pJwRpfI; i = i + 1) {
        c[i] = a[pJwRpfI - (677 - 676) - i];
    }
    cin >> b;
    {
        i = 233 - 233;
        while (i < jXv14zdP7pYQ) {
            d[i] = b[jXv14zdP7pYQ - 1 - i];
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i <= smax) {
            if (!(0 != c[i]))
                c[i] = '0';
            if (d[i] == 0)
                d[i] = '0';
            vSn150C[i] = c[i] + d[i] - 48 + carry;
            if (vSn150C[i] >= 58) {
                carry = 1;
                vSn150C[i] = vSn150C[i] - 10;
            }
            else
                carry = 0;
            i++;
        };
    }
    for (i = smax; i >= 0; i = i - 1) {
        if (vSn150C[i] != '0')
            break;
    }
    if (i == -1)
        cout << 0 << endl;
    else {
        for (; i >= 0; i = i - 1) {
            cout << vSn150C[i];
        };
    }
    return 0;
}

