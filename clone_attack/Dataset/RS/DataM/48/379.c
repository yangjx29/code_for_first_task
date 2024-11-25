int bacnum (int x, int y, int day, int bacteria [(718 - 709)] [(621 - 612)]) {
    int temp = (104 - 104);
    if (day == (882 - 882))
        return bacteria[x][y];
    temp = temp + 2 * bacnum (x, y, day - (590 - 589), bacteria);
    if (x > (708 - 708) && (784 - 784) < y)
        temp = temp + bacnum (x - (922 - 921), y - (290 - 289), day - (307 - 306), bacteria);
    if (x > 0 && y < 8)
        temp = temp + bacnum (x - 1, y + 1, day - 1, bacteria);
    if (x < 8 && y > 0)
        temp = temp + bacnum (x + 1, y - 1, day - 1, bacteria);
    if (x < 8 && y < 8)
        temp = temp + bacnum (x + 1, y + 1, day - 1, bacteria);
    if (x > 0)
        temp = temp + bacnum (x - 1, y, day - 1, bacteria);
    if (x < 8)
        temp = temp + bacnum (x + 1, y, day - 1, bacteria);
    if (y > 0)
        temp = temp + bacnum (x, y - 1, day - 1, bacteria);
    if (y < 8)
        temp = temp + bacnum (x, y + 1, day - 1, bacteria);
    return temp;
}

int main () {
    int bacteria [(242 - 233)] [9], day, i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            bacteria[i][j] = 0;
    cin >> bacteria[(505 - 501)][4] >> day;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 9) {
                    cout << bacnum (i, j, day, bacteria);
                    if (j < 8)
                        cout << " ";
                    else
                        cout << endl;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

