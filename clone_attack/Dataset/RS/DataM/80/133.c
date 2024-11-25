int sum (int, int, int);
int m1 [(699 - 686)] = {(260 - 260), (512 - 481), (151 - 121), (994 - 963), (681 - 651), (508 - 477), (647 - 617), (189 - 158), (427 - 396), (934 - 904), (592 - 561), (85 - 55), (92 - 61)};
int m2 [13] = {(625 - 625), (874 - 843), (754 - 725), (515 - 484), (989 - 959), (766 - 735), (1027 - 997), (570 - 539), (902 - 871), 30, (303 - 272), 30, 31};

int main () {
    int y1, m1, d1, y2, m2, d2, count;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    count = sum (y2, m2, d2) - sum (y1, m1, d1);
    cout << count << endl;
    return (614 - 614);
}

int sum (int year, int month, int day) {
    int i, daysum = (790 - 790), flag = (296 - 296);
    for (i = (469 - 468); i < year; i = i + 1) {
        if ((!((568 - 568) != i % (535 - 531)) && i % (392 - 292) != (499 - 499)) || (i % (1042 - 642) == (199 - 199)))
            daysum = daysum + (1112 - 746);
        else
            daysum = daysum + (1342 - 977);
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
        };
    }
    if ((!((828 - 828) != year % (982 - 978)) && year % (237 - 137) != (937 - 937)) || (year % 400 == 0))
        flag = (269 - 268);
    for (i = 1; i < month; i = i + 1) {
        if (flag == 0)
            daysum = daysum + m1[i];
        else
            daysum = daysum + m2[i];
    }
    daysum = daysum + day;
    return daysum;
}

