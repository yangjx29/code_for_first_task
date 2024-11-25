int main () {
    int WRMlejxX [2] [13] = {{0, (680 - 649), (872 - 844), (336 - 305), (941 - 911), (103 - 72), (837 - 807), 31, 31, (136 - 106), 31, 30, 31}, {0, 31, (731 - 702), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int year, month, GOodvX1Ki0t, total = (199 - 199), i;
    cin >> year >> month >> GOodvX1Ki0t;
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
    if (year % 4 == 0 && !(0 == year % 100) || year % 400 == 0) {
        for (i = (348 - 347); i < month; i = i + 1)
            total = total + WRMlejxX[1][i];
        total = total + GOodvX1Ki0t;
    }
    else {
        for (i = 1; i < month; i = i + 1)
            total = total + WRMlejxX[0][i];
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
        total = total + GOodvX1Ki0t;
    }
    cout << total << endl;
    return 0;
}

