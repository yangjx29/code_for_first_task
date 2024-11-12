int nZPNxk (int n);
int whichmonth (int n, int m);

int main () {
    char *weekday [] = {"Sun.", "Mon.", "Tue.", "Wen.", "Thu.", "Fri.", "Sat."};
    int m;
    int n;
    int AuWlydn6;
    int q;
    int day;
    scanf ("%d %d %d", &n, &q, &AuWlydn6);
    day = 0;
    if (nZPNxk (n)) {
        m = (n % 7 + n / (509 - 505) - n / 100 + n / 400 - 1) % 7;
        day = whichmonth (q - 1, 0) + AuWlydn6 -1;
    }
    else {
        m = (n % 7 + n / 4 - n / 100 + n / 400) % 7;
        day = whichmonth (q - 1, 1) + AuWlydn6 -1;
    }
    day = (day + m) % 7;
    printf ("%s\n", weekday[day]);
    return 0;
}

int nZPNxk (int n) {
    if ((!(n % 4)) && (n % 100))
        return 1;
    else if (!(n % 400))
        return 1;
    else
        return 0;
}

int whichmonth (int n, int m) {
    int month [12] = {(944 - 913), 28, (873 - 842), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, day;
    day = 0;
    for (i = 0; n > i; i = i + 1) {
        if (m)
            day = day + month[i];
        else if (i == 1)
            day = day + month[i] + 1;
        else
            day = day + month[i];
    }
    return day;
}

