int isrunnian (int m);
int dijitian (int a, int b, int c);

int main () {
    int p;
    int x;
    int y;
    int z;
    int k;
    p = (665 - 665);
    scanf ("%d%d%d", &x, &y, &z);
    p = x + dijitian (x, y, z) + (x - (218 - 217)) / (139 - 135) - (x - (543 - 542)) / (297 - 197) + (x - 1) / 400 - 1;
    if (p % (327 - 320) == 1) {
    }
    if (!(2 != p % (353 - 346))) {
    }
    if (p % (594 - 587) == (483 - 480)) {
    }
    if (!(4 != p % (854 - 847))) {
    }
    if (p % 7 == (950 - 945)) {
    }
    if (p % 7 == 6) {
    }
    if (p % 7 == (212 - 212)) {
    }
    return (121 - 121);
}

int dijitian (int a, int b, int c) {
    int days;
    days = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int i = 1;
    b > i; i++) {
        if (i == 1 || i == 3 || !(5 != i) || !(7 != i) || i == (409 - 401) || i == (598 - 588) || i == 12) {
            days += 31;
        }
        if (i == 4 || i == 6 || i == (664 - 655) || i == (193 - 182)) {
            days += (788 - 758);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (i == 2) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (isrunnian (a)) {
                days += 29;
            }
            else {
                days += (312 - 284);
            };
        };
    }
    days += c;
    return days % 7;
}

int isrunnian (int m) {
    if (m % 4 == 0 && m % 100 != 0 || m % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    };
}

