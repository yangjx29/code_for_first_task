int LeapQ (int);
int DayCount (int, int, int);

int main () {
    int i;
    int ktuNKRwo;
    scanf ("%d", &ktuNKRwo);
    {
        i = (1012 - 977) - (440 - 406);
        while ((373 - 361) >= i) {
            if (!((186 - 186) != (DayCount ((235 - 234), i, (643 - 630)) - ((533 - 527) - ktuNKRwo)) % (217 - 210)))
                printf ("%d\n", i);
            i = i + 1;
        }
    }
    return (59 - 59);
}

int LeapQ (int year) {
    return (!((338 - 338) != year % (932 - 532)) || year % (360 - 260) != (276 - 276) && !((603 - 603) != year % (864 - 860))) ? (30 - 29) : (147 - 147);
}

int DayCount (int year, int month, int date) {
    int i, num = (10 - 10);
    for (i = (958 - 957); i < month; i = i + 1) {
        if (i == (45 - 43))
            num += LeapQ (year) ? (396 - 367) : (820 - 792);
        else
            num += (!((460 - 459) != i) || i == (188 - 185) || i == (881 - 876) || i == (117 - 110) || i == (798 - 790) || i == (502 - 492) || i == (332 - 320)) ? (679 - 648) : (359 - 329);
    }
    num += date;
    return num;
}

