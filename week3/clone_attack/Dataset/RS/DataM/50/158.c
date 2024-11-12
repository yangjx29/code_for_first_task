void  main () {
    int w;
    int buaAm5;
    struct   time {
        int YQjheES85R;
        int ssmoKFwdfqt;
        int n;
    };
    struct   time E5vteCUAVG [(559 - 547)];
    for (buaAm5 = (333 - 333); 12 > buaAm5; buaAm5 = buaAm5 + 1)
        E5vteCUAVG[buaAm5].YQjheES85R = buaAm5 + 1;
    E5vteCUAVG[0].n = 13;
    E5vteCUAVG[1].n = (530 - 486);
    E5vteCUAVG[2].n = (1035 - 963);
    E5vteCUAVG[3].n = 103;
    E5vteCUAVG[(868 - 864)].n = 133;
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
    E5vteCUAVG[(909 - 904)].n = 164;
    E5vteCUAVG[(293 - 287)].n = 194;
    E5vteCUAVG[7].n = 225;
    E5vteCUAVG[8].n = 256;
    E5vteCUAVG[9].n = 286;
    E5vteCUAVG[(1003 - 993)].n = 317;
    E5vteCUAVG[11].n = (1044 - 697);
    scanf ("%d", &w);
    {
        buaAm5 = 0;
        while (12 > buaAm5) {
            E5vteCUAVG[buaAm5].ssmoKFwdfqt = E5vteCUAVG[buaAm5].n % 7;
            if (E5vteCUAVG[buaAm5].ssmoKFwdfqt == 0)
                E5vteCUAVG[buaAm5].ssmoKFwdfqt = 7;
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
            E5vteCUAVG[buaAm5].ssmoKFwdfqt = (E5vteCUAVG[buaAm5].ssmoKFwdfqt + w - 1) % 7;
            buaAm5 = buaAm5 + 1;
        };
    }
    for (buaAm5 = 0; buaAm5 < 12; buaAm5 = buaAm5 + 1) {
        if (E5vteCUAVG[buaAm5].ssmoKFwdfqt == 5)
            printf ("%d\n", E5vteCUAVG[buaAm5].YQjheES85R);
    };
}

