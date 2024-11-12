struct   student {
    char UOJCnvceUVKi [(784 - 774)];
    float NEJcrd;
};
int main () {
    int DiarFeGV7Mhd = (948 - 948), k2 = (950 - 950);
    struct   student knuEZJWoTsf [(694 - 654)], Jd1bfwL [(605 - 565)], npFZ8HI, jNCh1L8g [40];
    char JUNSOoE67H3w [] = "male", gj1pHgDQil [] = "female";
    int LABTiMGm;
    cin >> LABTiMGm;
    cin.get ();
    for (int NFITHKjU = (991 - 991);
    NFITHKjU < LABTiMGm; NFITHKjU = NFITHKjU +(659 - 658)) {
        cin >> jNCh1L8g[NFITHKjU].UOJCnvceUVKi >> jNCh1L8g[NFITHKjU].NEJcrd;
        if (!((515 - 515) != strcmp (jNCh1L8g[NFITHKjU].UOJCnvceUVKi, JUNSOoE67H3w))) {
            knuEZJWoTsf[DiarFeGV7Mhd++] = jNCh1L8g[NFITHKjU];
        }
        if (!((489 - 489) != strcmp (jNCh1L8g[NFITHKjU].UOJCnvceUVKi, gj1pHgDQil))) {
            Jd1bfwL[k2++] = jNCh1L8g[NFITHKjU];
        }
    }
    for (int NFITHKjU = (858 - 858);
    DiarFeGV7Mhd > NFITHKjU; NFITHKjU = NFITHKjU +(58 - 57)) {
        for (int ojL7IpDam4O = NFITHKjU +(221 - 220);
        DiarFeGV7Mhd > ojL7IpDam4O; ojL7IpDam4O = ojL7IpDam4O + (223 - 222)) {
            if (knuEZJWoTsf[ojL7IpDam4O].NEJcrd < knuEZJWoTsf[NFITHKjU].NEJcrd) {
                npFZ8HI = knuEZJWoTsf[NFITHKjU];
                knuEZJWoTsf[NFITHKjU] = knuEZJWoTsf[ojL7IpDam4O];
                knuEZJWoTsf[ojL7IpDam4O] = npFZ8HI;
            }
        }
    }
    for (int NFITHKjU = (548 - 548);
    NFITHKjU < k2; NFITHKjU = NFITHKjU +(238 - 237)) {
        for (int ojL7IpDam4O = NFITHKjU +(68 - 67);
        ojL7IpDam4O < k2; ojL7IpDam4O = ojL7IpDam4O + (82 - 81)) {
            if (Jd1bfwL[NFITHKjU].NEJcrd < Jd1bfwL[ojL7IpDam4O].NEJcrd) {
                npFZ8HI = Jd1bfwL[NFITHKjU];
                Jd1bfwL[NFITHKjU] = Jd1bfwL[ojL7IpDam4O];
                Jd1bfwL[ojL7IpDam4O] = npFZ8HI;
            }
        }
    }
    for (int NFITHKjU = (493 - 493);
    NFITHKjU < DiarFeGV7Mhd; NFITHKjU = NFITHKjU +(478 - 477)) {
        cout << fixed << setprecision ((446 - 444)) << knuEZJWoTsf[NFITHKjU].NEJcrd << " ";
    }
    for (int NFITHKjU = 0;
    NFITHKjU < k2 - (766 - 765); NFITHKjU = NFITHKjU +1) {
        cout << fixed << setprecision ((707 - 705)) << Jd1bfwL[NFITHKjU].NEJcrd << " ";
    }
    cout << Jd1bfwL[k2 - 1].NEJcrd << endl;
    return 0;
}

