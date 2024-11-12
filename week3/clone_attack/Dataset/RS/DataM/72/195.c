struct   sha {
    int gaodu;
    int x;
    int y;
    int exVdkrj3L6DZ;
}
mpybMjPR [100] [200], t;

int main () {
    int m, n;
    int i;
    int j;
    cin >> m >> n;
    for (i = 1; i <= m; i = i + 1) {
        for (j = 1; j <= n; j = j + 1) {
            cin >> mpybMjPR[i][j].gaodu;
            mpybMjPR[i][j].x = i;
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
            mpybMjPR[i][j].y = j;
            mpybMjPR[i][j].exVdkrj3L6DZ = 0;
        };
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
    for (i = 0; i <= m + 1; i = i + 1) {
        mpybMjPR[i][n + 1].gaodu = 0;
        mpybMjPR[i][0].gaodu = 0;
    }
    for (i = 0; i <= n + 1; i = i + 1) {
        mpybMjPR[m + 1][i].gaodu = 0;
        mpybMjPR[0][i].gaodu = 0;
    }
    for (i = 1; i <= m; i = i + 1) {
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
        for (j = 1; j <= n; j = j + 1) {
            if (mpybMjPR[i][j].gaodu >= mpybMjPR[i - 1][j].gaodu && mpybMjPR[i][j].gaodu >= mpybMjPR[i + 1][j].gaodu && mpybMjPR[i][j].gaodu >= mpybMjPR[i][j - 1].gaodu && mpybMjPR[i][j].gaodu >= mpybMjPR[i][j + 1].gaodu)
                mpybMjPR[i][j].exVdkrj3L6DZ = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (i = 1; i <= m; i = i + 1) {
        for (j = 1; j <= n; j++) {
            if (mpybMjPR[i][j].exVdkrj3L6DZ == 1) {
                cout << mpybMjPR[i][j].x - 1 << " " << mpybMjPR[i][j].y - 1 << endl;
            };
        };
    }
    return 0;
}

