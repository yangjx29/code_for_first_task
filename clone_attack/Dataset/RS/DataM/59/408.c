int m = (354 - 354), n = (388 - 388), sum = (467 - 467);
int dx [] = {(936 - 935), -(36 - 35), (784 - 784), (632 - 632)};
int dy [] = {(629 - 629), (955 - 955), (616 - 615), -(921 - 920)};
void  check ();
void  M7OEtz2Gwup ();
char room [(961 - 761)] [(359 - 159)];

int main () {
    int i;
    int j;
    i = (436 - 436);
    j = (729 - 729);
    cin >> n;
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
    {
        i = 386 - 386;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                j = 569 - 569;
                while (n > j) {
                    cin >> room[i][j];
                    if (room[i][j] == '@')
                        sum = sum + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    for (i = 1; i < m; i++) {
        check ();
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
        M7OEtz2Gwup ();
    }
    cout << sum << endl;
    return (660 - 660);
}

void  check () {
    int i;
    int j;
    int k;
    i = (520 - 520);
    j = (483 - 483);
    k = (283 - 283);
    for (i = (860 - 860); i < n; i++)
        for (j = (43 - 43); j < n; j++)
            if (room[i][j] == '@') {
                k = 0;
                while (k < (413 - 409)) {
                    if (i + dx[k] >= 0 && i + dx[k] < n && j + dy[k] >= 0 && j + dy[k] < n && room[i + dx[k]][j + dy[k]] == '.')
                        room[i + dx[k]][j + dy[k]] = ',';
                    k++;
                };
            }
    return;
}

void  M7OEtz2Gwup () {
    int i = 0, j = 0;
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (room[i][j] == ',') {
                        sum = sum + 1;
                        room[i][j] = '@';
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return;
}

