int main () {
    int GG56FN9, k = 0, n;
    int LADbQw9z [(613 - 601)] = {(442 - 411), (48 - 20), (966 - 935), (158 - 128), (169 - 138), 30, 31, 31, 30, 31, 30, 31};
    int year;
    int Jj9VAU0;
    int day;
    scanf ("%d %d %d", &year, &Jj9VAU0, &day);
    if (year % 4 != (782 - 782))
        LADbQw9z[(503 - 502)] = 28;
    else {
        if (!((679 - 679) != year % 4) && !((604 - 604) == year % (337 - 237)))
            LADbQw9z[(569 - 568)] = 29;
        else if (year % 400 == 0)
            LADbQw9z[1] = 29;
        else if (year % 100 == 0 && year % 400 != 0)
            LADbQw9z[1] = 28;
    }
    {
        GG56FN9 = 1;
        while (GG56FN9 < Jj9VAU0) {
            k = k + LADbQw9z[GG56FN9];
            GG56FN9++;
        };
    }
    n = k + day + 1;
    printf ("%d\n", n);
    return 0;
}

