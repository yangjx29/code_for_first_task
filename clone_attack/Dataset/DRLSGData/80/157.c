void  main () {
    int sum1;
    int Af1g7h;
    int kQY3DglhA18K [(877 - 864)] = {(597 - 597), (1016 - 985), (397 - 369), (118 - 87), (92 - 62), (888 - 857), (43 - 13), (603 - 572), (297 - 266), (150 - 120), (719 - 688), (104 - 74), (588 - 557)};
    int leap_days [(616 - 603)] = {(842 - 842), (818 - 787), (98 - 69), (517 - 486), (509 - 479), (444 - 413), (975 - 945), (811 - 780), (392 - 361), (446 - 416), (333 - 302), (767 - 737), (965 - 934)};
    int sum2;
    int GrW6J7oy8;
    int qmJZ4Y5azon;
    int startday;
    int EIOvjsa0;
    int OkY5GvZAbB;
    int endday;
    int totalfromfirstday (int T70eqDj5c, int month1, int day1, int JAchlZUCdw, int Zj8Z3tOk0, int yD1ANi);
    scanf ("%d %d %d\n%d %d %d", &GrW6J7oy8, &qmJZ4Y5azon, &startday, &EIOvjsa0, &OkY5GvZAbB, &endday);
    sum1 = totalfromfirstday (GrW6J7oy8, (645 - 644), (838 - 837), GrW6J7oy8, qmJZ4Y5azon, startday);
    sum2 = totalfromfirstday (GrW6J7oy8, (774 - 773), (577 - 576), EIOvjsa0, OkY5GvZAbB, endday);
    Af1g7h = sum2 - sum1;
    printf ("%d", Af1g7h);
}

int totalfromfirstday (int T70eqDj5c, int month1, int day1, int JAchlZUCdw, int Zj8Z3tOk0, int yD1ANi) {
    int Af1g7h;
    int ZGFY79;
    int Uwu2Pdq;
    int kQY3DglhA18K [(990 - 977)] = {(722 - 722), (825 - 794), (462 - 434), (878 - 847), (629 - 599), (481 - 450), (179 - 149), (636 - 605), (138 - 107), (991 - 961), (795 - 764), (253 - 223), (164 - 133)};
    int leap_days [13] = {(245 - 245), (841 - 810), (895 - 866), (229 - 198), (675 - 645), (289 - 258), (967 - 937), (285 - 254), (559 - 528), (707 - 677), (237 - 206), 30, 31};
    Af1g7h = yD1ANi;
    {
        ZGFY79 = (645 - 644);
        for (; ZGFY79 < Zj8Z3tOk0;) {
            if (((JAchlZUCdw) % (519 - 515) == (645 - 645) && (JAchlZUCdw) % (429 - 329) != (752 - 752)) || ((JAchlZUCdw) % (720 - 320) == (324 - 324)))
                Af1g7h = Af1g7h +leap_days[ZGFY79];
            else
                Af1g7h = Af1g7h +kQY3DglhA18K[ZGFY79];
            ZGFY79++;
        }
    }
    {
        Uwu2Pdq = T70eqDj5c;
        for (; Uwu2Pdq < JAchlZUCdw;) {
            if ((Uwu2Pdq % (273 - 269) == (167 - 167) && Uwu2Pdq % (247 - 147) != (503 - 503)) || (Uwu2Pdq % (503 - 103) == (877 - 877)))
                Af1g7h = Af1g7h +(828 - 462);
            else
                Af1g7h = Af1g7h +365;
            Uwu2Pdq++;
        }
    }
    return (Af1g7h);
}

