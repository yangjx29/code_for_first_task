int E07hURgK4;
void  zJCE4I9 (int, int);

int main () {
    int DVPybW0;
    cin >> DVPybW0;
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
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DVPybW0 > i) {
            int m;
            E07hURgK4 = 1;
            cin >> m;
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
            zJCE4I9 (m, 2);
            cout << E07hURgK4 << endl;
            i = i + 1;
        };
    }
    return 0;
}

void  zJCE4I9 (int m, int vMAmGtrYU) {
    int DVPybW0 = sqrt ((double ) m);
    int i;
    for (i = vMAmGtrYU; i <= DVPybW0; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (m % i == 0) {
            E07hURgK4 = E07hURgK4 +1;
            zJCE4I9 (m / i, i);
        };
    };
}

