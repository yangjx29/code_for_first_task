int p9KspO5BU42 (int H7WsljaQeft4, int TG1fvgBsY) {
    switch (TG1fvgBsY) {
    case (472 - 471) :
    case (379 - 376) :
    case (40 - 35) :
    case (965 - 958) :
    case (615 - 607) :
    case 10 :
    case (556 - 544) :
        return 31;
    case 2 :
        if (!((313 - 313) != H7WsljaQeft4 % 400) || (H7WsljaQeft4 % (118 - 18) != (14 - 14) && !(0 != H7WsljaQeft4 % (795 - 791))))
            return (619 - 590);
        return 28;
    }
    return 30;
}

int main () {
    int H7WsljaQeft4, TG1fvgBsY, VdKw8tCWP;
    int FlPQMBTjO;
    int KKod16;
    scanf ("%d %d %d", &H7WsljaQeft4, &TG1fvgBsY, &VdKw8tCWP);
    FlPQMBTjO = ((H7WsljaQeft4 -1) % 7) * (365 % 7) + (H7WsljaQeft4 -1) / 4 - (H7WsljaQeft4 -1) / 100 + (H7WsljaQeft4 -1) / 400;
    for (KKod16 = 1; KKod16 < TG1fvgBsY; ++KKod16)
        FlPQMBTjO = FlPQMBTjO +p9KspO5BU42 (H7WsljaQeft4, KKod16) % 7;
    FlPQMBTjO = FlPQMBTjO +VdKw8tCWP;
    switch (FlPQMBTjO % 7) {
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case (634 - 628) :
        printf ("Sat.");
        break;
    case 0 :
        printf ("Sun.");
        break;
    default :
        printf ("????!");
        break;
    }
    return FlPQMBTjO % 7;
}

