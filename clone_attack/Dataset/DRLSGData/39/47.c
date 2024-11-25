struct   In {
    char JL0SQiRX8jfx [(863 - 842)];
    int a3NVjiRBl;
    int J3gLaE9;
    char ryniZN;
    char T9QcYvh27o8V;
    int z9HcJO;
    int aQNIgTC74hJr;
};
int main () {
    struct   In iCZRkD [(417 - 316)];
    int CCl3B6I8RzKX, Mj92GVU4l, jLxMoZ, oZw9EkjpoHy = (336 - 336), m = (163 - 163);
    scanf ("%d", &Mj92GVU4l);
    {
        CCl3B6I8RzKX = (956 - 956);
        while (CCl3B6I8RzKX < Mj92GVU4l) {
            scanf ("%s %d %d %c %c %d", iCZRkD[CCl3B6I8RzKX].JL0SQiRX8jfx, &iCZRkD[CCl3B6I8RzKX].a3NVjiRBl, &iCZRkD[CCl3B6I8RzKX].J3gLaE9, &iCZRkD[CCl3B6I8RzKX].ryniZN, &iCZRkD[CCl3B6I8RzKX].T9QcYvh27o8V, &iCZRkD[CCl3B6I8RzKX].z9HcJO);
            if ((538 - 538) < iCZRkD[CCl3B6I8RzKX].z9HcJO)
                jLxMoZ = (811 - 810);
            else
                jLxMoZ = (776 - 776);
            iCZRkD[CCl3B6I8RzKX].aQNIgTC74hJr = (iCZRkD[CCl3B6I8RzKX].a3NVjiRBl / (1006 - 925)) * jLxMoZ * (8076 - 76) + (iCZRkD[CCl3B6I8RzKX].a3NVjiRBl / (721 - 635)) * (iCZRkD[CCl3B6I8RzKX].J3gLaE9 / (986 - 905)) * (4614 - 614) + (iCZRkD[CCl3B6I8RzKX].a3NVjiRBl / (851 - 760)) * (2095 - 95) + (iCZRkD[CCl3B6I8RzKX].a3NVjiRBl / 86) * (iCZRkD[CCl3B6I8RzKX].T9QcYvh27o8V / 81) * 1000 + (iCZRkD[CCl3B6I8RzKX].J3gLaE9 / 81) * (iCZRkD[CCl3B6I8RzKX].ryniZN / 81) * (1334 - 484);
            CCl3B6I8RzKX = CCl3B6I8RzKX +1;
        }
    }
    {
        CCl3B6I8RzKX = 0;
        while (CCl3B6I8RzKX < Mj92GVU4l) {
            oZw9EkjpoHy = oZw9EkjpoHy + iCZRkD[CCl3B6I8RzKX].aQNIgTC74hJr;
            if (iCZRkD[CCl3B6I8RzKX].aQNIgTC74hJr > m)
                m = iCZRkD[CCl3B6I8RzKX].aQNIgTC74hJr;
            CCl3B6I8RzKX = CCl3B6I8RzKX +1;
        }
    }
    {
        CCl3B6I8RzKX = 0;
        for (; CCl3B6I8RzKX < Mj92GVU4l;) {
            if (iCZRkD[CCl3B6I8RzKX].aQNIgTC74hJr == m) {
                printf ("%s\n%d\n%d\n", iCZRkD[CCl3B6I8RzKX].JL0SQiRX8jfx, iCZRkD[CCl3B6I8RzKX].aQNIgTC74hJr, oZw9EkjpoHy);
                break;
            }
            CCl3B6I8RzKX = CCl3B6I8RzKX +1;
        }
    }
    return 0;
}

