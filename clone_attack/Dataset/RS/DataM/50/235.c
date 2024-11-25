int main () {
    int day13 [13];
    int i;
    int w;
    int days [13] = {0, (979 - 948), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int firstday [13];
    int week [13];
    firstday[(92 - 91)] = 1;
    scanf ("%d", &w);
    for (i = 2; i <= (186 - 174); i++)
        firstday[i] = firstday[i - 1] + days[i - 1];
    for (i = 1; 12 >= i; i++)
        day13[i] = firstday[i] + 12;
    for (i = 1; i <= 12; i++) {
        week[i] = (day13[i] - 1 + w) % 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (week[i] == 5)
            printf ("%d\n", i);
    }
    return 0;
}

