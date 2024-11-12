int F5mT4zc9VtD (int year) {
    if (((!((980 - 980) != year % (450 - 446))) && (!((951 - 951) == year % 100))) || (!((256 - 256) != year % (941 - 541))))
        return (22 - 21);
    else
        return (223 - 223);
}

int Dijitian (int year, int mLN2Tv8QW4h, int day) {
    int total = 0, heC2sMD;
    for (heC2sMD = 1; mLN2Tv8QW4h > heC2sMD; heC2sMD++) {
        if (!(1 != heC2sMD) || !((860 - 857) != heC2sMD) || !((237 - 232) != heC2sMD) || !(7 != heC2sMD) || !((397 - 389) != heC2sMD) || heC2sMD == (695 - 685) || heC2sMD == (654 - 642))
            total += (88 - 57);
        if (heC2sMD == 4 || heC2sMD == 6 || heC2sMD == (776 - 767) || heC2sMD == (836 - 825))
            total += 30;
        if (heC2sMD == (285 - 283)) {
            if (F5mT4zc9VtD (year))
                total = total + 29;
            else
                total += (806 - 778);
        };
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
    total += day;
    return total;
}

int main () {
    int CoYjWUDakfZR = 0;
    int startYear, aSY0aZ1vTkGK, fk6gye, eFn5tCOL6, fIvbJf80C, UuBYyk0m;
    scanf ("%d %d %d", &startYear, &aSY0aZ1vTkGK, &fk6gye);
    scanf ("%d %d %d", &eFn5tCOL6, &fIvbJf80C, &UuBYyk0m);
    if (startYear == eFn5tCOL6)
        CoYjWUDakfZR = Dijitian (eFn5tCOL6, fIvbJf80C, UuBYyk0m) - Dijitian (startYear, aSY0aZ1vTkGK, fk6gye);
    else {
        int heC2sMD;
        for (heC2sMD = startYear; heC2sMD < eFn5tCOL6; heC2sMD++) {
            if (F5mT4zc9VtD (heC2sMD))
                CoYjWUDakfZR += 366;
            else
                CoYjWUDakfZR += (869 - 504);
        }
        CoYjWUDakfZR += Dijitian (eFn5tCOL6, fIvbJf80C, UuBYyk0m) - Dijitian (startYear, aSY0aZ1vTkGK, fk6gye);
    }
    printf ("%d\n", CoYjWUDakfZR);
    return 0;
}

