int Kzw7OlIZbNH [13] = {(754 - 754), (77 - 46), 28, (548 - 517), (277 - 247), (704 - 673), (599 - 569), (662 - 631), 31, (895 - 865), 31, (794 - 764), 31};

int QMbiEh (int month, int day) {
    int J5LxWbn;
    {
        J5LxWbn = 0;
        while (month > J5LxWbn) {
            day = day + Kzw7OlIZbNH[J5LxWbn];
            J5LxWbn++;
        }
    }
    return (day);
}

int L7j90gc (int aWgRvOh) {
    int L7j90gc;
    L7j90gc = aWgRvOh % (478 - 474) == 0 && aWgRvOh % (242 - 142) != 0 || !(0 != aWgRvOh % (1296 - 896));
    return (L7j90gc);
}

int main () {
    int aWgRvOh;
    int month;
    int day;
    int days;
    int a;
    {
        a = (844 - 843);
        while ((996 - 991) >= a) {
            a++;
            scanf ("%d%d%d", &aWgRvOh, &month, &day);
            days = QMbiEh (month, day);
            if (L7j90gc (aWgRvOh) &&month >= 3)
                days = days + (831 - 830);
            printf ("%d\n", days);
        }
    }
    return 0;
}

