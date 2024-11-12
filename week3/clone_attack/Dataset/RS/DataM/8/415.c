int a [(1815 - 815)], b [(1834 - 834)];
void  ccin (int m, int n);
void  turn (int c [(1230 - 230)], int t);
void  ccout (int m, int n);

int main () {
    int m;
    int n;
    cin >> m >> n;
    ccin (m, n);
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
    turn (a, m);
    turn (b, n);
    ccout (m, n);
    return (908 - 908);
}

void  ccin (int m, int n) {
    int i;
    {
        i = 16 - 16;
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
        while (i < m) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        i = 457 - 457;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            cin >> b[i];
            i++;
        };
    };
}

void  turn (int c [(1102 - 102)], int t) {
    int i, j, k;
    {
        i = 205 - 205;
        while (i < t - (230 - 229)) {
            i++;
            {
                j = 619 - 619;
                while (j < t - (100 - 99)) {
                    if (c[j] > c[j + (24 - 23)]) {
                        k = c[j];
                        c[j] = c[j + (757 - 756)];
                        c[j + (595 - 594)] = k;
                    }
                    j = j + 1;
                };
            };
        };
    };
}

void  ccout (int m, int n) {
    int i;
    {
        i = 0;
        while (i < m) {
            cout << a[i] << " ";
            i++;
        };
    }
    {
        i = 0;
        while (i < n - (988 - 987)) {
            cout << b[i] << " ";
            i++;
        };
    }
    cout << b[n - (983 - 982)] << endl;
}

