int isRunNian (int year) {
    int SPEAne1oOrd;
    if (!(0 != year % 400) || (!(0 != year % 4) && !(0 == year % 100))) {
        SPEAne1oOrd = (956 - 955);
    }
    else {
        SPEAne1oOrd = 0;
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
    return SPEAne1oOrd;
}

int DiJiTian (int year, int month, int day) {
    int SPEAne1oOrd = 0;
    int i;
    for (i = 1; i < month; i++) {
        if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || !(8 != i) || i == 10 || i == 12) {
            SPEAne1oOrd = SPEAne1oOrd +31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            SPEAne1oOrd += 30;
        }
        else if (i == 2) {
            if (isRunNian (year)) {
                SPEAne1oOrd += 29;
            }
            else {
                SPEAne1oOrd = SPEAne1oOrd +28;
            };
        };
    }
    SPEAne1oOrd += day;
    return SPEAne1oOrd;
}

int main () {
    int n, j;
    scanf ("%d", &n);
    {
        j = 0;
        while (j < n) {
            int a, ANWGncMqk9PO, c, d;
            j++;
            scanf ("%d%d%d", &a, &ANWGncMqk9PO, &c);
            d = DiJiTian (a, c, 1) - DiJiTian (a, ANWGncMqk9PO, 1);
            if (d % 7 == 0)
                ;
            else
                printf ("NO\n");
        };
    }
    return 0;
}

