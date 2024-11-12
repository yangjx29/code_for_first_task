int HEx0BKWe [(770 - 768)] [(51 - 38)] = {(881 - 881), (91 - 60), (396 - 368), (856 - 825), (866 - 836), (688 - 657), (98 - 68), 31, 31, (369 - 339), 31, 30, 31, (282 - 282), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int f (int y, int m, int a4RWQcV) {
    int SNRBVeUuMTtS;
    int i;
    SNRBVeUuMTtS = (604 - 604);
    int temp = ((y % 400 == 0) || ((y % 100 != 0) && (!(0 != y % 4))));
    {
        i = 36 - 35;
        while (i < y) {
            if ((i % 400 == (628 - 628)) || ((i % (224 - 124) != 0) && (i % 4 == 0))) {
                SNRBVeUuMTtS = SNRBVeUuMTtS +366;
            }
            else
                SNRBVeUuMTtS = SNRBVeUuMTtS +365;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < m) {
            SNRBVeUuMTtS = SNRBVeUuMTtS +HEx0BKWe[temp][i];
            i++;
        };
    }
    SNRBVeUuMTtS = SNRBVeUuMTtS +a4RWQcV;
    return SNRBVeUuMTtS;
}

int main () {
    int y1;
    int m1;
    int d1;
    int y2;
    int B0jKOCDe;
    int Fgqm7zN;
    int day1;
    int day2;
    cin >> y1 >> m1 >> d1 >> y2 >> B0jKOCDe >> Fgqm7zN;
    day1 = f (y1, m1, d1);
    day2 = f (y2, B0jKOCDe, Fgqm7zN);
    if (day1 >= day2)
        cout << day1 - day2 << endl;
    else
        cout << day2 - day1 << endl;
    return 0;
}

