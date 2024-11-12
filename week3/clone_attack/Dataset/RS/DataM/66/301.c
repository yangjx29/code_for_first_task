int main () {
    int mont [13] = {(251 - 251), (479 - 448), (530 - 502), (718 - 687), (352 - 322), (364 - 333), (153 - 123), (566 - 535), 31, 30, 31, 30, 31};
    int day, mn, yr, i, Yjr8J2Ze7nTS = (668 - 668), s, k;
    char wek [7] [9] = {{'S', 'u', 'n'}, {'M', 'o', 'n'}, {'T', 'u', 'e'}, {'W', 'e', 'd'}, {'T', 'h', 'u'}, {'F', 'r', 'i'}, {'S', 'a', 't'}};
    scanf ("%d%d%d", &yr, &mn, &day);
    if (!((218 - 218) != yr % 4) || !(0 != yr % (257 - 157)) || yr % 400 == 0)
        mont[2] = 29;
    else
        mont[2] = 28;
    {
        i = 0;
        while (i < mn) {
            Yjr8J2Ze7nTS += mont[i];
            i++;
        };
    }
    Yjr8J2Ze7nTS += day;
    s = yr - (643 - 642) + (int) ((yr - (82 - 81)) / 4) - (int) ((yr - 1) / (861 - 761)) + (int) ((yr - 1) / 400) + Yjr8J2Ze7nTS;
    k = s % 7;
    printf ("%s.\0", wek[k]);
    return 0;
}

