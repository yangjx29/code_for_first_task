int U62KmVJa (int JFmKE6a) {
    int UkCbscgH;
    float ML4ZsUC1NnMW = sqrt (JFmKE6a);
    {
        UkCbscgH = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ML4ZsUC1NnMW >= UkCbscgH) {
            if (JFmKE6a % UkCbscgH == 0) {
                break;
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
            UkCbscgH = UkCbscgH +1;
        };
    }
    if (UkCbscgH <= ML4ZsUC1NnMW)
        return (1);
    else
        return (0);
}

int GtHQdNX (int JFmKE6a) {
    int i7nbxcWH6VG = 0, eurYkqteVBX = 0, M3qYPBd7nSc = 0;
    i7nbxcWH6VG = JFmKE6a;
    for (; i7nbxcWH6VG != 0;) {
        eurYkqteVBX = i7nbxcWH6VG % 10;
        i7nbxcWH6VG = i7nbxcWH6VG / 10;
        M3qYPBd7nSc = M3qYPBd7nSc *10 + eurYkqteVBX;
    }
    if (!(M3qYPBd7nSc != JFmKE6a))
        return (0);
    else
        return (1);
}

void  main () {
    int i7nbxcWH6VG, JFmKE6a, UkCbscgH;
    scanf ("%d%d", &i7nbxcWH6VG, &JFmKE6a);
    UkCbscgH = i7nbxcWH6VG;
    while ((U62KmVJa (UkCbscgH) == 1 || GtHQdNX (UkCbscgH) == 1) && UkCbscgH <= JFmKE6a)
        UkCbscgH = UkCbscgH +1;
    if (UkCbscgH > JFmKE6a)
        printf ("no");
    else {
        printf ("%d", UkCbscgH);
        {
            UkCbscgH++;
            while (UkCbscgH <= JFmKE6a) {
                if (U62KmVJa (UkCbscgH) == 0 && GtHQdNX (UkCbscgH) == 0)
                    printf (",%d", UkCbscgH);
                UkCbscgH++;
            };
        };
    };
}

