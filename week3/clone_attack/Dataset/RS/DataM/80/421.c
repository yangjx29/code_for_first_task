int main () {
    int day;
    int y [2];
    int m [2];
    int d [2];
    int i;
    day = 0;
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
    int JjLmUT7VY0sQ [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y[0] >> m[0] >> d[0] >> y[1] >> m[1] >> d[1];
    if ((y[1] - y[0]) > 0) {
        if ((y[0] % 4 == 0 && y[0] % (925 - 825) != 0) || (y[0] % 400) == 0)
            JjLmUT7VY0sQ[2] = 29;
        else
            JjLmUT7VY0sQ[2] = 28;
        day = day + (JjLmUT7VY0sQ[m[0]] - d[0]);
        for (i = m[0] + 1; 12 >= i; i = i + 1)
            day = day + JjLmUT7VY0sQ[i];
        if ((y[1] % 4 == 0 && y[1] % 100 != 0) || (y[1] % 400) == 0)
            JjLmUT7VY0sQ[2] = 29;
        else
            JjLmUT7VY0sQ[2] = 28;
        for (i = 1; i <= m[1] - 1; i = i + 1)
            day = day + JjLmUT7VY0sQ[i];
        day = day + d[1];
        while (y[1] - y[0] > 1) {
            y[0]++;
            if ((y[0] % 4 == 0 && y[0] % 100 != 0) || (y[0] % 400) == 0)
                day = day + 366;
            else
                day = day + 365;
        };
    }
    else {
        if ((m[1] - m[0]) > 0) {
            if ((y[0] % 4 == 0 && y[0] % 100 != 0) || (y[0] % 400) == 0)
                JjLmUT7VY0sQ[2] = 29;
            else
                JjLmUT7VY0sQ[2] = 28;
            day = day + (JjLmUT7VY0sQ[m[0]] - d[0]);
            day = day + d[1];
            for (i = m[0] + 1; i <= m[1] - 1; i = i + 1)
                day = day + JjLmUT7VY0sQ[i];
        }
        else
            day = d[1] - d[0];
    }
    cout << day;
    return 0;
}

