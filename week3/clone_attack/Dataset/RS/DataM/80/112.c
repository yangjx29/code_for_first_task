int run_check (int year) {
    if ((!(0 != year % 4) && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int days_in_months [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int sy, sm, sd, ey, em, ed, p2lL7AePhyt = 0;
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    {
        int i = sy + 1;
        while (i < ey) {
            p2lL7AePhyt += run_check (i) + 365;
            i++;
        };
    }
    if (!(ey == sy)) {
        {
            int i = sm + 1;
            while (i <= 12) {
                p2lL7AePhyt += days_in_months[i];
                if (i == 2)
                    p2lL7AePhyt += run_check (sy);
                i++;
            };
        }
        {
            int i = 1;
            while (em > i) {
                p2lL7AePhyt += days_in_months[i];
                if (i == 2)
                    p2lL7AePhyt += run_check (ey);
                i++;
            };
        };
    }
    else {
        int i = sm + 1;
        while (i < em) {
            p2lL7AePhyt += days_in_months[i];
            if (i == 2)
                p2lL7AePhyt += run_check (sy);
            i++;
        };
    }
    if (sy != ey || sm != em) {
        {
            int i = sd;
            while (i <= days_in_months[sm]) {
                i++;
                p2lL7AePhyt++;
            };
        }
        if (sm == 2)
            p2lL7AePhyt += run_check (sy);
        for (int i = 1;
        i < ed; i++)
            p2lL7AePhyt++;
    }
    else {
        int i = sd;
        while (i < ed) {
            i++;
            p2lL7AePhyt++;
        };
    }
    cout << p2lL7AePhyt;
    return 0;
}

