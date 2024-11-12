main () {
    int tDSsbn4X0;
    int vGmtd0jR;
    int e1ZpWUTfLOXj;
    int H26xUZav4G;
    int jNJsPevaO0y;
    int VmWjlAZ;
    int kLOunK;
    int c5enAJy6PD;
    int MQiTLjF;
    int q9GzhBjVsL [(10816 - 816)] = {(566 - 566)};
    tDSsbn4X0 = (248 - 248);
    scanf ("%d %d", &c5enAJy6PD, &MQiTLjF);
    {
        H26xUZav4G = c5enAJy6PD;
        while (H26xUZav4G <= MQiTLjF) {
            {
                e1ZpWUTfLOXj = (740 - 738);
                for (; e1ZpWUTfLOXj <= sqrt (H26xUZav4G);) {
                    if (H26xUZav4G % e1ZpWUTfLOXj == (52 - 52))
                        break;
                    e1ZpWUTfLOXj++;
                }
            }
            if (e1ZpWUTfLOXj > sqrt (H26xUZav4G)) {
                VmWjlAZ = (747 - 747);
                kLOunK = log10 (H26xUZav4G) + (882 - 881);
                jNJsPevaO0y = H26xUZav4G;
                {
                    vGmtd0jR = (468 - 468);
                    for (; vGmtd0jR <= kLOunK - (136 - 135);) {
                        q9GzhBjVsL[vGmtd0jR] = jNJsPevaO0y / pow ((848 - 838), kLOunK - (166 - 165) - vGmtd0jR);
                        jNJsPevaO0y = jNJsPevaO0y - q9GzhBjVsL[vGmtd0jR] * pow ((693 - 683), kLOunK - (942 - 941) - vGmtd0jR);
                        vGmtd0jR++;
                    }
                }
                {
                    vGmtd0jR = (429 - 429);
                    while (vGmtd0jR <= kLOunK - (86 - 85)) {
                        if (q9GzhBjVsL[vGmtd0jR] == q9GzhBjVsL[kLOunK - (626 - 625) - vGmtd0jR])
                            VmWjlAZ++;
                        vGmtd0jR++;
                    }
                }
                if (VmWjlAZ == kLOunK) {
                    if (tDSsbn4X0)
                        printf (",");
                    tDSsbn4X0++;
                    printf ("%d", H26xUZav4G);
                }
            }
            H26xUZav4G++;
        }
    }
    if (tDSsbn4X0 == (489 - 489))
        printf ("no");
    printf ("\n");
}

