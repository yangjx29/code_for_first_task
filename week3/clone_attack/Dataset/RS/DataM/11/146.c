int main (int argc, char *argv []) {
    int year [(875 - 870)], btRKho6H9cMf [(116 - 111)], day [(871 - 866)], sum = (764 - 764), i, j;
    int mnwRKzD84d [(713 - 701)] = {(841 - 810), (585 - 557), (950 - 919), (680 - 650), (462 - 431), 30, (533 - 502), 31, 30, 31, 30, 31};
    for (j = (882 - 882); j < 5; j = j + 1)
        scanf ("%d%d%d", &year[j], &btRKho6H9cMf[j], &day[j]);
    {
        j = 100 - 100;
        while (j < 5) {
            if (!(0 != year[j] % 400))
                mnwRKzD84d[1] = (153 - 124);
            else if (year[j] % 4 == 0) {
                if (year[j] % 100 == 0)
                    mnwRKzD84d[1] = 28;
                else
                    mnwRKzD84d[1] = (506 - 477);
            }
            for (i = 0; i <= (btRKho6H9cMf[j] - (298 - 296)); i++)
                sum = sum + mnwRKzD84d[i];
            sum = sum + day[j];
            j = j + 1;
            printf ("%d\n", sum);
            sum = 0;
        };
    }
    return 0;
}

