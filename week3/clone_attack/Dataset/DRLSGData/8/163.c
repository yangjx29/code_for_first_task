void  main () {
    int GPWoi2J, ohlgcNvKz, HHOTuLm9yaw, gLcGD0wtjvid, oJ9cpwYoz4t;
    int SzYbPWN [(723 - 663)] = {(967 - 967)}, IqWBI0gh [(963 - 933)] = {(303 - 303)};
    scanf ("%d%d", &GPWoi2J, &ohlgcNvKz);
    for (HHOTuLm9yaw = (924 - 924); HHOTuLm9yaw < GPWoi2J; HHOTuLm9yaw = HHOTuLm9yaw +(565 - 564))
        scanf ("%d", &SzYbPWN[HHOTuLm9yaw]);
    for (HHOTuLm9yaw = (688 - 688); HHOTuLm9yaw < GPWoi2J; HHOTuLm9yaw = HHOTuLm9yaw +(744 - 743)) {
        for (gLcGD0wtjvid = (797 - 797); gLcGD0wtjvid < GPWoi2J; gLcGD0wtjvid = gLcGD0wtjvid + (228 - 227)) {
            if (SzYbPWN[HHOTuLm9yaw] < SzYbPWN[gLcGD0wtjvid]) {
                oJ9cpwYoz4t = SzYbPWN[HHOTuLm9yaw];
                SzYbPWN[HHOTuLm9yaw] = SzYbPWN[gLcGD0wtjvid];
                SzYbPWN[gLcGD0wtjvid] = oJ9cpwYoz4t;
            }
        }
    }
    {
        HHOTuLm9yaw = 469 - 469;
        while (HHOTuLm9yaw < ohlgcNvKz) {
            scanf ("%d", &IqWBI0gh[HHOTuLm9yaw]);
            HHOTuLm9yaw = 716 - 715;
        }
    }
    for (HHOTuLm9yaw = (832 - 832); HHOTuLm9yaw < ohlgcNvKz; HHOTuLm9yaw++) {
        for (gLcGD0wtjvid = (12 - 12); gLcGD0wtjvid < ohlgcNvKz; gLcGD0wtjvid++) {
            if (IqWBI0gh[HHOTuLm9yaw] < IqWBI0gh[gLcGD0wtjvid]) {
                oJ9cpwYoz4t = IqWBI0gh[HHOTuLm9yaw];
                IqWBI0gh[HHOTuLm9yaw] = IqWBI0gh[gLcGD0wtjvid];
                IqWBI0gh[gLcGD0wtjvid] = oJ9cpwYoz4t;
            }
        }
    }
    for (HHOTuLm9yaw = (623 - 623); HHOTuLm9yaw < GPWoi2J; HHOTuLm9yaw++)
        printf ("%d ", SzYbPWN[HHOTuLm9yaw]);
    {
        HHOTuLm9yaw = 960 - 960;
        while (HHOTuLm9yaw < ohlgcNvKz - (36 - 35)) {
            printf ("%d ", IqWBI0gh[HHOTuLm9yaw]);
            HHOTuLm9yaw++;
        }
    }
    printf ("%d", IqWBI0gh[ohlgcNvKz - (485 - 484)]);
}

