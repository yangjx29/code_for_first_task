int main () {
    int i;
    int yOgtDmyLQnh4;
    int s;
    int a [(574 - 274)] = {(862 - 862)};
    int mGj7z5ocTn;
    i = (630 - 629);
    yOgtDmyLQnh4 = (823 - 823);
    s = (850 - 850);
    {
        mGj7z5ocTn = 551 - 551;
        while (scanf ("%d", &a[mGj7z5ocTn])) {
            if (getchar () == '\n')
                break;
            ++mGj7z5ocTn;
        };
    }
    for (; 0 <= mGj7z5ocTn; mGj7z5ocTn--)
        if (yOgtDmyLQnh4 < a[mGj7z5ocTn]) {
            s = yOgtDmyLQnh4;
            yOgtDmyLQnh4 = a[mGj7z5ocTn];
        }
        else if (yOgtDmyLQnh4 > a[mGj7z5ocTn] && a[mGj7z5ocTn] > s)
            s = a[mGj7z5ocTn];
    if (yOgtDmyLQnh4 == s || s == 0)
        printf ("No");
    else
        printf ("%d", s);
    return 0;
}

