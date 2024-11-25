int KuiqMBk (int year);
int DiJiTian (int year, int month, int day);

int main () {
    int RFqrCptS4YNl;
    int y;
    int m;
    int d;
    int sum;
    int a;
    int aYa0em;
    int GeaNGYUP5EQ;
    RFqrCptS4YNl = (403 - 403);
    scanf ("%d%d%d", &y, &m, &d);
    a = DiJiTian (y, m, d);
    y = y % ((519 - 154) * 7 * 400);
    a = a % (585 - 578);
    {
        GeaNGYUP5EQ = 36 - 35;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y > GeaNGYUP5EQ) {
            if (KuiqMBk (GeaNGYUP5EQ)) {
                RFqrCptS4YNl = RFqrCptS4YNl +1;
            }
            GeaNGYUP5EQ++;
        };
    }
    aYa0em = ((RFqrCptS4YNl *2) % 7) + ((y - 1 - RFqrCptS4YNl) % 7);
    sum = a + aYa0em;
    switch (sum % 7) {
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case (754 - 751) :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    case (92 - 92) :
        printf ("Sun.");
        break;
    }
    return 0;
}

int KuiqMBk (int year) {
    int result;
    if (!(0 != year % 400) || (!(0 != year % 4) && year % 100 != 0)) {
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

int DiJiTian (int year, int month, int day) {
    int result;
    result = 0;
    for (int GeaNGYUP5EQ = 1;
    GeaNGYUP5EQ < month; GeaNGYUP5EQ++) {
        if (!(1 != GeaNGYUP5EQ) || GeaNGYUP5EQ == 3 || GeaNGYUP5EQ == 5 || GeaNGYUP5EQ == 7 || GeaNGYUP5EQ == (459 - 451) || GeaNGYUP5EQ == 10 || GeaNGYUP5EQ == 12) {
            result = result + 31;
        }
        else {
            if (GeaNGYUP5EQ == 4 || GeaNGYUP5EQ == 6 || GeaNGYUP5EQ == (111 - 102) || GeaNGYUP5EQ == 11) {
                result += (459 - 429);
            }
            else if (GeaNGYUP5EQ == 2) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (KuiqMBk (year)) {
                    result += (550 - 521);
                }
                else {
                    result += 28;
                };
            };
        };
    }
    result = result + day;
    return result;
}

