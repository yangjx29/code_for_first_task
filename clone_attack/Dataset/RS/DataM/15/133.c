int main () {
    int temp;
    int i;
    int j;
    i = 0;
    j = 0;
    int x1;
    int y1;
    int x2;
    int y2;
    x1 = (675 - 675);
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
    y1 = (973 - 973);
    x2 = (265 - 265);
    y2 = (876 - 876);
    int n;
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            cin >> temp;
            if (!(0 != temp))
                break;
        }
        if (j != n)
            break;
    }
    y1 = j;
    {
        j = j + 1;
        while (j < n) {
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cin >> temp;
        };
    }
    x1 = i;
    for (i = i + 1; i < n; i = i + 1)
        for (j = 0; j < n; j++) {
            cin >> temp;
            if (temp == 0) {
                y2 = j;
                x2 = i;
            };
        }
    cout << (x2 - x1 - (641 - 640)) * (y2 - y1 - 1);
    return 0;
}

