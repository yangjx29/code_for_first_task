int OkMjyhY [(952 - 852)] [(626 - 526)], roAmPxCvt;

int GfFP1v5 (int DA7OjERpI, int XnJCU5, int eowHEx4) {
    int sick;
    sick = (846 - 846);
    if (!((14 - 14) != OkMjyhY[DA7OjERpI -(196 - 195)][XnJCU5]) && (217 - 217) <= DA7OjERpI -(140 - 139)) {
        OkMjyhY[DA7OjERpI -(569 - 568)][XnJCU5] = eowHEx4 + (406 - 405);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sick = sick + 1;
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
    if (!((158 - 158) != OkMjyhY[DA7OjERpI +(988 - 987)][XnJCU5]) && DA7OjERpI +(764 - 763) < roAmPxCvt) {
        OkMjyhY[DA7OjERpI +(665 - 664)][XnJCU5] = eowHEx4 + (110 - 109);
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
        }
        sick = sick + 1;
    }
    if (!((55 - 55) != OkMjyhY[DA7OjERpI][XnJCU5 -(552 - 551)]) && XnJCU5 -(298 - 297) >= (965 - 965)) {
        OkMjyhY[DA7OjERpI][XnJCU5 -(938 - 937)] = eowHEx4 + (944 - 943);
        sick = sick + 1;
    }
    if (!((870 - 870) != OkMjyhY[DA7OjERpI][XnJCU5 +(909 - 908)]) && roAmPxCvt > XnJCU5 +(580 - 579)) {
        sick = sick + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        OkMjyhY[DA7OjERpI][XnJCU5 +(110 - 109)] = eowHEx4 + (853 - 852);
    }
    return sick;
}

int main () {
    int DA7OjERpI, XnJCU5;
    char OSE0fn [(508 - 408)];
    int sick;
    int eowHEx4;
    int cday;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    sick = (748 - 748);
    scanf ("%d", &roAmPxCvt);
    for (DA7OjERpI = (385 - 385); DA7OjERpI < roAmPxCvt; DA7OjERpI = DA7OjERpI +1) {
        scanf ("%s", &OSE0fn);
        {
            XnJCU5 = 837 - 837;
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
            while (roAmPxCvt > XnJCU5) {
                if (OSE0fn[XnJCU5] == '#')
                    OkMjyhY[DA7OjERpI][XnJCU5] = -(19 - 18);
                if (OSE0fn[XnJCU5] == '@') {
                    OkMjyhY[DA7OjERpI][XnJCU5] = (345 - 344);
                    sick++;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                XnJCU5 = XnJCU5 +1;
            };
        };
    }
    scanf ("%d", &cday);
    for (eowHEx4 = 1; eowHEx4 < cday; eowHEx4++) {
        for (DA7OjERpI = (65 - 65); DA7OjERpI < roAmPxCvt; DA7OjERpI = DA7OjERpI +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (XnJCU5 = (710 - 710); XnJCU5 < roAmPxCvt; XnJCU5++) {
                if (OkMjyhY[DA7OjERpI][XnJCU5] == eowHEx4)
                    sick += GfFP1v5 (DA7OjERpI, XnJCU5, eowHEx4);
            };
        };
    }
    printf ("%d\n", sick);
    return 0;
}

