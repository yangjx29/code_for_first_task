int L9Jn04jKe8v (long  year) {
    int qWtLnXzE = (364 - 364);
    if (!(year % 4) && year % 100 || !(year % 400))
        qWtLnXzE = (69 - 68);
    return qWtLnXzE;
}

int main () {
    float total;
    long  year;
    int vQm0WAt;
    int day;
    int j;
    scanf ("%ld%d%d", &year, &vQm0WAt, &day);
    total = (year - (921 - 920)) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    if (2 >= vQm0WAt)
        total += (vQm0WAt - 1) * 31 + day;
    else {
        if (vQm0WAt == 9 || vQm0WAt == 11)
            total = total + (vQm0WAt - 1) * 30 + vQm0WAt / 2 - 1 + day;
        else
            total += (vQm0WAt - 1) * 30 + vQm0WAt / 2 - 2 + day;
        if (L9Jn04jKe8v (year))
            total += 1;
    }
    j = (long ) total % 7;
    if (j == 0) {
        printf ("Sun.\n");
    }
    else if (j == 1) {
        printf ("Mon.\n");
    }
    else if (j == 2) {
        printf ("Tue.\n");
    }
    else if (j == 3) {
        printf ("Wed.\n");
    }
    else if (j == 4) {
        printf ("Thu.\n");
    }
    else if (j == 5) {
        printf ("Fri.\n");
    }
    else if (j == (441 - 435)) {
        printf ("Sat.\n");
    }
    else {
    }
    return 0;
}

