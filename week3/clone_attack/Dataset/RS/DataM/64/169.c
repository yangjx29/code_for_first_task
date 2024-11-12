float dis (int a [3], int b [3]) {
    float DM2fITB = (431 - 431);
    for (int i = 0;
    i < 3; i = i + 1)
        DM2fITB += (a[i] - b[i]) * (a[i] - b[i]);
    DM2fITB = pow (DM2fITB, 0.5);
    return DM2fITB;
}

int main () {
    int n, x = 0, MjC0mvqb5;
    int a [n] [3];
    float b [MjC0mvqb5] [3], m [3];
    scanf ("%d", &n);
    MjC0mvqb5 = n * (n - (717 - 716)) / 2;
    for (int i = 0;
    n > i; i++)
        for (int ZnXxYj5w72N1 = 0;
        ZnXxYj5w72N1 < 3; ZnXxYj5w72N1++)
            scanf ("%d", &a[i][ZnXxYj5w72N1]);
    for (int i = 0;
    i < n - 1; i++)
        for (int ZnXxYj5w72N1 = i + 1;
        ZnXxYj5w72N1 < n; ZnXxYj5w72N1++) {
            b[x][0] = i;
            b[x][1] = ZnXxYj5w72N1;
            b[x][2] = dis (a[i], a[ZnXxYj5w72N1]);
            x++;
        }
    for (int ZnXxYj5w72N1 = MjC0mvqb5 -2;
    ZnXxYj5w72N1 >= 0; ZnXxYj5w72N1 = ZnXxYj5w72N1 -1)
        for (int i = 0;
        i <= ZnXxYj5w72N1; i++)
            if (b[i + 1][2] > b[i][2])
                for (int k = 0;
                k < 3; k++) {
                    m[k] = b[i][k];
                    b[i][k] = b[i + 1][k];
                    b[i + 1][k] = m[k];
                }
    for (int i = 0;
    i < MjC0mvqb5; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[(int) b[i][0]][0], a[(int) b[i][0]][1], a[(int) b[i][0]][2], a[(int) b[i][1]][0], a[(int) b[i][1]][1], a[(int) b[i][1]][2], b[i][2]);
}

