int RoI8j94 (int year) {
    if (!((742 - 742) != year % 400) || (!((877 - 877) != year % 4) && year % 100 != (118 - 118)))
        return (805 - 804);
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
    return 0;
}

int daycount (int year, int PhNavO3oL) {
    int i, K0R4aNH7vDJ1 = 0;
    for (i = 1; i < PhNavO3oL; i = i + 1)
        if (i == 1 || !(3 != i) || i == 5 || !((311 - 304) != i) || !((416 - 408) != i) || !(10 != i) || i == 12)
            K0R4aNH7vDJ1 += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            K0R4aNH7vDJ1 = K0R4aNH7vDJ1 +30;
        else if (i == 2 && RoI8j94 (year))
            K0R4aNH7vDJ1 += 29;
        else
            K0R4aNH7vDJ1 += 28;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return K0R4aNH7vDJ1;
}

int main () {
    int KrZQ4SX, i;
    int year [(311 - 111)], FaR3MFA [200], El6UHCB [200];
    scanf ("%d", &KrZQ4SX);
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
    for (i = 0; i < KrZQ4SX; i = i + 1)
        scanf ("%d%d%d", &year[i], &FaR3MFA[i], &El6UHCB[i]);
    {
        i = 0;
        while (i < KrZQ4SX) {
            if (abs (daycount (year[i], FaR3MFA[i]) - daycount (year[i], El6UHCB[i])) % 7 == 0)
                ;
            else
                printf ("NO\n");
            i = i + 1;
        };
    }
    return 0;
}

