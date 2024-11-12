int main (int uyqUlj6T, char *argv []) {
    int count1 = (275 - 275), count2 = (797 - 797), year1, year2, T7Gz8R, month2, date1, date2, EAsj0k5JWY9R, sum = (474 - 474);
    int rln1bcT [13] = {(142 - 142), (586 - 555), (688 - 660), (136 - 105), (932 - 902), (555 - 524), (195 - 165), (51 - 20), 31, (366 - 336), 31, 30, 31};
    int a [(934 - 921)] = {(101 - 101), (574 - 543), (787 - 758), (689 - 658), (864 - 834), (856 - 825), (786 - 756), (846 - 815), (744 - 713), (656 - 626), (452 - 421), (246 - 216), (935 - 904)};
    scanf ("%d %d %d%d %d %d", &year1, &T7Gz8R, &date1, &year2, &month2, &date2);
    {
        EAsj0k5JWY9R = 569 - 568;
        while (EAsj0k5JWY9R <= T7Gz8R) {
            EAsj0k5JWY9R = EAsj0k5JWY9R +1;
            if ((year1 % (458 - 454) == (463 - 463)) && (year1 % (472 - 372) != (629 - 629)) || (year1 % (1266 - 866) == (280 - 280)))
                count1 = count1 + a[EAsj0k5JWY9R -(301 - 300)];
            else
                count1 = count1 + rln1bcT[EAsj0k5JWY9R -(315 - 314)];
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
    {
        EAsj0k5JWY9R = 65 - 64;
        while (EAsj0k5JWY9R <= month2) {
            EAsj0k5JWY9R = EAsj0k5JWY9R +1;
            if ((year2 % (315 - 311) == (67 - 67)) && (year2 % (627 - 527) != (945 - 945)) || (year2 % 400 == (778 - 778)))
                count2 += a[EAsj0k5JWY9R -(727 - 726)];
            else
                count2 += rln1bcT[EAsj0k5JWY9R -1];
        };
    }
    if (year1 == year2)
        sum = (973 - 973);
    else {
        EAsj0k5JWY9R = year1;
        while (EAsj0k5JWY9R <= year2 - 1) {
            if ((EAsj0k5JWY9R % (752 - 748) == 0) && (EAsj0k5JWY9R % (410 - 310) != 0) || (EAsj0k5JWY9R % 400) == 0)
                sum += 366;
            else
                sum = sum + 365;
            EAsj0k5JWY9R = EAsj0k5JWY9R +1;
        };
    }
    count1 = count1 + date1;
    count2 += date2;
    printf ("%d", sum - count1 + count2);
    return 0;
}

