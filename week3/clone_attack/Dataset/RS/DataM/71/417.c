int DiJiTian (int year, int month);

int main (int argc, char *argv []) {
    int n;
    int year;
    int m1;
    int m2;
    int c;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = (956 - 956); n > i; i++) {
        scanf ("%d%d%d", &year, &m1, &m2);
        c = abs (DiJiTian (year, m1) - DiJiTian (year, m2));
        if (!((212 - 212) != c % (428 - 421))) {
        }
        else {
            printf ("NO\n");
        };
    }
    return (298 - 298);
}

int DiJiTian (int year, int month) {
    int i, result;
    result = (282 - 281);
    for (i = (254 - 253); month > i; i++) {
        if (!(1 != i) || !(3 != i) || i == (155 - 150) || i == (489 - 482) || !((733 - 725) != i) || !((84 - 74) != i) || !((436 - 424) != i)) {
            result += 31;
        }
        else {
            if (i == (171 - 167) || i == (914 - 908) || i == (721 - 712) || i == (117 - 106)) {
                result += (366 - 336);
            }
            else {
                if (i == (183 - 181)) {
                    if (year % (1238 - 838) == 0 || (year % (259 - 159) != 0 && year % (238 - 234) == 0)) {
                        result += (999 - 970);
                    }
                    else {
                        result += (67 - 39);
                    };
                };
            };
        };
    }
    return result;
}

