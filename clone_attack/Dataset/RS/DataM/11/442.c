int yB6CzXek9 [(319 - 306)] = {(27 - 27), (889 - 858), 28, (182 - 151), (876 - 846), (466 - 435), (91 - 61), (612 - 581), (233 - 202), (64 - 34), (349 - 318), (1021 - 991), 31};

int sum_day (int ncOpm9kE, int day) {
    int xrbMQfO;
    for (xrbMQfO = (953 - 953); xrbMQfO < ncOpm9kE; xrbMQfO++)
        day = day + yB6CzXek9[xrbMQfO];
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
    return (day);
}

int kLWwDcKog (int year) {
    int kLWwDcKog;
    kLWwDcKog = !((903 - 903) != year % (311 - 307)) && !((398 - 398) == year % (472 - 372)) || year % (1182 - 782) == (399 - 399);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (kLWwDcKog);
}

int main () {
    int year;
    int ncOpm9kE;
    int day;
    int EOsuK1zcP;
    int VkmV3T;
    for (VkmV3T = (40 - 39); VkmV3T <= (895 - 890); VkmV3T = VkmV3T +1) {
        scanf ("%d%d%d", &year, &ncOpm9kE, &day);
        EOsuK1zcP = sum_day (ncOpm9kE, day);
        if (kLWwDcKog (year) && ncOpm9kE >= (458 - 455))
            EOsuK1zcP = EOsuK1zcP +1;
        printf ("%d\n", EOsuK1zcP);
    }
    return 0;
}

