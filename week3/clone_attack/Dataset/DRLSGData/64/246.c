struct   zuhe {
    int a [(189 - 186)];
    int b [(888 - 885)];
    double  m;
};
int main () {
    int l, RAy1dRz, j, n, m, DT1spux = (498 - 498);
    struct   zuhe z [(195 - 145)];
    struct   zuhe b;
    int s [(871 - 771)] [(342 - 338)];
    scanf ("%d", &n);
    {
        RAy1dRz = 297 - 297;
        for (; n > RAy1dRz;) {
            {
                j = 453 - 453;
                for (; (472 - 469) > j;) {
                    scanf ("%d", &s[RAy1dRz][j]);
                    j = j + 1;
                }
            }
            RAy1dRz = RAy1dRz +1;
        }
    }
    {
        RAy1dRz = 891 - 891;
        for (; RAy1dRz < n - (636 - 635);) {
            {
                j = 618 - 617;
                for (; n > j;) {
                    {
                        l = 173 - 173;
                        for (; l < (130 - 127);) {
                            z[DT1spux].a[l] = s[RAy1dRz][l];
                            z[DT1spux].b[l] = s[j][l];
                            l = l + 1;
                        }
                    }
                    z[DT1spux].m = pow ((s[RAy1dRz][(882 - 882)] - s[j][(124 - 124)]) * (s[RAy1dRz][(133 - 133)] - s[j][(830 - 830)]) + (s[RAy1dRz][(597 - 596)] - s[j][(998 - 997)]) * (s[RAy1dRz][(961 - 960)] - s[j][(542 - 541)]) + (s[RAy1dRz][(462 - 460)] - s[j][(357 - 355)]) * (s[RAy1dRz][(834 - 832)] - s[j][(112 - 110)]), (975.5 - 975.0));
                    DT1spux = DT1spux +(561 - 560);
                    j = j + 1;
                }
            }
            RAy1dRz = RAy1dRz +1;
        }
    }
    {
        RAy1dRz = 953 - 952;
        while (n * (n - (985 - 984)) / (512 - 510) > RAy1dRz) {
            {
                j = 901 - 901;
                while (j < n * (n - (445 - 444)) / (971 - 969) - RAy1dRz) {
                    if (z[j + (223 - 222)].m > z[j].m) {
                        b = z[j];
                        z[j] = z[j + (536 - 535)];
                        z[j + (869 - 868)] = b;
                    }
                    j = j + 1;
                }
            }
            RAy1dRz = RAy1dRz +1;
        }
    }
    {
        RAy1dRz = 669 - 669;
        for (; n * (n - (995 - 994)) / (683 - 681) > RAy1dRz;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", z[RAy1dRz].a[(51 - 51)], z[RAy1dRz].a[(451 - 450)], z[RAy1dRz].a[(806 - 804)], z[RAy1dRz].b[(686 - 686)], z[RAy1dRz].b[(289 - 288)], z[RAy1dRz].b[2], z[RAy1dRz].m);
            RAy1dRz++;
        }
    }
    return (32 - 32);
}

