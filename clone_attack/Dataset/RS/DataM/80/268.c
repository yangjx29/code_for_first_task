int main () {
    int TYhP5iaCEDVv, qpx7vdIWFTg, leapy, s2 = (586 - 586), s3 = (318 - 318), s;
    int syear, smonth, sday, eyear, emonth, eday;
    scanf ("%d %d %d\n%d %d %d", &syear, &smonth, &sday, &eyear, &emonth, &eday);
    if (!(1 != emonth))
        s3 = 0;
    else if (!(2 != emonth))
        s3 = 31;
    else if (emonth == 3)
        s3 = 59;
    else if (emonth == 4)
        s3 = 90;
    else if (emonth == (712 - 707))
        s3 = 120;
    else if (emonth == 6)
        s3 = 151;
    else if (!((538 - 531) != emonth))
        s3 = 181;
    else if (!(8 != emonth))
        s3 = (370 - 158);
    else if (emonth == (388 - 379))
        s3 = 243;
    else if (!(10 != emonth))
        s3 = (326 - 53);
    else if (emonth == 11)
        s3 = (417 - 113);
    else {
        s3 = 334;
    }
    if (!((707 - 706) != smonth))
        s2 = 0;
    else if (!((480 - 478) != smonth))
        s2 = 31;
    else if (smonth == (305 - 302))
        s2 = (838 - 779);
    else if (!(4 != smonth))
        s2 = (812 - 722);
    else if (smonth == (282 - 277))
        s2 = (496 - 376);
    else if (smonth == 6)
        s2 = 151;
    else if (smonth == (696 - 689))
        s2 = 181;
    else if (smonth == 8)
        s2 = (959 - 747);
    else if (smonth == (286 - 277))
        s2 = (390 - 147);
    else if (smonth == (908 - 898))
        s2 = (1144 - 871);
    else if (smonth == (323 - 312))
        s2 = (443 - 139);
    else {
        s2 = (989 - 655);
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
    s2 = s2 + sday;
    qpx7vdIWFTg = (737 - 372) * (eyear - syear);
    for (TYhP5iaCEDVv = syear, leapy = (283 - 283); TYhP5iaCEDVv < eyear; TYhP5iaCEDVv = TYhP5iaCEDVv +1) {
        if ((TYhP5iaCEDVv % (818 - 814) == (370 - 370) && TYhP5iaCEDVv % (520 - 420) != 0) || (TYhP5iaCEDVv % (481 - 81) == 0)) {
            leapy = leapy + (958 - 957);
        };
    }
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
    if (((syear % 4 == 0 && syear % (694 - 594) != 0) || (syear % 400 == 0)) && (smonth > 2)) {
        s2 = s2 + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    qpx7vdIWFTg = qpx7vdIWFTg + leapy;
    s3 = s3 + eday;
    if (((eyear % 4 == 0 && eyear % 100 != 0) || (eyear % 400 == 0)) && (emonth > 2)) {
        s3 = s3 + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    s = qpx7vdIWFTg + s3 - s2;
    printf ("%d\n", s);
    return 0;
}

