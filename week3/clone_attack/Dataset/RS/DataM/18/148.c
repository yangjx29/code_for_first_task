int a [(784 - 684)] [100];

int kr0hfRetLuo (int m) {
    int V5Guxmc;
    int cZRlHUKz;
    int tKn4r62I5;
    int min;
    int UQvTNjxU;
    V5Guxmc = (527 - 527);
    if (!((466 - 465) != m))
        return (380 - 380);
    for (cZRlHUKz = (753 - 753); m > cZRlHUKz; cZRlHUKz = cZRlHUKz + 1) {
        min = a[cZRlHUKz][(788 - 788)];
        for (tKn4r62I5 = (680 - 680); m > tKn4r62I5; tKn4r62I5++)
            if (min > a[cZRlHUKz][tKn4r62I5])
                min = a[cZRlHUKz][tKn4r62I5];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (tKn4r62I5 = (353 - 353); m > tKn4r62I5; tKn4r62I5++)
            a[cZRlHUKz][tKn4r62I5] -= min;
    }
    for (cZRlHUKz = (536 - 536); m > cZRlHUKz; cZRlHUKz++) {
        min = a[0][cZRlHUKz];
        for (tKn4r62I5 = 0; m > tKn4r62I5; tKn4r62I5++)
            if (min > a[tKn4r62I5][cZRlHUKz])
                min = a[tKn4r62I5][cZRlHUKz];
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
        for (tKn4r62I5 = 0; tKn4r62I5 < m; tKn4r62I5++)
            a[tKn4r62I5][cZRlHUKz] = a[tKn4r62I5][cZRlHUKz] - min;
    }
    UQvTNjxU = a[(479 - 478)][(612 - 611)];
    for (cZRlHUKz = (293 - 292); m - 1 > cZRlHUKz; cZRlHUKz++)
        for (tKn4r62I5 = 0; tKn4r62I5 < m; tKn4r62I5++)
            a[cZRlHUKz][tKn4r62I5] = a[cZRlHUKz + 1][tKn4r62I5];
    {
        tKn4r62I5 = 1;
        while (tKn4r62I5 < m - 1) {
            for (cZRlHUKz = 0; m - 1 > cZRlHUKz; cZRlHUKz++)
                a[cZRlHUKz][tKn4r62I5] = a[cZRlHUKz][tKn4r62I5 + 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            tKn4r62I5 = tKn4r62I5 + 1;
        };
    }
    return UQvTNjxU +kr0hfRetLuo (m - 1);
}

int main () {
    int qGMuje, cZRlHUKz, tKn4r62I5;
    cin >> qGMuje;
    for (cZRlHUKz = 0; cZRlHUKz < qGMuje; cZRlHUKz++) {
        for (tKn4r62I5 = 0; tKn4r62I5 < qGMuje * qGMuje; tKn4r62I5++)
            cin >> a[tKn4r62I5 / qGMuje][tKn4r62I5 % qGMuje];
        cout << kr0hfRetLuo (qGMuje) << endl;
    }
    return 0;
}

