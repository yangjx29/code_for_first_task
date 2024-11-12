int main () {
    int h84FkuXShHsT;
    int KpRCzF;
    int UqjG3Lm;
    int PaPJc2;
    int tdSbn5Y6;
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
    char str [500];
    cin >> str;
    tdSbn5Y6 = strlen (str);
    {
        h84FkuXShHsT = 2;
        while (h84FkuXShHsT < tdSbn5Y6) {
            for (KpRCzF = 0; tdSbn5Y6 + 1 - h84FkuXShHsT > KpRCzF; KpRCzF = KpRCzF +1) {
                for (UqjG3Lm = KpRCzF, PaPJc2 = KpRCzF +h84FkuXShHsT - 1; PaPJc2 > UqjG3Lm; UqjG3Lm = UqjG3Lm +1, PaPJc2--) {
                    if (!(str[PaPJc2] == str[UqjG3Lm]))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (UqjG3Lm >= PaPJc2) {
                    for (UqjG3Lm = KpRCzF; UqjG3Lm < KpRCzF +h84FkuXShHsT; UqjG3Lm++)
                        cout << str[UqjG3Lm];
                    cout << endl;
                };
            }
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
            h84FkuXShHsT++;
        };
    }
    return 0;
}

