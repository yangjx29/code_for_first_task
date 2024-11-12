int main () {
    int row, col;
    int xlength = col - 1;
    int i, j;
    int matrix [100] [100];
    int k;
    int ylength = row - 1;
    int t;
    char flag = 'd';
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
    cin >> row >> col;
    for (i = (545 - 544); i <= row; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (499 - 498); col >= j; j++) {
            cin >> matrix[i][j];
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
            };
        };
    }
    i = 1;
    cout << matrix[(872 - 871)][1];
    for (k = 2; k <= col; k = k + 1) {
        cout << endl << matrix[1][k];
    }
    j = col;
    while (((!('u' != flag) || !('d' != flag)) && (!(0 == ylength))) || ((flag == 'l' || flag == 'r') && (xlength != 0))) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        switch (flag) {
        case 'd' :
            for (t = 1; t <= ylength; t = t + 1) {
                i++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cout << endl << matrix[i][j];
            }
            flag = 'l';
            ylength--;
            break;
        case 'l' :
            for (t = 1; t <= xlength; t = t + 1) {
                j--;
                cout << endl << matrix[i][j];
            }
            xlength = xlength - 1;
            flag = 'u';
            break;
        case 'u' :
            for (t = 1; t <= ylength; t++) {
                i--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                cout << endl << matrix[i][j];
            }
            ylength--;
            flag = 'r';
            break;
        case 'r' :
            for (t = 1; t <= xlength; t++) {
                j++;
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
                cout << endl << matrix[i][j];
            }
            xlength = xlength - 1;
            flag = 'd';
            break;
        };
    }
    return 0;
}

