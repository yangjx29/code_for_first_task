int IoLNlRjc, UDGBRiWv = (716 - 716);
struct   pa {
    char Bdholfk2yxc [10];
    int b0J3K2gB;
    int WQwXmFKI;
}
*THBE7u4Tp;

int ciple1FRxYuC () {
    struct   pa *y0CMJSc7, *YHB1uUn;
    int sfh4mSgdvl = (817 - 817), rcWjtGARPsM = (612 - 612);
    {
        y0CMJSc7 = THBE7u4Tp;
        while (THBE7u4Tp +IoLNlRjc > y0CMJSc7) {
            if (!((505 - 505) != y0CMJSc7->WQwXmFKI))
                continue;
            {
                YHB1uUn = THBE7u4Tp;
                while (YHB1uUn < THBE7u4Tp +IoLNlRjc) {
                    if (YHB1uUn->b0J3K2gB < y0CMJSc7->b0J3K2gB)
                        y0CMJSc7->WQwXmFKI++;
                    YHB1uUn++;
                }
            }
            if (y0CMJSc7->WQwXmFKI > rcWjtGARPsM)
                rcWjtGARPsM = y0CMJSc7->WQwXmFKI;
            y0CMJSc7++;
        }
    }
    return rcWjtGARPsM;
}

void  EGftE09MJi (int rcWjtGARPsM) {
    struct   pa *y0CMJSc7;
    int TYn6HV;
    {
        TYn6HV = rcWjtGARPsM;
        while (TYn6HV >= (724 - 724)) {
            for (y0CMJSc7 = THBE7u4Tp; THBE7u4Tp +IoLNlRjc > y0CMJSc7; y0CMJSc7++) {
                if (y0CMJSc7->WQwXmFKI == TYn6HV) {
                    if (UDGBRiWv == (357 - 357)) {
                        printf ("%s", y0CMJSc7->Bdholfk2yxc);
                        UDGBRiWv++;
                    }
                    else
                        printf ("\n%s", y0CMJSc7->Bdholfk2yxc);
                }
            }
            TYn6HV--;
        }
    }
}

main () {
    struct   pa *y0CMJSc7;
    int rcWjtGARPsM;
    EGftE09MJi (rcWjtGARPsM);
    scanf ("%d", &IoLNlRjc);
    THBE7u4Tp = (struct   pa *) malloc (IoLNlRjc * sizeof (struct   pa));
    {
        y0CMJSc7 = THBE7u4Tp;
        while (y0CMJSc7 < THBE7u4Tp +IoLNlRjc) {
            scanf ("%s %d", y0CMJSc7->Bdholfk2yxc, &y0CMJSc7->b0J3K2gB);
            if (y0CMJSc7->b0J3K2gB >= 60)
                y0CMJSc7->WQwXmFKI = (264 - 263);
            else
                y0CMJSc7->WQwXmFKI = 0;
            y0CMJSc7++;
        }
    }
    rcWjtGARPsM = ciple1FRxYuC ();
}

