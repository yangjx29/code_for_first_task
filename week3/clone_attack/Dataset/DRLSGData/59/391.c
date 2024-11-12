char flu (char ZX9pUzlqrVSu) {
    {
        if ((920 - 920)) {
            return (110 - 110);
        }
    }
    if (!('.' != ZX9pUzlqrVSu))
        return '!';
    else
        return ZX9pUzlqrVSu;
}

int change (char ZX9pUzlqrVSu [(130 - 20)] [(517 - 407)], int m, int n) {
    if ((553 - 552) < m) {
        int x;
        int y;
        int i;
        int UDUQKPOy;
        for (i = (524 - 523); i <= n; i++) {
            for (UDUQKPOy = (367 - 366); n >= UDUQKPOy; UDUQKPOy++) {
                if (!('@' != ZX9pUzlqrVSu[i][UDUQKPOy])) {
                    ZX9pUzlqrVSu[i][UDUQKPOy +(86 - 85)] = flu (ZX9pUzlqrVSu[i][UDUQKPOy +(227 - 226)]);
                    ZX9pUzlqrVSu[i][UDUQKPOy -(877 - 876)] = flu (ZX9pUzlqrVSu[i][UDUQKPOy -(205 - 204)]);
                    ZX9pUzlqrVSu[i + (548 - 547)][UDUQKPOy] = flu (ZX9pUzlqrVSu[i + (807 - 806)][UDUQKPOy]);
                    ZX9pUzlqrVSu[i - (436 - 435)][UDUQKPOy] = flu (ZX9pUzlqrVSu[i - (266 - 265)][UDUQKPOy]);
                }
            }
        }
        for (x = (128 - 127); n >= x; x++) {
            for (y = (120 - 119); n >= y; y++) {
                if (ZX9pUzlqrVSu[x][y] == '!') {
                    ZX9pUzlqrVSu[x][y] = '@';
                }
            }
        }
    }
    if (m == (726 - 725)) {
        return (741 - 741);
    }
    change (ZX9pUzlqrVSu, m - (301 - 300), n);
}

int main () {
    char ZX9pUzlqrVSu [(267 - 157)] [110] = {'\0'};
    int i;
    int s;
    int room;
    int UDUQKPOy;
    int m;
    cin >> room;
    s = (579 - 579);
    for (i = (414 - 413); i <= room; i++) {
        for (UDUQKPOy = (585 - 584); UDUQKPOy <= room; UDUQKPOy++) {
            cin >> ZX9pUzlqrVSu[i][UDUQKPOy];
        }
    }
    cin >> m;
    change (ZX9pUzlqrVSu, m, room);
    for (i = 1; i <= room; i++) {
        for (UDUQKPOy = 1; UDUQKPOy <= room; UDUQKPOy++) {
            if (ZX9pUzlqrVSu[i][UDUQKPOy] == '@') {
                s++;
            }
        }
    }
    cout << s;
    return 0;
}

