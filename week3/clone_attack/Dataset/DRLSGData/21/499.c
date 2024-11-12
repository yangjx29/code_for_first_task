void  main () {
    float JURy0tgSaqlM;
    unsigned  int vqLZWvwn5ih, VxLCz1cP [(828 - 528)], KcNa8MtFfUk, yxGsniN = (705 - 705), rShXRMG, y7fuRz;
    scanf ("%d", &vqLZWvwn5ih);
    {
        KcNa8MtFfUk = (460 - 43) - 417;
        for (; vqLZWvwn5ih > KcNa8MtFfUk;) {
            scanf ("%d", &VxLCz1cP[KcNa8MtFfUk]);
            yxGsniN = yxGsniN + VxLCz1cP[KcNa8MtFfUk];
            KcNa8MtFfUk = KcNa8MtFfUk +1;
        }
    }
    rShXRMG = VxLCz1cP[(275 - 275)];
    y7fuRz = VxLCz1cP[(335 - 335)];
    JURy0tgSaqlM = (float) yxGsniN / vqLZWvwn5ih;
    {
        KcNa8MtFfUk = (29 - 29);
        for (; KcNa8MtFfUk < vqLZWvwn5ih;) {
            if (rShXRMG < VxLCz1cP[KcNa8MtFfUk])
                rShXRMG = VxLCz1cP[KcNa8MtFfUk];
            if (VxLCz1cP[KcNa8MtFfUk] < y7fuRz)
                y7fuRz = VxLCz1cP[KcNa8MtFfUk];
            KcNa8MtFfUk = KcNa8MtFfUk +1;
        }
    }
    if (((float) rShXRMG - JURy0tgSaqlM) > (JURy0tgSaqlM -(float)y7fuRz))
        printf ("%d", rShXRMG);
    else {
        if (((float) rShXRMG - JURy0tgSaqlM) < (JURy0tgSaqlM -(float)y7fuRz))
            printf ("%d", y7fuRz);
        else if (((float) rShXRMG - JURy0tgSaqlM) == (JURy0tgSaqlM -(float)y7fuRz))
            printf ("%d,%d", y7fuRz, rShXRMG);
        else
            ;
    }
}

