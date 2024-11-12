int d2DCK6gEj4 (char *, char *);
char vI7xlHVOEu1D, w5RZST4;

int main () {
    char ZDiy3u6oY [(700 - 595)] = {'\0'};
    int aGIZ4d;
    int UQWgCNf;
    int G6tJyKxaPw;
    int wCUAwhEmrb;
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
    cin >> ZDiy3u6oY;
    wCUAwhEmrb = strlen (ZDiy3u6oY);
    vI7xlHVOEu1D = ZDiy3u6oY[(549 - 549)];
    w5RZST4 = ZDiy3u6oY[wCUAwhEmrb - (149 - 148)];
    for (aGIZ4d = (816 - 816); aGIZ4d < wCUAwhEmrb; aGIZ4d++) {
        if (ZDiy3u6oY[aGIZ4d] == w5RZST4) {
            G6tJyKxaPw = aGIZ4d;
            UQWgCNf = d2DCK6gEj4 (ZDiy3u6oY, ZDiy3u6oY +aGIZ4d);
            if (aGIZ4d < wCUAwhEmrb - 1)
                cout << UQWgCNf << " " << G6tJyKxaPw << endl;
            else
                cout << UQWgCNf << " " << G6tJyKxaPw;
            ZDiy3u6oY[UQWgCNf] = ' ';
        };
    }
    return 0;
}

int d2DCK6gEj4 (char *eRSTiFKVX, char *zwu8EkpPjQsU) {
    int UQWgCNf;
    if (*zwu8EkpPjQsU != vI7xlHVOEu1D)
        UQWgCNf = d2DCK6gEj4 (eRSTiFKVX, zwu8EkpPjQsU - 1);
    else
        UQWgCNf = zwu8EkpPjQsU - eRSTiFKVX;
    return UQWgCNf;
}

