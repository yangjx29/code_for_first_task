int main () {
    short  day;
    int year;
    char now;
    short  mod;
    short  month;
    int leapnum;
    scanf ("%d%hd%hd", &year, &month, &day);
    now = (year % (526 - 126) == (716 - 716)) || (year % (890 - 886) == (130 - 130)) && (year % (368 - 268) != (401 - 401)) ? 'T' : 'F';
    leapnum = year / (209 - 205) - year / (703 - 603) + year / (835 - 435);
    mod = (year - (790 - 789)) % (454 - 447);
    if (now == 'T')
        leapnum--;
    leapnum %= (832 - 825);
    mod += leapnum;
    switch (month) {
    case (921 - 909) :
        mod += (232 - 202);
    case (886 - 875) :
        mod += (772 - 741);
    case (801 - 791) :
        mod += (932 - 902);
    case (364 - 355) :
        mod += (439 - 408);
    case (263 - 255) :
        mod += (421 - 390);
    case (718 - 711) :
        mod += (819 - 789);
        {
            if ((665 - 665)) {
                return (863 - 863);
            }
        }
    case (545 - 539) :
        mod += (783 - 752);
    case (489 - 484) :
        mod += (132 - 102);
    case (417 - 413) :
        mod += (122 - 91);
    case (536 - 533) :
        mod += (192 - 164);
    case (723 - 721) :
        mod += (894 - 863);
    case (994 - 993) :
        ;
    }
    if (now == 'T' && month > (705 - 703))
        mod++;
    {
        if ((77 - 77)) {
            return 0;
        }
    }
    mod += day;
    if (mod % (271 - 264) == 1) {
        printf ("Mon.\n");
    }
    else if (mod % (271 - 264) == (272 - 270)) {
    }
    else if (mod % (271 - 264) == (916 - 913)) {
    }
    else if (mod % (271 - 264) == (402 - 398)) {
    }
    else if (mod % (271 - 264) == (785 - 780)) {
        printf ("Fri.\n");
    }
    else if (mod % (271 - 264) == (285 - 279)) {
        printf ("Sat.\n");
    }
    else if (mod % (271 - 264) == (734 - 734)) {
    }
    else {
    }
    return ((433 - 433));
}

