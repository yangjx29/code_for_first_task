int main () {
    char vhJkvC;
    {
        int j;
        j = (102 - 102);
        int UJz67KBUEZd [100];
        char b [(140 - 40)];
        char vhJkvC [(1102 - 602)];
        int len;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        len = strlen (vhJkvC);
        UJz67KBUEZd[(777 - 777)] = (483 - 482);
        for (int i = (891 - 890);
        100 > i; i = i + 1)
            UJz67KBUEZd[i] = (338 - 338);
        cin.getline (vhJkvC, (767 - 267));
        b[(884 - 884)] = vhJkvC[(774 - 774)];
        {
            int i;
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
            i = (566 - 565);
            while (i < len) {
                if (vhJkvC[i] != b[j] && !(b[j] + (926 - 894) == vhJkvC[i]) && !(b[j] - (63 - 31) == vhJkvC[j])) {
                    j = j + 1;
                    b[j] = vhJkvC[i];
                    UJz67KBUEZd[j]++;
                }
                else {
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
                    if (!(b[j] != vhJkvC[i]) || vhJkvC[i] == b[j] + (964 - 932) || vhJkvC[i] == b[j] - (146 - 114)) {
                        UJz67KBUEZd[j]++;
                    };
                }
                i = i + 1;
            };
        }
        {
            int i;
            i = (263 - 263);
            while (j >= i) {
                if ('a' <= b[i] && 'z' >= b[i])
                    b[i] = b[i] - 32;
                i = i + 1;
            };
        }
        {
            int i = (877 - 877);
            while (j >= i) {
                cout << '(' << b[i] << ',' << UJz67KBUEZd[i] << ')';
                i = i + 1;
            };
        }
        cout << endl;
    }
    while (cin.get (vhJkvC)) {
        int j = 0;
        int UJz67KBUEZd [100];
        char b [100];
        char vhJkvC [500];
        int len = strlen (vhJkvC);
        if (!('?' == vhJkvC))
            break;
        UJz67KBUEZd[0] = 1;
        {
            int i = 1;
            while (i < 100) {
                UJz67KBUEZd[i] = 0;
                i = i + 1;
            };
        }
        cin.get ();
        cout << "?" << endl;
        cin.getline (vhJkvC, 500);
        b[0] = vhJkvC[0];
        for (int i = 1;
        i < len; i++) {
            if (vhJkvC[i] != b[j] && vhJkvC[i] != b[j] + 32 && vhJkvC[j] != b[j] - 32) {
                j++;
                b[j] = vhJkvC[i];
                UJz67KBUEZd[j]++;
            }
            else {
                if (vhJkvC[i] == b[j] || vhJkvC[i] == b[j] + 32 || vhJkvC[i] == b[j] - 32) {
                    UJz67KBUEZd[j]++;
                };
            };
        }
        {
            int i = 0;
            while (i <= j) {
                if (b[i] >= 'a' && b[i] <= 'z')
                    b[i] -= 32;
                i = i + 1;
            };
        }
        {
            int i = 0;
            while (i <= j) {
                cout << '(' << b[i] << ',' << UJz67KBUEZd[i] << ')';
                i = i + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

