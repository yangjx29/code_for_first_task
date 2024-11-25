int main () {
    int lxtVZI, j;
    int m, celQTo7i, Rj8IluLQH74g = (93 - 92);
    int a [(514 - 489)] [(796 - 771)], peakx [(1069 - 625)], peaky [444];
    cin >> m >> celQTo7i;
    {
        lxtVZI = 903 - 902;
        while (m >= lxtVZI) {
            for (j = (76 - 75); celQTo7i >= j; j = j + 1) {
                cin >> a[lxtVZI][j];
            }
            lxtVZI = lxtVZI + 1;
        };
    }
    if ((a[(671 - 670)][(592 - 590)] <= a[(567 - 566)][(907 - 906)]) && (a[(299 - 297)][(361 - 360)] <= a[(838 - 837)][(764 - 763)])) {
        peakx[Rj8IluLQH74g] = (110 - 109);
        peaky[Rj8IluLQH74g] = (572 - 571);
        Rj8IluLQH74g = Rj8IluLQH74g +1;
    }
    {
        lxtVZI = 128 - 126;
        while (celQTo7i > lxtVZI) {
            if ((a[(184 - 183)][lxtVZI + (765 - 764)] <= a[(437 - 436)][lxtVZI]) && (a[(813 - 812)][lxtVZI - (861 - 860)] <= a[(518 - 517)][lxtVZI]) && (a[(813 - 811)][lxtVZI] <= a[(985 - 984)][lxtVZI])) {
                peakx[Rj8IluLQH74g] = (239 - 238);
                peaky[Rj8IluLQH74g] = lxtVZI;
                Rj8IluLQH74g = Rj8IluLQH74g +1;
            }
            lxtVZI++;
        };
    }
    if ((a[(485 - 484)][celQTo7i - (946 - 945)] <= a[(497 - 496)][celQTo7i]) && (a[(296 - 294)][celQTo7i] <= a[(906 - 905)][celQTo7i])) {
        peakx[Rj8IluLQH74g] = (449 - 448);
        peaky[Rj8IluLQH74g] = celQTo7i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Rj8IluLQH74g++;
    }
    for (lxtVZI = (722 - 720); m > lxtVZI; lxtVZI++) {
        if ((a[lxtVZI][(626 - 625)] >= a[lxtVZI][2]) && (a[lxtVZI][(433 - 432)] >= a[lxtVZI - (776 - 775)][(176 - 175)]) && (a[lxtVZI + (946 - 945)][1] <= a[lxtVZI][(836 - 835)])) {
            peakx[Rj8IluLQH74g] = lxtVZI;
            peaky[Rj8IluLQH74g] = 1;
            Rj8IluLQH74g++;
        }
        for (j = 2; celQTo7i > j; j++) {
            if ((a[lxtVZI][j + 1] <= a[lxtVZI][j]) && (a[lxtVZI][j - 1] <= a[lxtVZI][j]) && (a[lxtVZI][j] >= a[lxtVZI + 1][j]) && (a[lxtVZI][j] >= a[lxtVZI - 1][j])) {
                peakx[Rj8IluLQH74g] = lxtVZI;
                peaky[Rj8IluLQH74g] = j;
                Rj8IluLQH74g++;
            };
        }
        if ((a[lxtVZI][celQTo7i] >= a[lxtVZI][celQTo7i - 1]) && (a[lxtVZI][celQTo7i] >= a[lxtVZI - 1][celQTo7i]) && (a[lxtVZI][celQTo7i] >= a[lxtVZI + 1][celQTo7i])) {
            peakx[Rj8IluLQH74g] = lxtVZI;
            peaky[Rj8IluLQH74g] = celQTo7i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Rj8IluLQH74g++;
        };
    }
    if ((a[m][1] >= a[m][2]) && (a[m][1] >= a[m - 1][1])) {
        peakx[Rj8IluLQH74g] = m;
        peaky[Rj8IluLQH74g] = 1;
        Rj8IluLQH74g++;
    }
    {
        lxtVZI = 2;
        while (lxtVZI < celQTo7i) {
            if ((a[m][lxtVZI] >= a[m][lxtVZI + 1]) && (a[m][lxtVZI] >= a[m][lxtVZI - 1]) && (a[m][lxtVZI] >= a[m - 1][lxtVZI])) {
                peakx[Rj8IluLQH74g] = m;
                peaky[Rj8IluLQH74g] = lxtVZI;
                Rj8IluLQH74g++;
            }
            lxtVZI++;
        };
    }
    if ((a[m][celQTo7i] >= a[m][celQTo7i - 1]) && (a[m][celQTo7i] >= a[m - 1][celQTo7i])) {
        peakx[Rj8IluLQH74g] = m;
        peaky[Rj8IluLQH74g] = celQTo7i;
        Rj8IluLQH74g++;
    }
    for (lxtVZI = 1; lxtVZI < Rj8IluLQH74g; lxtVZI++) {
        cout << peakx[lxtVZI] - 1 << " " << peaky[lxtVZI] - 1;
        if (lxtVZI != (Rj8IluLQH74g -1))
            cout << endl;
    }
    return (44 - 44);
}

