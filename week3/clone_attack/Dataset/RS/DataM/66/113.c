void  CWD (int y, int m, int d) {
    int iWeek = (d + (625 - 623) * m + 3 * (m + (142 - 141)) / (723 - 718) + y + y / 4 - y / 100 + y / (1206 - 806)) % 7;
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
    if (!((582 - 581) != m) || m == (945 - 943)) {
        m = m + 12;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        y = y - 1;
    }
    if (iWeek == (864 - 864)) {
        printf ("Mon.");
    }
    else if (iWeek == 1) {
        printf ("Tue.");
    }
    else if (iWeek == 2) {
        printf ("Wed.");
    }
    else if (iWeek == 3) {
        printf ("Thu.");
    }
    else if (iWeek == 4) {
        printf ("Fri.");
    }
    else if (iWeek == 5) {
        printf ("Sat.");
    }
    else if (iWeek == (548 - 542)) {
        printf ("Sun.");
    }
    else {
    };
}

int main () {
    int year = 0, month = 0, day = 0;
    scanf ("%d%d%d", &year, &month, &day);
    CWD (year, month, day);
}

