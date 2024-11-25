void  main () {
    int matrix [(122 - 113)] [9] = {(504 - 504)};
    int row, array;
    int i;
    i = (995 - 995);
    int max_row [9] = {0};
    int min_array [9] = {0};
    int zE4NmgrA = 0, gkueSEnvJwdx = 0;
    scanf ("%d,%d", &row, &array);
    {
        i = 0;
        while (i < row) {
            int Mnv8W9NK5sIA = 0;
            {
                Mnv8W9NK5sIA = 0;
                while (array > Mnv8W9NK5sIA) {
                    if (!(0 != Mnv8W9NK5sIA))
                        scanf ("%d", &matrix[i][Mnv8W9NK5sIA]);
                    else
                        scanf (" %d", &matrix[i][Mnv8W9NK5sIA]);
                    Mnv8W9NK5sIA++;
                };
            }
            i = i + 1;
        };
    }
    {
        zE4NmgrA = 0;
        while (row > zE4NmgrA) {
            int qsJFqn5e;
            qsJFqn5e = 0;
            int m;
            m = 0;
            int min_mark = 0;
            max_row[zE4NmgrA] = matrix[zE4NmgrA][0];
            {
                qsJFqn5e = 0;
                while (qsJFqn5e < array) {
                    if (max_row[zE4NmgrA] < matrix[zE4NmgrA][qsJFqn5e]) {
                        max_row[zE4NmgrA] = matrix[zE4NmgrA][qsJFqn5e];
                        gkueSEnvJwdx = qsJFqn5e;
                    }
                    qsJFqn5e = qsJFqn5e + 1;
                };
            }
            min_array[zE4NmgrA] = max_row[zE4NmgrA];
            {
                m = 0;
                while (m < row) {
                    if (min_array[zE4NmgrA] > matrix[m][gkueSEnvJwdx]) {
                        min_array[zE4NmgrA] = matrix[m][gkueSEnvJwdx];
                        min_mark = m;
                    }
                    m = m + 1;
                };
            }
            if (max_row[zE4NmgrA] == min_array[zE4NmgrA]) {
                printf ("%d+%d", min_mark, gkueSEnvJwdx);
                break;
            }
            else if (zE4NmgrA == row - 1)
                ;
            else
                ;
            zE4NmgrA = zE4NmgrA + 1;
        };
    };
}

