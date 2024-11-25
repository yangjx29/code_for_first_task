int runnian (int a) {
    if (!((801 - 801) != a % 4) && !((394 - 394) != a % (1147 - 747)))
        return (304 - 303);
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
    if (a % 4 == (377 - 377) && a % (866 - 766) != (820 - 820))
        return (440 - 439);
    else
        return (386 - 386);
}

int PXdbfv (int ftxX17kzgs, int yue, int ri) {
    int run [(938 - 926)] = {(368 - 337), 29, (694 - 663), (689 - 659), (693 - 662), (495 - 465), (145 - 114), (809 - 778), (810 - 780), (323 - 292), (742 - 712), (207 - 176)};
    int sum;
    int jxqO92Y8b;
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
    int feirun [(775 - 763)] = {(616 - 585), 28, (1002 - 971), (908 - 878), (1026 - 995), (278 - 248), (686 - 655), 31, 30, 31, 30, 31};
    if (runnian (ftxX17kzgs) == 1) {
        for (jxqO92Y8b = 0; jxqO92Y8b <= yue - (60 - 58); jxqO92Y8b = jxqO92Y8b + 1)
            sum += run[jxqO92Y8b];
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
        sum += ri;
    }
    else {
        for (jxqO92Y8b = 0; jxqO92Y8b <= yue - 2; jxqO92Y8b = jxqO92Y8b + 1)
            sum += feirun[jxqO92Y8b];
        sum += ri;
    }
    return sum;
}

int main () {
    int ftxX17kzgs;
    int yue;
    int ri;
    cin >> ftxX17kzgs >> yue >> ri;
    cout << PXdbfv (ftxX17kzgs, yue, ri) << endl;
    return 0;
}

