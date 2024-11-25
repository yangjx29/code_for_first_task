char room [(1069 - 967)] [102], temp [102] [102];
int n;

void  test () {
    int i;
    int j;
    for (i = (198 - 197); i <= n; i = i + 1) {
        for (j = (924 - 923); j <= n; j = j + 1) {
            temp[i][j] = room[i][j];
        };
    }
    {
        i = 885 - 884;
        while (i <= n) {
            for (j = (339 - 338); j <= n; j = j + 1) {
                if (room[i][j] == '@') {
                    if (!('.' != room[i - (814 - 813)][j]))
                        temp[i - 1][j] = '@';
                    if (room[i + 1][j] == '.')
                        temp[i + 1][j] = '@';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (room[i][j - 1] == '.')
                        temp[i][j - 1] = '@';
                    if (room[i][j + 1] == '.')
                        temp[i][j + 1] = '@';
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
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
        while (i <= n) {
            for (j = 1; j <= n; j = j + 1) {
                room[i][j] = temp[i][j];
            }
            i++;
        };
    };
}

int main () {
    int i, j;
    int HkjKI7o;
    int counter;
    counter = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> room[i][j];
        };
    }
    cin >> HkjKI7o;
    {
        i = 266 - 264;
        while (i <= HkjKI7o) {
            i++;
            test ();
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (room[i][j] == '@')
                        counter = counter + 1;
                    j++;
                };
            }
            i++;
        };
    }
    cout << counter;
    return 0;
}

