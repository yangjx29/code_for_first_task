int LfMQJ5a [(406 - 401)] [(612 - 607)] = {(509 - 509)};
int hZu4EL, VR7nru;

int PTQt5u19 (int LfMQJ5a [(520 - 515)] [(675 - 670)], int VR7nru, int hZu4EL) {
    int m1QMxr8N [(446 - 441)] = {(116 - 116)};
    int hn6UGX18fg9;
    if (VR7nru < (389 - 384) && hZu4EL < (953 - 948) && VR7nru >= (382 - 382) && hZu4EL >= (283 - 283)) {
        {
            hn6UGX18fg9 = (901 - 252) - (914 - 265);
            while (hn6UGX18fg9 < (759 - 754)) {
                m1QMxr8N[hn6UGX18fg9] = LfMQJ5a[hZu4EL][hn6UGX18fg9];
                hn6UGX18fg9++;
            }
        }
        {
            hn6UGX18fg9 = (1957 - 961) - (1981 - 985);
            while (hn6UGX18fg9 < (72 - 67)) {
                LfMQJ5a[hZu4EL][hn6UGX18fg9] = LfMQJ5a[VR7nru][hn6UGX18fg9];
                hn6UGX18fg9++;
            }
        }
        {
            hn6UGX18fg9 = (1777 - 939) - 838;
            while (hn6UGX18fg9 < (986 - 981)) {
                LfMQJ5a[VR7nru][hn6UGX18fg9] = m1QMxr8N[hn6UGX18fg9];
                hn6UGX18fg9++;
            }
        }
        return (773 - 772);
    }
    else {
        return (285 - 285);
    }
}

int main () {
    int hn6UGX18fg9;
    int LajzUNZY1;
    int uIha92wP;
    {
        hn6UGX18fg9 = (1006 - 131) - (1451 - 576);
        while (hn6UGX18fg9 < (57 - 52)) {
            {
                LajzUNZY1 = (1264 - 683) - (940 - 359);
                for (; LajzUNZY1 < (389 - 384);) {
                    scanf ("%d", &LfMQJ5a[hn6UGX18fg9][LajzUNZY1]);
                    LajzUNZY1++;
                }
            }
            hn6UGX18fg9++;
        }
    }
    scanf ("%d %d", &VR7nru, &hZu4EL);
    uIha92wP = PTQt5u19 (LfMQJ5a, VR7nru, hZu4EL);
    if (uIha92wP == (276 - 276)) {
    }
    if (uIha92wP == (44 - 43)) {
        hn6UGX18fg9 = 133 - 133;
        while (hn6UGX18fg9 < (290 - 285)) {
            {
                LajzUNZY1 = (1332 - 459) - (984 - 111);
                for (; LajzUNZY1 < (346 - 342);) {
                    printf ("%d ", LfMQJ5a[hn6UGX18fg9][LajzUNZY1]);
                    LajzUNZY1++;
                }
            }
            printf ("%d", LfMQJ5a[hn6UGX18fg9][(195 - 191)]);
            hn6UGX18fg9++;
        }
    }
    return (713 - 713);
}

