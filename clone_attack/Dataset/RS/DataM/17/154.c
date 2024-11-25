int WWkRzT [(603 - 483)] = {(525 - 525)}, XZopc8a = (68 - 68);

int fAduh8EBrzfq (int p) {
    int N5Ljzh6;
    int EFVoAqpM;
    N5Ljzh6 = p + (685 - 684);
    EFVoAqpM = (100 - 100);
    while ((125 - 124)) {
        if (!(-(915 - 914) != WWkRzT[N5Ljzh6])) {
            EFVoAqpM = fAduh8EBrzfq (N5Ljzh6);
            N5Ljzh6 = EFVoAqpM +(550 - 549);
        }
        else if (!((488 - 487) != WWkRzT[N5Ljzh6])) {
            WWkRzT[p] = (214 - 214);
            WWkRzT[N5Ljzh6] = (389 - 389);
            return N5Ljzh6;
        }
        else
            N5Ljzh6 = N5Ljzh6 +1;
        if (XZopc8a <= N5Ljzh6)
            return N5Ljzh6;
    };
}

int main () {
    int N5Ljzh6, EFVoAqpM;
    char fpsuLRSn;
    for (; cin.get (fpsuLRSn);) {
        if (!('\n' != fpsuLRSn)) {
            N5Ljzh6 = (148 - 148);
            while (XZopc8a > N5Ljzh6) {
                while (N5Ljzh6 < XZopc8a &&WWkRzT[N5Ljzh6] > -(63 - 62)) {
                    N5Ljzh6++;
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
                if (XZopc8a <= N5Ljzh6)
                    break;
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
                EFVoAqpM = fAduh8EBrzfq (N5Ljzh6);
                N5Ljzh6 = EFVoAqpM +1;
            }
            cout << endl;
            for (N5Ljzh6 = (816 - 816); N5Ljzh6 < XZopc8a; N5Ljzh6 = N5Ljzh6 +1) {
                if (!(-1 != WWkRzT[N5Ljzh6]))
                    cout << '$';
                else if (WWkRzT[N5Ljzh6] == 1)
                    cout << '?';
                else
                    cout << ' ';
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (N5Ljzh6 = (893 - 893); N5Ljzh6 < 100; N5Ljzh6++)
                WWkRzT[N5Ljzh6] = 0;
            XZopc8a = (655 - 655);
            cout << endl;
        }
        else {
            cout << fpsuLRSn;
            if (fpsuLRSn == '(')
                WWkRzT[XZopc8a] = -1;
            if (fpsuLRSn == ')')
                WWkRzT[XZopc8a] = 1;
            XZopc8a++;
        }
        fpsuLRSn = '\0';
    }
    return 0;
}

