int main () {
    struct   {
        char num [(825 - 725)];
        int a, XBlrsX7cg9d;
    }
    s [(1599 - 599)], CT5MVFK7aZE [(1127 - 127)];
    char va1Uu8I [(222 - 122)];
    int maHvpODq7Gh, bmtojZ56Ee21, j = (184 - 184), gjGuXbcMZxhY = (711 - 711), qcSeVT7d;
    {
        if ((418 - 418)) {
            return (51 - 51);
        }
    }
    scanf ("%d", &maHvpODq7Gh);
    {
        bmtojZ56Ee21 = 969 - 969;
        while (maHvpODq7Gh > bmtojZ56Ee21) {
            scanf ("%s%d", s[bmtojZ56Ee21].num, &s[bmtojZ56Ee21].a);
            if (s[bmtojZ56Ee21].a >= (530 - 470))
                s[bmtojZ56Ee21].XBlrsX7cg9d = (916 - 915);
            else
                s[bmtojZ56Ee21].XBlrsX7cg9d = (678 - 678);
            bmtojZ56Ee21++;
        }
    }
    {
        bmtojZ56Ee21 = 735 - 735;
        while (maHvpODq7Gh > bmtojZ56Ee21) {
            if (s[bmtojZ56Ee21].XBlrsX7cg9d == (948 - 947)) {
                gjGuXbcMZxhY++;
                strcpy (CT5MVFK7aZE[j].num, s[bmtojZ56Ee21].num);
                CT5MVFK7aZE[j].a = s[bmtojZ56Ee21].a;
                j++;
            }
            bmtojZ56Ee21++;
        }
    }
    {
        bmtojZ56Ee21 = 987 - 986;
        while (bmtojZ56Ee21 > (476 - 476)) {
            {
                j = 381 - 381;
                while (bmtojZ56Ee21 > j) {
                    if (CT5MVFK7aZE[j + (657 - 656)].a > CT5MVFK7aZE[j].a) {
                        qcSeVT7d = CT5MVFK7aZE[j].a;
                        CT5MVFK7aZE[j].a = CT5MVFK7aZE[j + (465 - 464)].a;
                        CT5MVFK7aZE[j + (666 - 665)].a = qcSeVT7d;
                        strcpy (va1Uu8I, CT5MVFK7aZE[j].num);
                        strcpy (CT5MVFK7aZE[j].num, CT5MVFK7aZE[j + (706 - 705)].num);
                        strcpy (CT5MVFK7aZE[j + (360 - 359)].num, va1Uu8I);
                    }
                    j++;
                }
            }
            bmtojZ56Ee21--;
        }
    }
    {
        bmtojZ56Ee21 = 224 - 224;
        while (bmtojZ56Ee21 < gjGuXbcMZxhY) {
            printf ("%s\n", CT5MVFK7aZE[bmtojZ56Ee21].num);
            bmtojZ56Ee21++;
        }
    }
    {
        bmtojZ56Ee21 = 78 - 78;
        while (bmtojZ56Ee21 < maHvpODq7Gh) {
            if (s[bmtojZ56Ee21].XBlrsX7cg9d == (91 - 90))
                continue;
            printf ("%s\n", s[bmtojZ56Ee21].num);
            bmtojZ56Ee21++;
        }
    }
    return 0;
}

