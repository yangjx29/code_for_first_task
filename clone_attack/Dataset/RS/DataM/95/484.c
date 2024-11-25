int main () {
    char GF9HxvI2 [(778 - 697)];
    char GbQXH17cPW [81];
    int TOsIKm;
    TOsIKm = (990 - 990);
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
    cin.getline (GF9HxvI2, 80);
    cin.getline (GbQXH17cPW, 80);
    while (!('\0' == GF9HxvI2[TOsIKm])) {
        if (GF9HxvI2[TOsIKm] >= 97)
            GF9HxvI2[TOsIKm] = GF9HxvI2[TOsIKm] - 32;
        if (GbQXH17cPW[TOsIKm] >= 97)
            GbQXH17cPW[TOsIKm] = GbQXH17cPW[TOsIKm] - 32;
        if (GF9HxvI2[TOsIKm] > GbQXH17cPW[TOsIKm]) {
            cout << '>';
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
            return 0;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (GF9HxvI2[TOsIKm] < GbQXH17cPW[TOsIKm]) {
            cout << '<';
            return 0;
        }
        TOsIKm++;
    }
    cout << '=';
    return 0;
}

