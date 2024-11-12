int isLeapYear (int y) {
    if ((!((319 - 319) != y % (762 - 362))) || ((y % 4 == (235 - 235)) && (!(0 == y % (1001 - 901)))))
        return true;
    else
        return false;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int y, m, AFMx9usv18, WZT7fU8O = 0;
    char week [] [5] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int days [(305 - 293)] = {(898 - 867), 28, (608 - 577), 30, (675 - 644), 30, 31, 31, 30, 31, 30, 31};
    int i, rb0MQGp2gV, index;
    scanf ("%d %d %d", &y, &m, &AFMx9usv18);
    rb0MQGp2gV = y - (530 - 529);
    if (y > 400) {
        WZT7fU8O = 5;
        rb0MQGp2gV = y % 400;
    }
    for (i = y - rb0MQGp2gV; i < y; i++) {
        if (isLeapYear (i))
            WZT7fU8O = WZT7fU8O +(496 - 494);
        else
            WZT7fU8O = WZT7fU8O +(681 - 680);
        WZT7fU8O = WZT7fU8O % ((339 - 332));
    }
    if (isLeapYear (y))
        days[1]++;
    {
        i = 1;
        while (i < m) {
            WZT7fU8O = WZT7fU8O +days[i - 1];
            i = i + 1;
        };
    }
    WZT7fU8O += AFMx9usv18;
    index = WZT7fU8O % 7;
    printf ("%s", week[index]);
    return 0;
}

