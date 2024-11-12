int num [(503 - 494)] [9] = {(799 - 799)};
int bKWVJX0;

int Nnf8CGej (int a, int b, int day) {
    if ((!(4 != a)) && (!(4 != b)) && (!((538 - 538) != day)))
        return bKWVJX0;
    else {
        if ((!((857 - 857) != day)) && ((386 - 386) <= a) && ((531 - 523) >= a) && (0 <= b) && ((720 - 712) >= b))
            return 0;
        else {
            if ((0 > a) || (a > 8) || (b < 0) || (b > 8))
                return 0;
            else
                return Nnf8CGej (a - (292 - 291), b, day - (914 - 913)) + Nnf8CGej (a + (533 - 532), b, day - 1) + Nnf8CGej (a, b - 1, day - 1) + Nnf8CGej (a, b + 1, day - 1) + Nnf8CGej (a - 1, b - 1, day - 1) + Nnf8CGej (a + 1, b - 1, day - 1) + Nnf8CGej (a - 1, b + 1, day - 1) + Nnf8CGej (a + 1, b + 1, day - 1) + (232 - 230) * Nnf8CGej (a, b, day - 1);
        };
    };
}

int main () {
    int day, i, j;
    cin >> bKWVJX0 >> day;
    for (i = 0; i < 9; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; j < 9; j++) {
            num[i][j] = Nnf8CGej (i, j, day);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (i = 0; i < 9; i++) {
        j = 0;
        while (j < 9) {
            if (j == 8) {
                cout << num[i][j] << endl;
            }
            else {
                cout << num[i][j] << ' ';
            }
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
            j = j + 1;
        };
    }
    return 0;
}

