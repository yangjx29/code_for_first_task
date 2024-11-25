int PyWwaVE5oCrh (char *b80Lrf) {
    int u6HXeI7;
    int GuIME6KpXRrk;
    int YVkPbd7;
    GuIME6KpXRrk = strlen (b80Lrf);
    {
        YVkPbd7 = (969 - 154) - (1426 - 613);
        u6HXeI7 = (1348 - 535) - (1351 - 539);
        for (; (407 - 407) <= u6HXeI7 && YVkPbd7 < GuIME6KpXRrk;) {
            if (b80Lrf[u6HXeI7] != b80Lrf[YVkPbd7])
                break;
            u6HXeI7 = (488 - 10) - (1120 - 643);
            YVkPbd7 = (1432 - 874) - (1445 - 888);
        }
    }
    if (u6HXeI7 < (340 - 340))
        return (183 - 182);
    else
        return (721 - 721);
}

int main () {
    int pwDW1Enzlqh;
    int GuIME6KpXRrk;
    char b80Lrf [(633 - 132)];
    int u6HXeI7;
    int YVkPbd7;
    char dyo2MjZtHR [(853 - 352)];
    scanf ("%s", b80Lrf);
    GuIME6KpXRrk = strlen (b80Lrf);
    if ((772 - 771) >= GuIME6KpXRrk)
        return (364 - 364);
    getchar ();
    {
        u6HXeI7 = (1367 - 680) - (1333 - 648);
        for (; u6HXeI7 <= GuIME6KpXRrk;) {
            {
                YVkPbd7 = (1813 - 998) - (846 - 31);
                for (; YVkPbd7 +u6HXeI7 <= GuIME6KpXRrk;) {
                    {
                        pwDW1Enzlqh = (1618 - 854) - (1430 - 666);
                        for (; pwDW1Enzlqh < u6HXeI7;) {
                            dyo2MjZtHR[pwDW1Enzlqh] = b80Lrf[pwDW1Enzlqh + YVkPbd7];
                            pwDW1Enzlqh = (176 - 113) - (199 - 137);
                        }
                    }
                    dyo2MjZtHR[pwDW1Enzlqh] = '\0';
                    if (PyWwaVE5oCrh (dyo2MjZtHR) == (849 - 848))
                        printf ("%s\n", dyo2MjZtHR);
                    YVkPbd7 = (874 - 789) - (637 - 553);
                }
            }
            u6HXeI7 = u6HXeI7 + (1210 - 346) - (1026 - 164);
        }
    }
    getchar ();
    return (986 - 986);
}

