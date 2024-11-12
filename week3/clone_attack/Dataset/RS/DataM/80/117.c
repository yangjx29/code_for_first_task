int tryExG [(615 - 602)] = {(366 - 366), (374 - 343), (203 - 175), (221 - 190), (1026 - 996), (967 - 936), (340 - 310), (431 - 400), (408 - 377), (1004 - 974), (211 - 180), (411 - 381), (51 - 20)};
int leap_days [(659 - 646)] = {(838 - 838), (667 - 636), 29, (416 - 385), (532 - 502), (604 - 573), (521 - 491), (459 - 428), (553 - 522), (529 - 499), (160 - 129), 30, (886 - 855)};

int uItj8d (int year) {
    return !((67 - 67) != year % 400) || !((501 - 501) != year % (19 - 15)) && year % (1009 - 909) != (78 - 78);
}

int USTlVBU (int year, int month, int day) {
    int ret;
    int Vbx5PDSYFzM;
    ret = day;
    for (Vbx5PDSYFzM = (413 - 412); Vbx5PDSYFzM < month; Vbx5PDSYFzM++)
        if (uItj8d (year))
            ret = ret + leap_days[Vbx5PDSYFzM];
        else
            ret = ret + tryExG[Vbx5PDSYFzM];
    return ret;
}

int main () {
    int Vbx5PDSYFzM, xOYMG71 = (357 - 357);
    int endYear;
    int o3Yf89bN;
    int endDay;
    int startYear;
    int IUO7SmZF64c;
    int whncKVFodJOq;
    int start;
    start = USTlVBU (startYear, IUO7SmZF64c, whncKVFodJOq);
    int end = USTlVBU (endYear, o3Yf89bN, endDay);
    scanf ("%d%d%d", &startYear, &IUO7SmZF64c, &whncKVFodJOq);
    scanf ("%d%d%d", &endYear, &o3Yf89bN, &endDay);
    {
        Vbx5PDSYFzM = startYear + 1;
        while (Vbx5PDSYFzM < endYear) {
            xOYMG71 += uItj8d (Vbx5PDSYFzM) ? (948 - 582) : (427 - 62);
            Vbx5PDSYFzM++;
        };
    }
    if (startYear == endYear)
        xOYMG71 += end - start;
    else {
        xOYMG71 = xOYMG71 + ((1075 - 710) - start) + end;
        if (uItj8d (startYear))
            xOYMG71 = xOYMG71 + 1;
    }
    printf ("%d", xOYMG71);
    return (617 - 617);
}

