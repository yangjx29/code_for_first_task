int UUolRgVmCF, EDkhYXpzl, jaLDTYU, jHofk5zUdt, FPVREtefUlXO, pAsIEZhTnaj;
int yBXnt03d5GF [(338 - 336)] [13] = {{(966 - 966), (537 - 506), 28, (1018 - 987), (1021 - 991), (765 - 734), 30, (613 - 582), 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
int month [25] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int xKidYs ();
    int AnHvSEAWdZCu ();
    int LpaoezC ();
    int RnMxGa (int Ea0gp257V);
    scanf ("%d%d%d%d%d%d", &UUolRgVmCF, &jaLDTYU, &FPVREtefUlXO, &EDkhYXpzl, &jHofk5zUdt, &pAsIEZhTnaj);
    printf ("%d\n", (AnHvSEAWdZCu () + xKidYs () + LpaoezC ()));
    return 0;
}

int RnMxGa (int Ea0gp257V) {
    if ((!(0 != Ea0gp257V % 4) && !(0 == Ea0gp257V % 100)) || (!(0 != Ea0gp257V % 400)))
        return 1;
    else
        return 0;
}

int AnHvSEAWdZCu () {
    int hcq91jaL4KF;
    int dNG2U8;
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
    hcq91jaL4KF = 0;
    {
        dNG2U8 = UUolRgVmCF +1;
        while (EDkhYXpzl > dNG2U8) {
            hcq91jaL4KF += 365 + RnMxGa (dNG2U8);
            dNG2U8 = dNG2U8 + 1;
        };
    }
    return hcq91jaL4KF;
}

int xKidYs () {
    int hcq91jaL4KF;
    int dNG2U8;
    hcq91jaL4KF = 0;
    if (EDkhYXpzl > UUolRgVmCF)
        jHofk5zUdt += 12;
    month[2] = yBXnt03d5GF[RnMxGa (UUolRgVmCF)][2];
    month[14] = yBXnt03d5GF[RnMxGa (EDkhYXpzl)][2];
    for (dNG2U8 = jaLDTYU + 1; dNG2U8 < jHofk5zUdt; dNG2U8++)
        hcq91jaL4KF += month[dNG2U8];
    return hcq91jaL4KF;
}

int LpaoezC () {
    if (jHofk5zUdt > jaLDTYU)
        return (yBXnt03d5GF[RnMxGa (UUolRgVmCF)][jaLDTYU] - FPVREtefUlXO +pAsIEZhTnaj);
    else
        return (pAsIEZhTnaj - FPVREtefUlXO);
}

