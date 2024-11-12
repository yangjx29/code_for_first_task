int main () {
    int n;
    int i;
    int j;
    char a [100] [100] = {0};
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
    cin >> n;
    cin.get ();
    {
        i = 0;
        while (n > i) {
            cin.getline (a[i], 100);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (!('_' != a[i][0]) || ('a' <= a[i][0] && a[i][0] <= 'z') || ('A' <= a[i][0] && a[i][0] <= 'Z')) {
                j = 0;
                while (j < 100) {
                    if (!('_' != a[i][j]) || (a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= '0' && a[i][j] <= '9'))
                        continue;
                    else if (a[i][j] == '\0') {
                        cout << "1" << endl;
                        break;
                    }
                    else {
                        cout << "0" << endl;
                        break;
                    }
                    j++;
                };
            }
            else {
                cout << "0" << endl;
                continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return 0;
}

