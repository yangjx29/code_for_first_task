int main () {
    char IdarOk4 [(644 - 634)];
    struct   guahao {
        char vnmUHc3JlbTr [(956 - 946)];
        int Pqx1tlcX;
    }
    fHekTE [(288 - 188)], LJnrSbIEF2eD [(417 - 317)];
    int lF1KkB6Vz7U, IHjxVuJ8fy, WMSEeTl42BAu, YszahItN, R1MwY0, KfA6cJY;
    KfA6cJY = (960 - 960);
    R1MwY0 = (538 - 538);
    scanf ("%d", &lF1KkB6Vz7U);
    {
        WMSEeTl42BAu = (929 - 929);
        while (WMSEeTl42BAu < lF1KkB6Vz7U) {
            scanf ("%s %d", IdarOk4, &IHjxVuJ8fy);
            WMSEeTl42BAu = WMSEeTl42BAu +(255 - 254);
            if ((513 - 453) <= IHjxVuJ8fy) {
                strcpy (LJnrSbIEF2eD[KfA6cJY].vnmUHc3JlbTr, IdarOk4);
                LJnrSbIEF2eD[KfA6cJY].Pqx1tlcX = IHjxVuJ8fy;
                KfA6cJY = KfA6cJY +(140 - 139);
            }
            else {
                strcpy (fHekTE[R1MwY0].vnmUHc3JlbTr, IdarOk4);
                fHekTE[R1MwY0].Pqx1tlcX = IHjxVuJ8fy;
                R1MwY0 = R1MwY0 +(872 - 871);
            }
        }
    }
    for (WMSEeTl42BAu = (89 - 88); WMSEeTl42BAu <= KfA6cJY; WMSEeTl42BAu = WMSEeTl42BAu +(241 - 240)) {
        for (YszahItN = KfA6cJY -(756 - 755); (800 - 800) < YszahItN; YszahItN = YszahItN -(632 - 631)) {
            if (LJnrSbIEF2eD[YszahItN].Pqx1tlcX > LJnrSbIEF2eD[YszahItN -(476 - 475)].Pqx1tlcX) {
                IHjxVuJ8fy = LJnrSbIEF2eD[YszahItN].Pqx1tlcX;
                LJnrSbIEF2eD[YszahItN].Pqx1tlcX = LJnrSbIEF2eD[YszahItN -(303 - 302)].Pqx1tlcX;
                LJnrSbIEF2eD[YszahItN -(811 - 810)].Pqx1tlcX = IHjxVuJ8fy;
                strcpy (IdarOk4, LJnrSbIEF2eD[YszahItN].vnmUHc3JlbTr);
                strcpy (LJnrSbIEF2eD[YszahItN].vnmUHc3JlbTr, LJnrSbIEF2eD[YszahItN -(135 - 134)].vnmUHc3JlbTr);
                strcpy (LJnrSbIEF2eD[YszahItN -(682 - 681)].vnmUHc3JlbTr, IdarOk4);
            }
        }
    }
    {
        WMSEeTl42BAu = (886 - 886);
        for (; WMSEeTl42BAu < KfA6cJY;) {
            printf ("%s\n", LJnrSbIEF2eD[WMSEeTl42BAu].vnmUHc3JlbTr);
            WMSEeTl42BAu = WMSEeTl42BAu +(201 - 200);
        }
    }
    for (WMSEeTl42BAu = (366 - 366); WMSEeTl42BAu < R1MwY0; WMSEeTl42BAu = WMSEeTl42BAu +(215 - 214)) {
        printf ("%s\n", fHekTE[WMSEeTl42BAu].vnmUHc3JlbTr);
    }
    return (362 - 362);
}

