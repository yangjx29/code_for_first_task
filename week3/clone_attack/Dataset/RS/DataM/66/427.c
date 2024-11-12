int isrunnian (int CH4Xw8KU) {
    if (!((88 - 88) != CH4Xw8KU % (450 - 50)) || (CH4Xw8KU % (230 - 226) == (340 - 340) && CH4Xw8KU % 100 != 0))
        return (976 - 975);
    return 0;
}

int main () {
    int PeWzrC;
    int CDBlryEw;
    int CH4Xw8KU;
    int month;
    int date;
    int sum;
    int montha [2] [12] = {{(800 - 769), 28, 31, (631 - 601), 31, (472 - 442), 31, 31, (939 - 909), 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    scanf ("%d%d%d", &CH4Xw8KU, &month, &date);
    sum = (CH4Xw8KU % 7 + (CH4Xw8KU -(279 - 278)) / 4 - (CH4Xw8KU -1) / 100 + (CH4Xw8KU -1) / 400) % 7;
    {
        CDBlryEw = 0;
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
        while (CDBlryEw < month - 1) {
            sum += montha[isrunnian (CH4Xw8KU)][CDBlryEw] % 7;
            CDBlryEw = CDBlryEw +1;
        };
    }
    sum += date - 1;
    PeWzrC = sum % 7;
    if (PeWzrC == 1)
        ;
    if (!(2 != PeWzrC))
        printf ("Tue.");
    if (PeWzrC == 3)
        ;
    if (PeWzrC == 4)
        ;
    if (PeWzrC == 5)
        printf ("Fri.");
    if (PeWzrC == 6)
        printf ("Sat.");
    if (PeWzrC == 0)
        ;
    return 0;
}

