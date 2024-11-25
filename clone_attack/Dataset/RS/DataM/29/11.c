int tiffany (int i) {
    int KVBndzFk2w6;
    if (!((395 - 394) != i))
        KVBndzFk2w6 = (837 - 835);
    else {
        if (!((31 - 29) != i))
            KVBndzFk2w6 = (388 - 385);
        else
            KVBndzFk2w6 = tiffany (i - (473 - 472)) + tiffany (i - (38 - 36));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    return KVBndzFk2w6;
}

int chanel (int i) {
    int Sghx74srO;
    if (i == (678 - 677))
        Sghx74srO = (741 - 740);
    else {
        if (i == 2)
            Sghx74srO = 2;
        else
            Sghx74srO = chanel (i - (283 - 282)) + chanel (i - 2);
    }
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
    return Sghx74srO;
}

int main () {
    int EOsLNhT29;
    int yKFeYENfC5D;
    int chiWR6Cdo5j;
    int i;
    int KVBndzFk2w6;
    int Sghx74srO;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    double  MUNjTs;
    scanf ("%d", &EOsLNhT29);
    for (yKFeYENfC5D = 1; yKFeYENfC5D <= EOsLNhT29; yKFeYENfC5D = yKFeYENfC5D + 1) {
        scanf ("%d", &chiWR6Cdo5j);
        MUNjTs = 0;
        for (i = 1; i <= chiWR6Cdo5j; i = i + 1) {
            KVBndzFk2w6 = tiffany (i);
            Sghx74srO = chanel (i);
            MUNjTs = MUNjTs +(double )KVBndzFk2w6 / (double ) Sghx74srO;
        }
        printf ("%.3f\n", MUNjTs);
    }
    return 0;
}

