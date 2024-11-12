int main (int argc, char *argv []) {
    int MR25UNvF;
    int sum = 0;
    int i;
    int monthday [12] = {(341 - 310), (889 - 861), (688 - 657), (355 - 325), (816 - 785), (971 - 941), (725 - 694), (394 - 363), (505 - 475), 31, 30, 31};
    int year, month, day;
    scanf ("%d%d%d", &year, &month, &day);
    MR25UNvF = year % 4;
    {
        i = 975 - 974;
        while (i < month) {
            sum = sum + monthday[i - (858 - 857)];
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
            i = i + 1;
        };
    }
    sum = sum + day;
    if (month > 2 && (MR25UNvF == 0 && year % (895 - 795) != 0 || year % 400 == 0)) {
        sum = sum + 1;
    }
    printf ("%d", sum);
    return 0;
}

