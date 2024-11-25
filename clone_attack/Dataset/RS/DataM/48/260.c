void  change (int, int [] [(575 - 565)]);
void  QXSP6U (int [] [10]);
int m, n;

int main () {
    int i, j, XSEgz1 [10] [10];
    for (i = (824 - 823); (547 - 538) >= i; i = i + 1)
        for (j = (211 - 210); 9 >= j; j = j + 1)
            XSEgz1[i][j] = 0;
    cin >> m >> n;
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
    XSEgz1[(814 - 809)][5] = m;
    change ((759 - 758), XSEgz1);
    return 0;
}

void  change (int TDYRofrlTVCG, int temp [] [10]) {
    int i, j, b0CNxqbMAVF [10] [10];
    if (TDYRofrlTVCG == n + (81 - 80)) {
        QXSP6U (temp);
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
        return;
    }
    for (i = (235 - 234); 9 >= i; i = i + 1)
        for (j = (583 - 582); 9 >= j; j = j + 1)
            b0CNxqbMAVF[i][j] = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++)
            if (temp[i][j] != 0) {
                b0CNxqbMAVF[i][j] = b0CNxqbMAVF[i][j] + temp[i][j];
                b0CNxqbMAVF[i + 1][j] = b0CNxqbMAVF[i + 1][j] + temp[i][j];
                b0CNxqbMAVF[i + 1][j + 1] = b0CNxqbMAVF[i + 1][j + 1] + temp[i][j];
                b0CNxqbMAVF[i + 1][j - 1] = b0CNxqbMAVF[i + 1][j - 1] + temp[i][j];
                b0CNxqbMAVF[i][j + 1] = b0CNxqbMAVF[i][j + 1] + temp[i][j];
                b0CNxqbMAVF[i][j - 1] = b0CNxqbMAVF[i][j - 1] + temp[i][j];
                b0CNxqbMAVF[i - 1][j] = b0CNxqbMAVF[i - 1][j] + temp[i][j];
                b0CNxqbMAVF[i - 1][j + 1] = b0CNxqbMAVF[i - 1][j + 1] + temp[i][j];
                b0CNxqbMAVF[i - 1][j - 1] = b0CNxqbMAVF[i - 1][j - 1] + temp[i][j];
            }
    for (i = 1; i <= 9; i++) {
        j = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j <= 9) {
            temp[i][j] = temp[i][j] + b0CNxqbMAVF[i][j];
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
            j++;
        };
    }
    change (TDYRofrlTVCG +1, temp);
}

void  QXSP6U (int array [] [10]) {
    int i = 1, j;
    while (1) {
        for (j = 1; j <= 8; j++)
            cout << array[i][j] << " ";
        cout << array[i][9] << endl;
        if (i == 9)
            break;
        i++;
    };
}

