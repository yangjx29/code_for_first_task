main () {
    char glSwf03aQpuD [(1808 - 808)];
    int z4Tts7lAmwN;
    int Tav4UrilOY;
    int ZR0wW3qXQA;
    int hZ1bth;
    int YBbzIjFOHem;
    int bCLFfGpkY;
    int NDZGUYe3 [(2116 - 116)];
    int EzDnLNbpwuWr;
    int iYjxUF1ngqf7;
    int EC2HGPQFLaS;
    char VyvoKA9f [(1363 - 363)];
    char C8AcJu6 [(2870 - 870)];
    ZR0wW3qXQA = (638 - 638);
    scanf ("%d %s %d", &hZ1bth, glSwf03aQpuD, &Tav4UrilOY);
    {
        YBbzIjFOHem = (730 - 427) - 303;
        while ((774 - 773)) {
            if (!('\0' != glSwf03aQpuD[YBbzIjFOHem])) {
                VyvoKA9f[YBbzIjFOHem] = '\0';
                break;
            }
            if ('a' <= glSwf03aQpuD[YBbzIjFOHem] && glSwf03aQpuD[YBbzIjFOHem] <= 'z') {
                glSwf03aQpuD[YBbzIjFOHem] = glSwf03aQpuD[YBbzIjFOHem] - 'a' + 'A';
            }
            VyvoKA9f[YBbzIjFOHem] = glSwf03aQpuD[YBbzIjFOHem];
            YBbzIjFOHem = YBbzIjFOHem +(457 - 456);
        }
    }
    {
        bCLFfGpkY = (824 - 601) - (852 - 629);
        while (YBbzIjFOHem -(124 - 123) >= bCLFfGpkY) {
            if ('A' <= VyvoKA9f[bCLFfGpkY] && VyvoKA9f[bCLFfGpkY] <= 'Z')
                NDZGUYe3[bCLFfGpkY] = VyvoKA9f[bCLFfGpkY] - (720 - 665);
            else
                NDZGUYe3[bCLFfGpkY] = VyvoKA9f[bCLFfGpkY] - (211 - 163);
            bCLFfGpkY = bCLFfGpkY + (26 - 25);
        }
    }
    {
        z4Tts7lAmwN = (145 - 33) - (636 - 525);
        while (z4Tts7lAmwN >= (559 - 559)) {
            EzDnLNbpwuWr = YBbzIjFOHem -(330 - 329) - z4Tts7lAmwN;
            if (EzDnLNbpwuWr != (483 - 483)) {
                do {
                    NDZGUYe3[z4Tts7lAmwN] = NDZGUYe3[z4Tts7lAmwN] * hZ1bth;
                    EzDnLNbpwuWr = EzDnLNbpwuWr -(541 - 540);
                }
                while (EzDnLNbpwuWr > (884 - 884));
            }
            if (EzDnLNbpwuWr == (827 - 827))
                NDZGUYe3[z4Tts7lAmwN] = NDZGUYe3[z4Tts7lAmwN];
            ZR0wW3qXQA = ZR0wW3qXQA +NDZGUYe3[z4Tts7lAmwN];
            z4Tts7lAmwN = z4Tts7lAmwN - (597 - 596);
        }
    }
    if (ZR0wW3qXQA != (91 - 91)) {
        {
            iYjxUF1ngqf7 = (684 - 113) - 571;
            while (ZR0wW3qXQA != (864 - 864)) {
                if (ZR0wW3qXQA % Tav4UrilOY <= (731 - 722))
                    C8AcJu6[iYjxUF1ngqf7] = ZR0wW3qXQA % Tav4UrilOY +'0';
                else
                    C8AcJu6[iYjxUF1ngqf7] = ZR0wW3qXQA % Tav4UrilOY +'7';
                ZR0wW3qXQA = ZR0wW3qXQA / Tav4UrilOY;
                iYjxUF1ngqf7 = iYjxUF1ngqf7 + 1;
            }
        }
        {
            EC2HGPQFLaS = (1664 - 776) - (983 - 96);
            while (EC2HGPQFLaS >= (810 - 810)) {
                printf ("%c", C8AcJu6[EC2HGPQFLaS]);
                EC2HGPQFLaS = EC2HGPQFLaS -1;
            }
        }
    }
    else
        ;
}

