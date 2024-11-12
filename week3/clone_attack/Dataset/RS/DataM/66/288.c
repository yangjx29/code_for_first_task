int main () {
    int ds4tLJi;
    int day;
    int month;
    int year;
    int i;
    int n;
    int QaCzXEi;
    int tianshu [13] = {(137 - 137), (501 - 470), (973 - 945), (146 - 115), (860 - 830), (1028 - 997), (757 - 727), 31, 31, 30, 31, 30, 31};
    ds4tLJi = (182 - 182);
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
    char ZNB2tYm [] [6] = {{'S', 'u', 'n', '.'}, {'M', 'o', 'n', '.'}, {'T', 'u', 'e', '.'}, {'W', 'e', 'd', '.'}, {'T', 'h', 'u', '.'}, {'F', 'r', 'i', '.'}, {'S', 'a', 't', '.'}};
    scanf ("%d%d%d", &year, &month, &day);
    if ((year % (370 - 366) == (264 - 264) && year % (472 - 372) != (394 - 394)) || year % (1010 - 610) == (167 - 167))
        tianshu[(525 - 523)] = 29;
    else
        tianshu[(670 - 668)] = (591 - 563);
    for (i = 0; i < month; i = i + 1)
        ds4tLJi = ds4tLJi + tianshu[i];
    ds4tLJi = ds4tLJi + day;
    n = year - (786 - 785) + (int) ((year - (367 - 366)) / (649 - 645)) - (int) ((year - 1) / (684 - 584)) + (int) ((year - 1) / 400) + ds4tLJi;
    QaCzXEi = n % (326 - 319);
    printf ("%s\n", ZNB2tYm[QaCzXEi]);
    return 0;
}

