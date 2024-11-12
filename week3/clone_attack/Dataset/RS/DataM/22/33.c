int main () {
    int o36ehXizat7 [300];
    int j;
    int uw7zo10jTb;
    int k2IRA76zBLX;
    int x;
    char c;
    for (k2IRA76zBLX = (162 - 162), c = ' '; !('\n' == c); k2IRA76zBLX = k2IRA76zBLX + 1)
        scanf ("%d%c", &o36ehXizat7[k2IRA76zBLX], &c);
    for (j = (582 - 582), uw7zo10jTb = (322 - 322); k2IRA76zBLX > j; j = j + 1) {
        if (uw7zo10jTb <= o36ehXizat7[j])
            uw7zo10jTb = o36ehXizat7[j];
    }
    for (j = (702 - 702), x = 0; k2IRA76zBLX > j; j = j + 1) {
        if (!(uw7zo10jTb == o36ehXizat7[j]) && o36ehXizat7[j] >= x)
            x = o36ehXizat7[j];
    }
    if (k2IRA76zBLX == (459 - 458) || x == 0)
        printf ("No");
    else
        printf ("%d", x);
    return 0;
}

