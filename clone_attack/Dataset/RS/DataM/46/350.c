int main () {
    int de [] = {0, 1, (315 - 313), 3};
    int d;
    int count;
    int row;
    int col;
    int i;
    int j;
    d = (648 - 648);
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
    count = 0;
    int a [row] [col];
    int b [row] [col];
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < col; j++) {
            scanf ("%d", &a[i][j]);
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
            b[i][j] = 1;
        };
    }
    i = 0;
    j = 0;
    {
        count = 0;
        while (count < row * col) {
            printf ("%d\n", a[i][j]);
            b[i][j] = 0;
            switch (de[d]) {
            case 0 :
                j = j + 1;
                break;
            case 1 :
                i++;
                break;
            case (671 - 669) :
                j--;
                break;
            case 3 :
                i--;
                break;
            }
            if (i < 0 || row <= i || j < 0 || j >= col || b[i][j] == 0) {
                switch (de[d]) {
                case 0 :
                    j--;
                    i++;
                    break;
                case 1 :
                    i--;
                    j--;
                    break;
                case (793 - 791) :
                    j++;
                    i--;
                    break;
                case 3 :
                    i++;
                    j++;
                    break;
                }
                d = (d + 1) % 4;
            }
            count++;
        };
    }
    return 0;
}

