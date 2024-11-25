int main () {
    double  GuHwvXO2;
    int k;
    int n;
    int gSOny2xWT [10] [3];
    int i;
    int j;
    int lXKQpCYlEjDd [45] [2] [2];
    int vbuA5BpG;
    int x;
    int y3LBca8lxE;
    k = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d%d", &gSOny2xWT[i][0], &gSOny2xWT[i][1], &gSOny2xWT[i][2]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - 1 > i) {
            {
                j = i + 1;
                while (n > j) {
                    lXKQpCYlEjDd[k][0][0] = i;
                    lXKQpCYlEjDd[k][0][1] = j;
                    lXKQpCYlEjDd[k][1][1] = (gSOny2xWT[i][0] - gSOny2xWT[j][0]) * (gSOny2xWT[i][0] - gSOny2xWT[j][0]) + (gSOny2xWT[i][1] - gSOny2xWT[j][1]) * (gSOny2xWT[i][1] - gSOny2xWT[j][1]) + (gSOny2xWT[i][2] - gSOny2xWT[j][2]) * (gSOny2xWT[i][2] - gSOny2xWT[j][2]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n * (n - 1) / 2 - 1) {
            {
                j = 0;
                while (j < n * (n - 1) / 2 - i - 1) {
                    if (lXKQpCYlEjDd[j][1][1] < lXKQpCYlEjDd[j + 1][1][1]) {
                        vbuA5BpG = lXKQpCYlEjDd[j][0][0];
                        lXKQpCYlEjDd[j][0][0] = lXKQpCYlEjDd[j + 1][0][0];
                        lXKQpCYlEjDd[j + 1][0][0] = vbuA5BpG;
                        vbuA5BpG = lXKQpCYlEjDd[j][0][1];
                        lXKQpCYlEjDd[j][0][1] = lXKQpCYlEjDd[j + 1][0][1];
                        lXKQpCYlEjDd[j + 1][0][1] = vbuA5BpG;
                        vbuA5BpG = lXKQpCYlEjDd[j][1][1];
                        lXKQpCYlEjDd[j][1][1] = lXKQpCYlEjDd[j + 1][1][1];
                        lXKQpCYlEjDd[j + 1][1][1] = vbuA5BpG;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n * (n - 1) / 2 > i) {
            GuHwvXO2 = sqrt (lXKQpCYlEjDd[i][1][1] * 1.0);
            x = lXKQpCYlEjDd[i][0][0];
            y3LBca8lxE = lXKQpCYlEjDd[i][0][1];
            i++;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", gSOny2xWT[x][0], gSOny2xWT[x][1], gSOny2xWT[x][2], gSOny2xWT[y3LBca8lxE][0], gSOny2xWT[y3LBca8lxE][1], gSOny2xWT[y3LBca8lxE][2], GuHwvXO2);
        };
    }
    return 0;
}

