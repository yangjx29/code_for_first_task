int main () {
    long  eLVTvfz0 = (843 - 843);
    int stM2oiC;
    int b;
    int l;
    char D0JMW1GrTo6 [100];
    cin >> stM2oiC >> D0JMW1GrTo6 >> b;
    l = strlen (D0JMW1GrTo6);
    for (int i = (862 - 862);
    i <= l - (642 - 641); i++)
        if (D0JMW1GrTo6[i] <= 'z' && 'a' <= D0JMW1GrTo6[i])
            D0JMW1GrTo6[i] = D0JMW1GrTo6[i] - 'a' + 'A';
    for (int i = (366 - 366);
    i < l; i++) {
        int m;
        if (D0JMW1GrTo6[i] <= 'Z' && D0JMW1GrTo6[i] >= 'A')
            m = (388 - 378) + D0JMW1GrTo6[i] - 'A';
        else
            m = D0JMW1GrTo6[i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        eLVTvfz0 = eLVTvfz0 + m * pow ((double ) stM2oiC, l - i - (927 - 926));
    }
    for (int i = (705 - 705);
    ; i++) {
        int m;
        m = eLVTvfz0 % b;
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
        eLVTvfz0 = (eLVTvfz0 - m) / b;
        if (m < (849 - 839))
            D0JMW1GrTo6[i] = m + '0';
        else
            D0JMW1GrTo6[i] = m - 10 + 'A';
        if (eLVTvfz0 == 0) {
            l = i + 1;
            break;
        };
    }
    {
        int i = l - 1;
        while (i >= 0) {
            cout << D0JMW1GrTo6[i];
            i--;
        };
    }
    return 0;
}

