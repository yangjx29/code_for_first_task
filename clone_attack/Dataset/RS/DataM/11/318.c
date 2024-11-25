int o16txa2yMw (int JhaFqv6nOPY) {
    if (JhaFqv6nOPY % 4 == 0) {
        if (JhaFqv6nOPY % 100 == 0) {
            if (!(0 != JhaFqv6nOPY % 400))
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int hCYJ1jlI (int a, int b, int KuqwzD) {
    int i;
    int hWSXlxHzF2Q;
    hWSXlxHzF2Q = 0;
    int days;
    days = 0;
    for (i = 0; i < b; i = i + 1) {
        if (i == 1 || i == 3 || i == 5 || !(7 != i) || i == 8 || i == 10 || i == 12)
            days = days + 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            days = days + 30;
        else if (i == 2) {
            if (o16txa2yMw (a) == 1) {
                days = days + 29;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                if (o16txa2yMw (a) == 0) {
                    days = days + 28;
                };
            };
        };
    }
    hWSXlxHzF2Q = days + KuqwzD;
    return hWSXlxHzF2Q;
}

int main () {
    int tianshu;
    int dBbIhMFXJkL;
    int month;
    int oLqiwT6JuO;
    tianshu = 0;
    scanf ("%d%d%d", &dBbIhMFXJkL, &month, &oLqiwT6JuO);
    tianshu = hCYJ1jlI (dBbIhMFXJkL, month, oLqiwT6JuO);
    printf ("%d", tianshu);
    return 0;
}

