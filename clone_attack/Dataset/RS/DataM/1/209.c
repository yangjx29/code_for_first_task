int AnLZMorp (int, int, int);
int UPWIl8CEcBb (int);
int O2uinB (int, int);

int main () {
    int kgWbeLhp;
    cin >> kgWbeLhp;
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
    for (; kgWbeLhp >= (980 - 979);) {
        int NYl57g3IRBLi;
        int EpUOYE9Gm;
        int umvaXH;
        int SYAUOMNxp;
        NYl57g3IRBLi = (957 - 956);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        kgWbeLhp = kgWbeLhp - 1;
        cin >> EpUOYE9Gm;
        SYAUOMNxp = UPWIl8CEcBb (EpUOYE9Gm);
        {
            umvaXH = 2;
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
            while (SYAUOMNxp >= umvaXH) {
                NYl57g3IRBLi = NYl57g3IRBLi +AnLZMorp(EpUOYE9Gm, umvaXH, 2);
                umvaXH++;
            };
        }
        cout << NYl57g3IRBLi << endl;
    }
    return 0;
}

int UPWIl8CEcBb (int EpUOYE9Gm) {
    int j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        j = 1;
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
        while (1) {
            if (EpUOYE9Gm < O2uinB (2, j)) {
                return j - 1;
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
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    };
}

int O2uinB (int kmTSYIh8Kf, int Q1gkomvbE) {
    int NYl57g3IRBLi;
    int dirFq2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    NYl57g3IRBLi = 1;
    {
        dirFq2 = 1;
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
        while (dirFq2 <= Q1gkomvbE) {
            dirFq2++;
            NYl57g3IRBLi = NYl57g3IRBLi *kmTSYIh8Kf;
        };
    }
    return NYl57g3IRBLi;
}

int AnLZMorp (int EpUOYE9Gm, int g, int EZ4a5mE) {
    int j;
    int count;
    int umvaXH;
    int kmTSYIh8Kf [(20729 - 729)];
    j = 0;
    count = 0;
    if ((g == 1) && (EpUOYE9Gm >= EZ4a5mE))
        return 1;
    {
        umvaXH = EZ4a5mE;
        while (umvaXH < EpUOYE9Gm) {
            if (EpUOYE9Gm % umvaXH == 0) {
                kmTSYIh8Kf[j] = umvaXH;
                j++;
            }
            umvaXH++;
        };
    }
    if (j == 0)
        return 0;
    else {
        {
            umvaXH = 0;
            while (umvaXH < j) {
                count = count + AnLZMorp (EpUOYE9Gm / kmTSYIh8Kf[umvaXH], g - 1, kmTSYIh8Kf[umvaXH]);
                umvaXH++;
            };
        }
        return count;
    };
}

