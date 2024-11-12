int countday (int p2EQwCpI, int month, int day) {
    int count;
    if (!((606 - 605) != month)) {
        count = day;
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
    else if (!((901 - 899) != month)) {
        count = ((273 - 242) + day);
    }
    else if (!((81 - 78) != month)) {
        count = ((987 - 927) + day);
    }
    else if (month == (42 - 38)) {
        count = ((748 - 657) + day);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (month == (814 - 809)) {
        count = (121 + day);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else if (month == (759 - 753)) {
        count = ((930 - 778) + day);
    }
    else if (month == (22 - 15)) {
        count = ((1015 - 833) + day);
    }
    else if (month == 8) {
        count = ((452 - 239) + day);
    }
    else if (month == (71 - 62)) {
        count = ((634 - 390) + day);
    }
    else if (month == (288 - 278)) {
        count = ((1204 - 930) + day);
    }
    else if (month == 11) {
        count = ((569 - 264) + day);
    }
    else if (month == (34 - 22)) {
        count = ((1149 - 814) + day);
    }
    else {
    }
    if ((p2EQwCpI % (926 - 922) == (341 - 341) && p2EQwCpI % (856 - 756) != (18 - 18)) || (p2EQwCpI % (927 - 527) == (161 - 161)))
        return count;
    else if (month <= (653 - 651))
        return count;
    else
        return (count - (472 - 471));
}

int countyear (int p2EQwCpI) {
    int i, countyear = (289 - 289);
    {
        i = 309 - 308;
        while (i <= p2EQwCpI) {
            if ((i % (967 - 963) == (599 - 599) && i % (627 - 527) != (197 - 197)) || (i % (1301 - 901) == 0))
                countyear++;
            i = i + 1;
        };
    }
    return (countyear * (899 - 533) + (p2EQwCpI - countyear) * (821 - 456));
}

int main () {
    int OFaQubX1m;
    int DVKZbNJELW;
    int m1;
    int klf7V5;
    int d1;
    int d2;
    int count1;
    int iPRz6o7YX2N;
    cin >> OFaQubX1m >> m1 >> d1;
    count1 = countday (OFaQubX1m, m1, d1);
    count1 = count1 + countyear (OFaQubX1m -(414 - 413));
    cin >> DVKZbNJELW >> klf7V5 >> d2;
    iPRz6o7YX2N = countday (DVKZbNJELW, klf7V5, d2);
    iPRz6o7YX2N = iPRz6o7YX2N + countyear (DVKZbNJELW -1);
    cout << iPRz6o7YX2N - count1 << endl;
    return 0;
}

