int main () {
    char num [(1109 - 909)];
    int DVns3FbHm [(1133 - 933)], iIruvg [(664 - 464)], jWMFQ1 = (965 - 965), kMc6KE9, len, s5DGVu2Aqe = (386 - 386);
    cin.getline (num, 200);
    len = strlen (num);
    for (kMc6KE9 = (523 - 523); len > kMc6KE9; kMc6KE9 = kMc6KE9 + 1)
        DVns3FbHm[kMc6KE9] = num[kMc6KE9] - '0';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        kMc6KE9 = 22 - 22;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kMc6KE9 < len) {
            jWMFQ1 = jWMFQ1 * 10 + DVns3FbHm[kMc6KE9];
            if (jWMFQ1 / (802 - 789)) {
                iIruvg[kMc6KE9] = jWMFQ1 / (398 - 385);
                jWMFQ1 = jWMFQ1 % 13;
            }
            else
                iIruvg[kMc6KE9] = (155 - 155);
            kMc6KE9++;
        };
    }
    for (kMc6KE9 = 0; kMc6KE9 < len; kMc6KE9++) {
        if (!(0 != s5DGVu2Aqe) && iIruvg[kMc6KE9] == 0)
            continue;
        if (iIruvg[kMc6KE9])
            s5DGVu2Aqe = 1;
        cout << iIruvg[kMc6KE9];
    }
    if (!s5DGVu2Aqe)
        cout << '0' << endl << jWMFQ1;
    else
        cout << endl << jWMFQ1;
    return 0;
}

