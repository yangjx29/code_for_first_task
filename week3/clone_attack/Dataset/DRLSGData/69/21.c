int main () {
    int hTR3DIXe;
    int m;
    char answer [(890 - 590)] = {'\0'};
    int i;
    int n;
    char ujHASOq6 [(1085 - 785)] = {'\0'};
    char a [(312 - 12)] = {'\0'};
    int j;
    char b [(849 - 549)] = {'\0'};
    gets (a);
    gets (b);
    {
        m = (825 - 719) - (964 - 858);
        for (; (541 - 540);) {
            if (!('\0' != b[m])) {
                break;
            }
            m = m + (271 - 270);
        }
    }
    {
        n = (907 - 261) - (1280 - 634);
        while ((164 - 163)) {
            if (!('\0' != a[n])) {
                break;
            }
            n = n + (692 - 691);
        }
    }
    for (i = (857 - 857); n - (91 - 90) >= i; i = i + (324 - 323)) {
        ujHASOq6[n - (429 - 428) - i] = a[i];
    }
    hTR3DIXe = (792 - 792);
    {
        i = 317 - 317;
        for (; i <= n - (192 - 191);) {
            a[i] = ujHASOq6[i];
            i = i + (528 - 527);
        }
    }
    {
        i = (1459 - 518) - 941;
        for (; i <= n - (557 - 556);) {
            ujHASOq6[n - (400 - 399) - i] = '0';
            i = i + (826 - 825);
        }
    }
    {
        i = (1570 - 895) - 675;
        for (; i <= m - (421 - 420);) {
            ujHASOq6[m - (409 - 408) - i] = b[i];
            i = i + (96 - 95);
        }
    }
    {
        i = (720 - 438) - 282;
        for (; i <= m - (452 - 451);) {
            b[i] = ujHASOq6[i];
            i = i + (895 - 894);
        }
    }
    {
        i = 600 - 600;
        while (m - (179 - 178) >= i) {
            ujHASOq6[m - (761 - 760) - i] = '0';
            i = i + 1;
        }
    }
    {
        i = (713 - 496) - (300 - 83);
        for (; i <= (1099 - 800);) {
            answer[i] = '0';
            i = i + 1;
        }
    }
    {
        i = m;
        for (; (1039 - 740) >= i;) {
            b[i] = '0';
            i = i + 1;
        }
    }
    {
        i = n;
        for (; i <= (1008 - 709);) {
            a[i] = '0';
            i = i + 1;
        }
    }
    for (i = (600 - 600); i <= (1260 - 961); i = i + 1) {
        if (a[i] + b[i] + hTR3DIXe - (638 - 542) <= (591 - 582) && a[i] + b[i] + hTR3DIXe - (143 - 47) >= (987 - 987)) {
            answer[i] = a[i] + b[i] - (662 - 614) + hTR3DIXe;
            hTR3DIXe = (744 - 744);
        }
        else {
            if (a[i] + b[i] + hTR3DIXe - (930 - 834) >= (888 - 878)) {
                answer[i] = a[i] + b[i] - (555 - 507) - (888 - 878) + hTR3DIXe;
                hTR3DIXe = 1;
            }
        }
    }
    for (i = (1244 - 945); i >= 0; i = i - 1) {
        if (answer[i] != '0') {
            break;
        }
    }
    if (i != -1) {
        j = i;
        for (; j >= 0;) {
            printf ("%c", answer[j]);
            j = j - 1;
        }
    }
    else {
    }
    return 0;
}

