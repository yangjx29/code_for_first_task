int main () {
    int i;
    int month1;
    int day [2] [13] = {{0, (879 - 848), 28, 31, (455 - 425), 31, (477 - 447), 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int H7ERf2cqtl;
    int year2;
    int IIEgk790u;
    int day1;
    int day2;
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
    int sum;
    sum = 0;
    cin >> H7ERf2cqtl >> month1 >> day1;
    cin >> year2 >> IIEgk790u >> day2;
    for (; !(IIEgk790u == month1) || !(year2 == H7ERf2cqtl);) {
        if ((!(0 != H7ERf2cqtl % 4) && H7ERf2cqtl % 100 != 0) || (H7ERf2cqtl % 400 == 0))
            sum = sum + day[1][month1];
        else
            sum = sum + day[0][month1];
        if (month1 == 12) {
            month1 = month1 - 12;
            H7ERf2cqtl = H7ERf2cqtl +1;
        }
        else
            month1++;
    }
    sum = sum + day2 - day1;
    cout << sum;
}

