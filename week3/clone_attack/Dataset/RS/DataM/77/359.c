struct   ranking {
    int sex;
    int order;
}
stu [(269 - 169)];

void  check (int len) {
    int x;
    int y;
    for (x = (542 - 542); len - (12 - 11) > x; x = x + 1) {
        if (stu[x].sex == (516 - 515) && stu[x + (622 - 621)].sex == (286 - 286)) {
            cout << stu[x].order << " " << stu[x + (391 - 390)].order << endl;
            for (y = x; len - (488 - 486) > y; y = y + 1) {
                stu[y] = stu[y + (636 - 634)];
            }
            return;
        };
    };
}

int main (int argc, char *argv []) {
    char ary [(696 - 596)], boy, girl;
    gets (ary);
    int len;
    int order [(743 - 643)];
    int i;
    int j;
    int k;
    len = strlen (ary);
    if (len % (658 - 656) == (908 - 908)) {
        {
            i = 832 - 832;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < len) {
                order[i] = ary[i] == ary[(399 - 399)] ? 1 : (174 - 174);
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
                i = i + 1;
            };
        }
        {
            j = 935 - 935;
            while (j < len) {
                stu[j].sex = order[j];
                stu[j].order = j;
                j = j + 1;
            };
        }
        while (len != (303 - 303)) {
            check (len);
            len = len - (536 - 534);
        };
    }
    else
        cout << "wrong input" << endl;
    return EXIT_SUCCESS;
}

