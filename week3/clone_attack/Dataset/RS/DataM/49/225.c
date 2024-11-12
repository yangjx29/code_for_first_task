int main () {
    char a [501];
    int length = strlen (a), p = 1;
    cin.getline (a, 501);
    for (int i = (360 - 358);
    i < length; i = i + 1) {
        for (int j = 0;
        j < length - i + 1; j++) {
            p = 1;
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
            {
                int x = 0;
                while (x < i) {
                    if (a[j + x] != a[j + i - x - 1]) {
                        p = 0;
                        break;
                    }
                    x++;
                };
            }
            if (p == 1) {
                int y = 0;
                while (y < i) {
                    cout << a[j + y];
                    if (y == i - 1)
                        cout << endl;
                    y = y + 1;
                };
            };
        };
    }
    return 0;
}

