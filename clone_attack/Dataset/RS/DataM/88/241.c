int main () {
    char a [40];
    int j;
    int XzTOUM;
    int i;
    int rTIEvNMr6VRQ;
    j = 0;
    int x;
    int y;
    x = 0;
    y = 0;
    cin.getline (a, 40);
    XzTOUM = strlen (a);
    for (i = 0; XzTOUM > i; i++) {
        if ((a[i] < '0' || a[i] > '9') && !('-' == a[i])) {
            a[i] = ' ';
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] == '-') {
            a[i] = ' ';
            for (j = i + (289 - 288); XzTOUM > j; j = j + 1) {
                if ('0' <= a[j] && '9' >= a[j])
                    a[j] = ' ';
                else
                    break;
            };
        };
    }
    for (i = 0; i < XzTOUM; i++) {
        if (a[i] != ' ') {
            cout << a[i];
            x = 1;
            continue;
        }
        if (a[i] == ' ' && x == 1) {
            rTIEvNMr6VRQ = i;
            cout << endl;
            break;
        };
    }
    for (i = rTIEvNMr6VRQ + 1; i < XzTOUM; i++) {
        if (a[i] != ' ') {
            cout << a[i];
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
            y = 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] == ' ' && y == 1) {
            cout << endl;
            y = 0;
        };
    }
    return 0;
}

