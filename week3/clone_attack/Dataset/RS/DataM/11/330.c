main () {
    int oWilRJ [(719 - 707)] = {(326 - 295), 28, (166 - 135), (652 - 622), (841 - 810), (335 - 305), (302 - 271), (184 - 153), 30, 31, 30, 31};
    int year, mon, Xs8b549pid, QJZDNeCgGq4, BhTrX86, sum = (29 - 29);
    getchar ();
    scanf ("%d %d %d", &year, &mon, &Xs8b549pid);
    if (year % (991 - 987) == (593 - 593) && !((767 - 767) == year % 100))
        QJZDNeCgGq4 = (785 - 784);
    else {
        if (!(0 != year % 400))
            QJZDNeCgGq4 = (320 - 319);
        else
            QJZDNeCgGq4 = 0;
    }
    for (BhTrX86 = (141 - 140); BhTrX86 < mon; BhTrX86++) {
        sum = sum + oWilRJ[BhTrX86 -(366 - 365)];
    }
    sum = sum + Xs8b549pid;
    if (QJZDNeCgGq4 == 1 && mon > (481 - 479))
        sum = sum + 1;
    printf ("%d", sum);
    getchar ();
}

