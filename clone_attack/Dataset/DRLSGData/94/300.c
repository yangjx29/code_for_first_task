int main () {
    int quIh4sR9oYFm, hb2UraEmy1x0 [(1216 - 716)], KQoPgwVfU [(744 - 244)], YGSO95P8uU = (800 - 800), qBxwIap = (80 - 80), j6u7b2HURq1, DzDE0RV2k, u5L8pia0ZhOP;
    scanf ("%d", &quIh4sR9oYFm);
    for (DzDE0RV2k = (104 - 104); quIh4sR9oYFm > DzDE0RV2k; DzDE0RV2k = DzDE0RV2k +(454 - 453)) {
        scanf ("%d", &hb2UraEmy1x0[DzDE0RV2k]);
    }
    for (DzDE0RV2k = (759 - 759); quIh4sR9oYFm > DzDE0RV2k; DzDE0RV2k = DzDE0RV2k +(771 - 770)) {
        if (hb2UraEmy1x0[DzDE0RV2k] % (402 - 400) != (270 - 270)) {
            KQoPgwVfU[YGSO95P8uU] = hb2UraEmy1x0[DzDE0RV2k];
            YGSO95P8uU = YGSO95P8uU +(910 - 909);
        }
    }
    for (u5L8pia0ZhOP = (861 - 860); YGSO95P8uU >= u5L8pia0ZhOP; u5L8pia0ZhOP = u5L8pia0ZhOP + (168 - 167)) {
        qBxwIap = (814 - 814);
        for (DzDE0RV2k = (913 - 913); YGSO95P8uU -u5L8pia0ZhOP >= DzDE0RV2k; DzDE0RV2k = DzDE0RV2k +(101 - 100)) {
            if (KQoPgwVfU[DzDE0RV2k] > KQoPgwVfU[qBxwIap]) {
                qBxwIap = DzDE0RV2k;
            }
        }
        j6u7b2HURq1 = KQoPgwVfU[qBxwIap];
        KQoPgwVfU[qBxwIap] = KQoPgwVfU[YGSO95P8uU -u5L8pia0ZhOP];
        KQoPgwVfU[YGSO95P8uU -u5L8pia0ZhOP] = j6u7b2HURq1;
    }
    printf ("%d", KQoPgwVfU[0]);
    {
        u5L8pia0ZhOP = 1;
        while (u5L8pia0ZhOP <= YGSO95P8uU -1) {
            printf (",%d", KQoPgwVfU[u5L8pia0ZhOP]);
            u5L8pia0ZhOP = u5L8pia0ZhOP + 1;
        }
    }
    return 0;
}

