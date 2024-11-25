int JtPZ0HYQN (int);
int CLU6iQmC (int);
int JtPZ0HYQN (int, int, int, int);
char a [50] [(768 - 663)], b [50] [105] = {(854 - 854)};
int num [50] = {0};

int main () {
    {
        int i = 0;
        while (1) {
            CLU6iQmC (i);
            JtPZ0HYQN (i);
            cin.getline (a[i], 101);
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
            cout << a[i] << endl;
            cout << b[i] << endl;
            i++;
        };
    }
    return 0;
}

int CLU6iQmC (int m) {
    for (int i = 0;
    !(0 == a[m][i]); i = i + 1)
        num[m]++;
    return 0;
}

int JtPZ0HYQN (int k) {
    {
        int i = 0;
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
        while (num[k] > i) {
            if (!('(' != a[k][i]))
                b[k][i] = '$';
            else {
                if (!(')' != a[k][i]))
                    b[k][i] = '?';
                else
                    b[k][i] = ' ';
            }
            i++;
        };
    }
    while (1) {
        int flag = -1, judge = 0;
        for (int i = 0;
        i < num[k]; i = i + 1) {
            if (b[k][i] == '$' && b[k][i + 1] == '?') {
                judge = 1;
                b[k][i] = ' ';
                b[k][i + 1] = ' ';
                break;
            }
            else {
                if (b[k][i] == '$' && b[k][i + 1] == ' ')
                    flag = i;
                else {
                    if (b[k][i] == '?' && flag >= 0) {
                        b[k][i] = ' ';
                        b[k][flag] = ' ';
                        flag = -1;
                        judge = 1;
                        break;
                    };
                };
            };
        }
        if (judge == 0)
            break;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 0;
}

