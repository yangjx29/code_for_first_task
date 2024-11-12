int a [13] = {(734 - 734), 31, 28, 31, (88 - 58), 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int num;
    int year;
    int jJAy3kLP;
    int day;
    num = 0;
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
    cin >> year >> jJAy3kLP >> day;
    if ((!(0 != year % 4) && !(0 == year % (875 - 775))) || (year % 400 == 0))
        a[2]++;
    {
        int JwLtEBXPg = 1;
        while (JwLtEBXPg < jJAy3kLP) {
            num += a[JwLtEBXPg];
            JwLtEBXPg++;
        };
    }
    num = num + day;
    cout << num << endl;
    return 0;
}

