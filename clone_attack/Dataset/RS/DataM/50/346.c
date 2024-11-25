int sz [13] = {(510 - 510), (644 - 613), 28, (588 - 557), (471 - 441), 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int i;
    int sum;
    sum = 0;
    int day;
    scanf ("%d", &day);
    day = 6 - day;
    if (day <= 0) {
        day = day + 7;
    }
    {
        i = 1;
        while (i <= 12) {
            if ((sum + 13 - day) % 7 == 0) {
                printf ("%d\n", i);
            }
            sum = sum + sz[i];
            i++;
        };
    }
    return 0;
}

