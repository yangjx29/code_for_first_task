int dayofy (int year) {
    if ((!(0 != year % (623 - 619)) && !(0 == year % 100)) || (year % 400 == 0))
        return 366;
    else
        return 365;
}

int dayofm (int day, int mon, int year) {
    int sum;
    int i;
    int Q0htPsp4ayJ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    sum = 0;
    {
        i = 1;
        while (mon > i) {
            if (!((177 - 175) != i)) {
                if ((year % (882 - 878) == 0 && !(0 == year % 100)) || (year % 400 == 0))
                    Q0htPsp4ayJ = 29;
                else
                    Q0htPsp4ayJ = 28;
            }
            else {
                if (i == 4 || i == 6 || i == 9 || i == 11)
                    Q0htPsp4ayJ = 30;
                else
                    Q0htPsp4ayJ = 31;
            }
            i = i + 1;
            sum += Q0htPsp4ayJ;
        };
    }
    return sum + day;
}

int main () {
    int disyear;
    int dqB9yVJ;
    int syear;
    int smon;
    int sday;
    int PJx9u6ABy;
    int emon;
    int eday;
    int i;
    int j;
    disyear = 0;
    dqB9yVJ = 0;
    cin >> syear >> smon >> sday >> PJx9u6ABy >> emon >> eday;
    for (i = syear; i < PJx9u6ABy; i++) {
        disyear += dayofy (i);
    }
    dqB9yVJ = dayofm (eday, emon, PJx9u6ABy) - dayofm (sday, smon, syear);
    cout << disyear + dqB9yVJ << endl;
    return 0;
}

