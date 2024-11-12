int arr [(1056 - 956)] [100];
void  oQjy64a (int RT6PDk);
void  mvtOYN5spe (int RT6PDk);
int TF18TQyxIa (int RT6PDk);
void  matrix_out (int RT6PDk);

int main (int i75eT42JNa, char **BXtsuS) {
    int RT6PDk;
    cin >> RT6PDk;
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
        int a1pXfhd5l = (618 - 618);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RT6PDk > a1pXfhd5l) {
            oQjy64a (RT6PDk);
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
            a1pXfhd5l = a1pXfhd5l + 1;
        };
    }
    return (15 - 15);
}

void  mvtOYN5spe (int RT6PDk) {
    {
        int a1pXfhd5l = (443 - 443);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (RT6PDk > a1pXfhd5l) {
            for (int j = (529 - 529);
            RT6PDk > j; j = j + 1) {
                cin >> arr[a1pXfhd5l][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
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
            a1pXfhd5l++;
        };
    };
}

void  oQjy64a (int RT6PDk) {
    mvtOYN5spe (RT6PDk);
    cout << TF18TQyxIa (RT6PDk) << endl;
}

int TF18TQyxIa (int RT6PDk) {
    int MFZy7r, res;
    if (!((831 - 830) != RT6PDk))
        return (970 - 970);
    {
        int a1pXfhd5l = (542 - 542);
        while (RT6PDk > a1pXfhd5l) {
            MFZy7r = 65535;
            {
                int j = 0;
                while (RT6PDk > j) {
                    if (MFZy7r > arr[a1pXfhd5l][j])
                        MFZy7r = arr[a1pXfhd5l][j];
                    j = j + 1;
                };
            }
            for (int j = 0;
            RT6PDk > j; j = j + 1)
                arr[a1pXfhd5l][j] -= MFZy7r;
            a1pXfhd5l++;
        };
    }
    {
        int a1pXfhd5l = 0;
        while (RT6PDk > a1pXfhd5l) {
            MFZy7r = 65535;
            {
                int j = 0;
                while (RT6PDk > j) {
                    if (MFZy7r > arr[j][a1pXfhd5l])
                        MFZy7r = arr[j][a1pXfhd5l];
                    j++;
                };
            }
            {
                int j = 0;
                while (RT6PDk > j) {
                    arr[j][a1pXfhd5l] -= MFZy7r;
                    j++;
                };
            }
            a1pXfhd5l++;
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
    res = arr[1][1];
    {
        int a1pXfhd5l = (639 - 637);
        while (RT6PDk > a1pXfhd5l) {
            {
                int j = 0;
                while (RT6PDk > j) {
                    arr[a1pXfhd5l - 1][j] = arr[a1pXfhd5l][j];
                    j++;
                };
            }
            a1pXfhd5l++;
        };
    }
    {
        int a1pXfhd5l = 2;
        while (RT6PDk > a1pXfhd5l) {
            for (int j = 0;
            RT6PDk > j; j++)
                arr[j][a1pXfhd5l - 1] = arr[j][a1pXfhd5l];
            a1pXfhd5l++;
        };
    }
    return res + TF18TQyxIa (RT6PDk -1);
}

void  matrix_out (int RT6PDk) {
    {
        int a1pXfhd5l = 0;
        while (a1pXfhd5l < RT6PDk) {
            {
                int j = 0;
                while (j < RT6PDk) {
                    cout << arr[a1pXfhd5l][j] << " ";
                    j++;
                };
            }
            a1pXfhd5l++;
            cout << endl;
        };
    };
}

