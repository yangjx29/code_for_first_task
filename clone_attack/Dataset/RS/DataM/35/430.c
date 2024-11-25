int main (int argc, char *V72yPsgvXO []) {
    int matrix [(418 - 410)] [(995 - 987)];
    int a, LeUDf1, row, col, n, m, NmgtKLl9, roww, coll, decide;
    scanf ("%d,%d", &a, &LeUDf1);
    LeUDf1 = LeUDf1 -(975 - 974);
    a = a - (52 - 51);
    {
        row = 779 - 779;
        while (a >= row) {
            {
                col = 680 - 680;
                while (LeUDf1 >= col) {
                    scanf ("%d", &matrix[row][col]);
                    col = col + 1;
                };
            }
            row = row + 1;
        };
    }
    decide = (373 - 373);
    {
        row = 297 - 297;
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
        while (row <= a) {
            {
                col = 888 - 888;
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
                while (col <= LeUDf1) {
                    NmgtKLl9 = (903 - 903);
                    n = matrix[row][col];
                    m = (344 - 344);
                    {
                        roww = 333 - 333;
                        while (a >= roww) {
                            if (n < matrix[roww][col]) {
                                m++;
                            }
                            roww++;
                        };
                    }
                    {
                        coll = 0;
                        while (coll <= LeUDf1) {
                            if (n > matrix[row][coll])
                                NmgtKLl9 = NmgtKLl9 +1;
                            coll++;
                        };
                    }
                    if (m == a && NmgtKLl9 == LeUDf1) {
                        decide = 1;
                        printf ("%d+%d", row, col);
                    }
                    col = col + 1;
                };
            }
            row++;
        };
    }
    if (decide == 0)
        printf ("No");
    return 0;
}

