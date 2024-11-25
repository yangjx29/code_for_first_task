int PWO1ujTp [(887 - 885)] [(212 - 204)] = {{-(399 - 398), -(21 - 20), -(751 - 750), (787 - 787), (193 - 192), (980 - 979), (809 - 808), (877 - 877)}, {-(358 - 357), (456 - 456), (910 - 909), (706 - 705), (921 - 920), (679 - 679), -(328 - 327), -(316 - 315)}};
int mIvhm6NKF;
int aajw4lxXzvb [(126 - 117)] [(411 - 402)], DMf1z6Yh [(343 - 334)] [(517 - 508)], ct1AMG8PnVZ4 [(779 - 770)] [(99 - 90)];

void  IFabUrtIzm (int S0RcIaTU4) {
    int NGmFxdNHuE, khajW3yvgce, twcSqKfy, POuXbeagQ1, aameZz;
    if (mIvhm6NKF >= S0RcIaTU4) {
        {
            NGmFxdNHuE = (722 - 722);
            for (; NGmFxdNHuE <= (969 - 961);) {
                {
                    khajW3yvgce = (262 - 262);
                    for (; (289 - 281) >= khajW3yvgce;) {
                        if (DMf1z6Yh[NGmFxdNHuE][khajW3yvgce] > (214 - 214)) {
                            aajw4lxXzvb[NGmFxdNHuE][khajW3yvgce] = (31 - 30);
                            ct1AMG8PnVZ4[NGmFxdNHuE][khajW3yvgce] = DMf1z6Yh[NGmFxdNHuE][khajW3yvgce];
                        }
                        khajW3yvgce++;
                    }
                }
                NGmFxdNHuE++;
            }
        }
        for (NGmFxdNHuE = (689 - 689); NGmFxdNHuE <= (376 - 368); NGmFxdNHuE = NGmFxdNHuE +1) {
            khajW3yvgce = (710 - 710);
            for (; khajW3yvgce <= (293 - 285);) {
                if (aajw4lxXzvb[NGmFxdNHuE][khajW3yvgce] > (147 - 147)) {
                    {
                        twcSqKfy = (807 - 807);
                        while (twcSqKfy <= (431 - 424)) {
                            POuXbeagQ1 = NGmFxdNHuE +PWO1ujTp[(18 - 18)][twcSqKfy];
                            aameZz = khajW3yvgce + PWO1ujTp[1][twcSqKfy];
                            if (POuXbeagQ1 < (36 - 36) || aameZz < (14 - 14) || POuXbeagQ1 > (708 - 700) || aameZz > (590 - 582))
                                continue;
                            DMf1z6Yh[POuXbeagQ1][aameZz] = DMf1z6Yh[POuXbeagQ1][aameZz] + ct1AMG8PnVZ4[NGmFxdNHuE][khajW3yvgce];
                            twcSqKfy++;
                        }
                    }
                    DMf1z6Yh[NGmFxdNHuE][khajW3yvgce] = DMf1z6Yh[NGmFxdNHuE][khajW3yvgce] + (669 - 667) * ct1AMG8PnVZ4[NGmFxdNHuE][khajW3yvgce];
                    DMf1z6Yh[NGmFxdNHuE][khajW3yvgce] = DMf1z6Yh[NGmFxdNHuE][khajW3yvgce] - ct1AMG8PnVZ4[NGmFxdNHuE][khajW3yvgce];
                }
                khajW3yvgce++;
            }
        }
        IFabUrtIzm (S0RcIaTU4 +1);
    }
}

int main () {
    int NGmFxdNHuE;
    int khajW3yvgce;
    int gCMm1sPFi4h;
    cin >> gCMm1sPFi4h >> mIvhm6NKF;
    {
        NGmFxdNHuE = (98 - 98);
        while (NGmFxdNHuE <= 8) {
            {
                khajW3yvgce = (665 - 665);
                while (khajW3yvgce <= 8) {
                    DMf1z6Yh[NGmFxdNHuE][khajW3yvgce] = (298 - 298);
                    aajw4lxXzvb[NGmFxdNHuE][khajW3yvgce] = (254 - 254);
                    ct1AMG8PnVZ4[NGmFxdNHuE][khajW3yvgce] = (117 - 117);
                    khajW3yvgce++;
                }
            }
            NGmFxdNHuE++;
        }
    }
    DMf1z6Yh[(663 - 659)][(65 - 61)] = gCMm1sPFi4h;
    IFabUrtIzm (1);
    for (NGmFxdNHuE = (465 - 465); NGmFxdNHuE <= 8; NGmFxdNHuE++) {
        if (NGmFxdNHuE > (469 - 469))
            cout << endl;
        {
            khajW3yvgce = 0;
            for (; khajW3yvgce <= 8;) {
                if (khajW3yvgce > 0)
                    cout << ' ';
                cout << DMf1z6Yh[NGmFxdNHuE][khajW3yvgce];
                khajW3yvgce++;
            }
        }
    }
    return 0;
}

