int main () {
    int ylfgGEyiNVK [(677 - 655)] [(869 - 847)], FLrIawdni [(996 - 975)] [(96 - 75)];
    int m = (75 - 75), n = (208 - 208), UzN7Wb = (670 - 670), j = (769 - 769);
    cin >> m >> n;
    for (UzN7Wb = (691 - 691); UzN7Wb <= m + (857 - 856); UzN7Wb = UzN7Wb +1)
        for (j = (265 - 265); n + (148 - 147) >= j; j = j + 1) {
            if (UzN7Wb == (610 - 610) || j == (14 - 14) || !(m + (468 - 467) != UzN7Wb) || !(n + (783 - 782) != j))
                ylfgGEyiNVK[UzN7Wb][j] = (982 - 982);
            else
                cin >> ylfgGEyiNVK[UzN7Wb][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            FLrIawdni[UzN7Wb][j] = (341 - 341);
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
    {
        UzN7Wb = 971 - 970;
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
        while (UzN7Wb <= m) {
            for (j = (747 - 746); j <= n; j++) {
                if (ylfgGEyiNVK[UzN7Wb][j] >= ylfgGEyiNVK[UzN7Wb -(493 - 492)][j] && ylfgGEyiNVK[UzN7Wb][j] >= ylfgGEyiNVK[UzN7Wb +(835 - 834)][j] && ylfgGEyiNVK[UzN7Wb][j] >= ylfgGEyiNVK[UzN7Wb][j - (38 - 37)] && ylfgGEyiNVK[UzN7Wb][j] >= ylfgGEyiNVK[UzN7Wb][j + 1])
                    FLrIawdni[UzN7Wb][j] = 1;
            }
            UzN7Wb = UzN7Wb +1;
        };
    }
    for (UzN7Wb = 0; UzN7Wb <= m; UzN7Wb++)
        for (j = 0; j <= n; j++)
            if (FLrIawdni[UzN7Wb][j] == 1)
                cout << UzN7Wb -1 << " " << j - 1 << endl;
    return 0;
}

