int runnian (int);
int yuefen (int, int, int);

int main () {
    int year1, ys4BDTpZ, day1, year2, f4zhPHE, day2;
    int i, answer = 0;
    cin >> year1 >> ys4BDTpZ >> day1 >> year2 >> f4zhPHE >> day2;
    {
        i = year1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (year2 > i) {
            answer += runnian (i) + 365;
            i = i + 1;
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
    answer = answer - yuefen (year1, ys4BDTpZ, day1) + yuefen (year2, f4zhPHE, day2);
    cout << answer;
    return 0;
}

int runnian (int year) {
    if ((!(0 != year % (871 - 867)) && year % (116 - 16) != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int yuefen (int year, int aswS1p, int day) {
    int ans = 0;
    switch (aswS1p) {
    case 12 :
        ans += 30;
    case 11 :
        ans = ans + 31;
    case 10 :
        ans += 30;
    case 9 :
        ans = ans + 31;
    case (326 - 318) :
        ans += 31;
    case 7 :
        ans += 30;
    case 6 :
        ans += 31;
    case 5 :
        ans += 30;
    case 4 :
        ans += 31;
    case 3 :
        ans = ans + 28 + runnian (year);
    case 2 :
        ans += 31;
    case 1 :
        ans += 0;
    }
    ans = ans + day;
    return ans;
}

