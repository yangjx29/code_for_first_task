int y3VYejvnD [(723 - 714)] [(700 - 691)], old [9] [9];
void  mul (int k, const  int day);
void  pam (int x, int y);

int main () {
    int m, n, i, tCt0AUxoJ;
    cin >> m >> n;
    memset (y3VYejvnD, (150 - 150), sizeof (y3VYejvnD));
    y3VYejvnD[(755 - 751)][4] = m;
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
    mul (0, n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 8) {
            {
                tCt0AUxoJ = 0;
                while (8 > tCt0AUxoJ) {
                    cout << y3VYejvnD[i][tCt0AUxoJ] << " ";
                    tCt0AUxoJ++;
                };
            }
            cout << y3VYejvnD[i][8] << endl;
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
    return 0;
}

void  mul (int k, const  int day) {
    int i, tCt0AUxoJ;
    {
        i = 4 - k;
        while (i <= 4 + k) {
            for (tCt0AUxoJ = 4 - k; 4 + k >= tCt0AUxoJ; tCt0AUxoJ = tCt0AUxoJ + 1)
                old[i][tCt0AUxoJ] = y3VYejvnD[i][tCt0AUxoJ];
            i++;
        };
    }
    {
        i = 4 - k;
        while (i <= 4 + k) {
            {
                tCt0AUxoJ = 4 - k;
                while (tCt0AUxoJ <= 4 + k) {
                    pam (i, tCt0AUxoJ);
                    tCt0AUxoJ++;
                };
            }
            i++;
        };
    }
    k = k + 1;
    if (k < day)
        mul (k, day);
    else
        return;
}

void  pam (int x, int y) {
    int i, tCt0AUxoJ;
    {
        i = 627 - 626;
        while (i <= x + 1) {
            {
                tCt0AUxoJ = y - 1;
                while (tCt0AUxoJ <= y + 1) {
                    y3VYejvnD[i][tCt0AUxoJ] = y3VYejvnD[i][tCt0AUxoJ] + old[x][y];
                    tCt0AUxoJ++;
                };
            }
            i++;
        };
    }
    return;
}

