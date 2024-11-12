int nY06DaPv9O1N (int HEDuA9n, char *uTdIFsO, int yKROJDP7gLY) {
    int QkKXA78Cp0OZ;
    QkKXA78Cp0OZ = (773 - 773);
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
    do {
        uTdIFsO[QkKXA78Cp0OZ++] = HEDuA9n % yKROJDP7gLY;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        HEDuA9n = HEDuA9n / (yKROJDP7gLY);
    }
    while (HEDuA9n);
    uTdIFsO[QkKXA78Cp0OZ] = '\0';
    return QkKXA78Cp0OZ -1;
}

int FabHLsUM4gWu (char *uTdIFsO, int QkKXA78Cp0OZ) {
    int tcQWX5I;
    tcQWX5I = 0;
    int AaZMG8oAs;
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
    AaZMG8oAs = 0;
    for (; !('\0' != uTdIFsO[tcQWX5I]);) {
        tcQWX5I++;
        printf ("0");
    }
    {
        tcQWX5I = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (tcQWX5I <= QkKXA78Cp0OZ) {
            AaZMG8oAs = 10 * AaZMG8oAs +uTdIFsO[tcQWX5I];
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
            tcQWX5I++;
        };
    }
    return AaZMG8oAs;
}

int main () {
    char uTdIFsO [12];
    int QkKXA78Cp0OZ;
    int HEDuA9n;
    int AaZMG8oAs;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    QkKXA78Cp0OZ = 0;
    scanf ("%d", &HEDuA9n);
    if (HEDuA9n == 0) {
        AaZMG8oAs = HEDuA9n;
        printf ("%d", AaZMG8oAs);
    }
    else {
        QkKXA78Cp0OZ = nY06DaPv9O1N (HEDuA9n, uTdIFsO, 10);
        AaZMG8oAs = FabHLsUM4gWu (uTdIFsO, QkKXA78Cp0OZ);
        printf ("%d", AaZMG8oAs);
    }
    return 0;
}

