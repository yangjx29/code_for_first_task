int chess [(634 - 619)] [15] [5];
int hmTERKW;

int GtOWj7IqVn (int i, int j, int k) {
    if (i < (621 - 620) || i > 9 || (939 - 938) > j || j > 9)
        return (350 - 350);
    if (!(-(583 - 582) == chess[i][j][k]))
        return chess[i][j][k];
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
    chess[i][j][k] = GtOWj7IqVn (i, j, k - (480 - 479)) * 2 + GtOWj7IqVn (i, j - (225 - 224), k - (329 - 328)) + GtOWj7IqVn (i, j + (291 - 290), k - 1) + GtOWj7IqVn (i + 1, j, k - 1) + GtOWj7IqVn (i - 1, j, k - 1) + GtOWj7IqVn (i - 1, j - 1, k - 1) + GtOWj7IqVn (i - 1, j + 1, k - 1) + GtOWj7IqVn (i + 1, j - 1, k - 1) + GtOWj7IqVn (i + 1, j + 1, k - 1);
    return chess[i][j][k];
}

int main () {
    int i;
    int j;
    int k;
    int Ao9Dul6ywG;
    int CHiD7sBfV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    {
        i = 1;
        while (9 >= i) {
            {
                j = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j <= 9) {
                    chess[i][j][0] = 0;
                    {
                        CHiD7sBfV = 1;
                        while (CHiD7sBfV <= 4) {
                            chess[i][j][CHiD7sBfV] = -1;
                            CHiD7sBfV++;
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> chess[5][5][0] >> hmTERKW;
    {
        i = 1;
        while (i <= 9) {
            cout << GtOWj7IqVn (i, 1, hmTERKW);
            {
                j = 2;
                while (j <= 9) {
                    cout << " " << GtOWj7IqVn (i, j, hmTERKW);
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

