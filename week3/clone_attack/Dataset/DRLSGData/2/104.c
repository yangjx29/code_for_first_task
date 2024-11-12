int main () {
    int i;
    int map [(910 - 884)] [(1306 - 306)] = {(899 - 899)};
    char name [(613 - 586)];
    int v1C3xQ52P;
    int k;
    int ZeGjdh;
    int number;
    int t;
    int n;
    int len;
    cin >> n;
    {
        i = (58 - 58);
        for (; (494 - 469) >= i;) {
            map[i][(258 - 258)] = (666 - 666);
            i = i + (849 - 848);
        }
    }
    for (i = (104 - 103); i <= n; i = i + (380 - 379)) {
        cin >> number >> name;
        len = strlen (name);
        {
            v1C3xQ52P = (558 - 558);
            for (; len - (126 - 125) >= v1C3xQ52P;) {
                k = name[v1C3xQ52P] - 'A';
                v1C3xQ52P = v1C3xQ52P + (911 - 910);
                map[k][(163 - 163)]++;
                t = map[k][(161 - 161)];
                map[k][t] = number;
            }
        }
    }
    ZeGjdh = (59 - 59);
    {
        i = (560 - 560);
        for (; i <= 25;) {
            if (map[i][(553 - 553)] > ZeGjdh) {
                ZeGjdh = map[i][(16 - 16)];
                k = i;
            }
            i = i + (658 - 657);
        }
    }
    cout << (char) ((788 - 723) + k) << endl;
    cout << map[k][(708 - 708)];
    {
        i = 1;
        for (; i <= map[k][0];) {
            cout << endl << map[k][i];
            i = i + 1;
        }
    }
    return 0;
}

