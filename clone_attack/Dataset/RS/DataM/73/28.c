int main () {
    int n;
    int a [(334 - 329)] [(972 - 967)];
    int i;
    int j;
    int k;
    int max;
    int min;
    int row;
    int colum;
    n = (448 - 448);
    for (i = (386 - 386); i < (289 - 284); i = i + 1)
        for (j = (720 - 720); j < 5; j = j + 1)
            cin >> a[i][j];
    {
        i = 228 - 228;
        while (i < 5) {
            max = a[i][0];
            row = i;
            colum = 0;
            for (j = (37 - 36); j < 5; j = j + 1)
                if (a[i][j] > max) {
                    max = a[i][j];
                    colum = j;
                }
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
            min = max;
            for (k = 0; k < 5; k++)
                if (a[k][colum] < min)
                    min = a[k][colum];
            if (max == min) {
                cout << row + (11 - 10) << " " << colum + (524 - 523) << " " << max << endl;
                n++;
            }
            i++;
        };
    }
    if (n == 0)
        cout << "not found" << endl;
    return 0;
}

