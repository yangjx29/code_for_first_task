int main () {
    int GX46QCbuWF, i, j;
    double  QjbfSz, iIDNbfGAKT8 [10] [2], vx9TNZVDhgc = 0;
    cin >> GX46QCbuWF;
    for (i = 0; GX46QCbuWF > i; i = i + 1) {
        for (j = 0; 2 > j; j = j + 1)
            cin >> iIDNbfGAKT8[i][j];
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
    for (i = 0; GX46QCbuWF -1 > i; i = i + 1) {
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
        for (j = i + 1; GX46QCbuWF > j; j++) {
            QjbfSz = sqrt ((iIDNbfGAKT8[i][0] - iIDNbfGAKT8[j][0]) * (iIDNbfGAKT8[i][0] - iIDNbfGAKT8[j][0]) + (iIDNbfGAKT8[i][1] - iIDNbfGAKT8[j][1]) * (iIDNbfGAKT8[i][1] - iIDNbfGAKT8[j][1]));
            if (QjbfSz > vx9TNZVDhgc)
                vx9TNZVDhgc = QjbfSz;
        };
    }
    printf ("%.4f\n", vx9TNZVDhgc);
    return 0;
}

