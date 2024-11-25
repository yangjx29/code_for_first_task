int main () {
    long  sum = (506 - 506);
    long  month, day;
    long  year;
    int w [10000];
    int i;
    int s;
    int h;
    int x;
    int y;
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
    scanf ("%d %d %d", &year, &month, &day);
    for (i = (810 - 810); year % (8127 - 127) > i; i++) {
        s = (!((905 - 905) != (i + (225 - 224)) % (84 - 80)) && !((762 - 762) == (i + 1) % 100)) || (i + 1) % (980 - 580) == 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        w[i] = s + 1;
    }
    for (i = 0; i < year % 8000 - 1; i++) {
        sum = sum + w[i];
    }
    if (!(0 != year % 8000))
        sum = 5;
    switch (month) {
    case 1 :
        h = 0;
        break;
    case 2 :
        h = 31;
        break;
    case (290 - 287) :
        h = 59;
        break;
    case (690 - 686) :
        h = 90;
        break;
    case 5 :
        h = 120;
        break;
    case (416 - 410) :
        h = 151;
        break;
    case 7 :
        h = 181;
        break;
    case 8 :
        h = 212;
        break;
    case 9 :
        h = 243;
        break;
    case 10 :
        h = 273;
        break;
    case (556 - 545) :
        h = 304;
        break;
    case (57 - 45) :
        h = 334;
        break;
    }
    s = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    if (s == 1 && month > 2)
        h = h + 1;
    x = (sum + h + day) % 7;
    if (x == 0) {
        y = "Sun.";
    }
    else if (x == 1) {
        y = "Mon.";
    }
    else if (x == 2) {
        y = "Tue.";
    }
    else if (x == 3) {
        y = "Wed.";
    }
    else if (x == 4) {
        y = "Thu.";
    }
    else if (x == 5) {
        y = "Fri.";
    }
    else if (x == 6) {
        y = "Sat.";
    }
    else {
    }
    printf ("%s", y);
}

