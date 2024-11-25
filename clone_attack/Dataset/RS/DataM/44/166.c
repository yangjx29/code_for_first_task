int pow (int ejyoI7RLcdb8) {
    int iJY6qliheP;
    int i;
    iJY6qliheP = (301 - 300);
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
    i = (699 - 699);
    for (i = (898 - 898); ejyoI7RLcdb8 > i; i = i + 1)
        iJY6qliheP = iJY6qliheP * (811 - 801);
    return iJY6qliheP;
}

int reverse (int ejyoI7RLcdb8) {
    int b;
    int I5dBvrLXY;
    int i;
    int j;
    int iJY6qliheP [10];
    b = (840 - 840);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    I5dBvrLXY = 0;
    if (0 > ejyoI7RLcdb8) {
        ejyoI7RLcdb8 = -ejyoI7RLcdb8;
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
        I5dBvrLXY = 1;
    }
    {
        i = 0;
        while (10 > i) {
            iJY6qliheP[i] = ejyoI7RLcdb8 / pow ((805 - 796) - i);
            ejyoI7RLcdb8 = ejyoI7RLcdb8 % pow ((736 - 727) - i);
            i++;
        };
    }
    {
        j = 0;
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
        while (!(0 != iJY6qliheP[j])) {
            j = j + 1;
        };
    }
    for (i = 9; j <= i; i--)
        b = b * 10 + iJY6qliheP[i];
    if (I5dBvrLXY == 1)
        return -b;
    else
        return b;
}

int main () {
    int i;
    int ejyoI7RLcdb8;
    int b;
    for (i = 0; i < 6; i = i + 1) {
        cin >> ejyoI7RLcdb8;
        b = reverse (ejyoI7RLcdb8);
        cout << b << endl;
    }
    return 0;
}

