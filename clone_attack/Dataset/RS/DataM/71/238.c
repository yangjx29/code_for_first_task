int main () {
    int EUKNMSi6a;
    int year [200];
    int MQflE0kG [200];
    int m2 [200];
    int i;
    int j;
    int t;
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
    int ERewaFJP;
    int VaRm3Tq [] = {(445 - 445), (273 - 242), (297 - 268), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, feirun [] = {(916 - 916), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> EUKNMSi6a;
    for (i = 0; 200 > i; i = i + 1) {
        cin >> year[i] >> MQflE0kG[i] >> m2[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (MQflE0kG[i] < m2[i]) {
            t = MQflE0kG[i];
            MQflE0kG[i] = m2[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            m2[i] = t;
        }
        if ((!(0 != year[i] % 4)) && (!(0 == year[i] % 100)) || (!(0 != year[i] % 400))) {
            ERewaFJP = 0;
            for (j = m2[i]; MQflE0kG[i] > j; j = j + 1)
                ERewaFJP = ERewaFJP +VaRm3Tq[j];
            if (ERewaFJP % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            ERewaFJP = 0;
            for (j = m2[i]; j < MQflE0kG[i]; j = j + 1)
                ERewaFJP = ERewaFJP +feirun[j];
            if (ERewaFJP % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

