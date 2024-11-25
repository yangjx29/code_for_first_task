int main () {
    int pmDfqJF6lUCw, year2, month1, month2, KYPbv8Lj1N3x, vKQvUCWsj, a, LlYnyRV = 0, Y0yujYJe2p;
    int date (int xisfw4JH1LG, int a);
    scanf ("%d%d%d", &pmDfqJF6lUCw, &month1, &KYPbv8Lj1N3x);
    scanf ("%d%d%d", &year2, &month2, &vKQvUCWsj);
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
    Y0yujYJe2p = vKQvUCWsj - KYPbv8Lj1N3x;
    for (; pmDfqJF6lUCw < year2 || (pmDfqJF6lUCw == year2 && month1 < month2);) {
        LlYnyRV = LlYnyRV +date (pmDfqJF6lUCw, month1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        month1++;
        if (month1 == 13) {
            pmDfqJF6lUCw++;
            month1 = 1;
        };
    }
    a = LlYnyRV +Y0yujYJe2p;
    printf ("%d\n", a);
    return 0;
}

int date (int xisfw4JH1LG, int a) {
    int s1atYoHN;
    if (a == 1 || a == 3 || a == 5 || !(7 != a) || a == 8 || a == 10 || !(12 != a))
        s1atYoHN = 31;
    else {
        if (((xisfw4JH1LG % 4 == 0 && xisfw4JH1LG % 100 != 0) || (xisfw4JH1LG % 400 == 0)) && a == 2)
            s1atYoHN = 29;
        else {
            if (!((xisfw4JH1LG % 4 == 0 && xisfw4JH1LG % 100 != 0) || (xisfw4JH1LG % 400 == 0)) && a == 2)
                s1atYoHN = 28;
            else {
                if (a == 4 || a == 6 || a == 9 || a == 11)
                    s1atYoHN = 30;
            };
        };
    }
    return (s1atYoHN);
}

