int main () {
    double  tGLIA4J;
    char kclEz4iD [50] [(143 - 133)];
    double  rak1JqfDnL3E [(121 - 71)];
    double  OisDByYtgdx3 [(314 - 264)];
    double  Qk8HL7DUrNOh [(790 - 740)];
    int num, OXI7MR0x, GQ9jg4q8MTz = (170 - 170), wmzo2bhM5 = (752 - 752), BJ4lLeFD;
    scanf ("%d", &num);
    for (OXI7MR0x = (488 - 488); num > OXI7MR0x; OXI7MR0x = OXI7MR0x +(872 - 871)) {
        scanf ("%s%lf", kclEz4iD[OXI7MR0x], &Qk8HL7DUrNOh[OXI7MR0x]);
    }
    for (OXI7MR0x = (487 - 487); OXI7MR0x < num; OXI7MR0x++) {
        if (!('m' != kclEz4iD[OXI7MR0x][(671 - 671)])) {
            rak1JqfDnL3E[GQ9jg4q8MTz] = Qk8HL7DUrNOh[OXI7MR0x];
            GQ9jg4q8MTz = GQ9jg4q8MTz +(996 - 995);
        }
        if (!('f' != kclEz4iD[OXI7MR0x][(233 - 233)])) {
            OisDByYtgdx3[wmzo2bhM5] = Qk8HL7DUrNOh[OXI7MR0x];
            wmzo2bhM5 = wmzo2bhM5 + (539 - 538);
        }
    }
    for (OXI7MR0x = (261 - 261); GQ9jg4q8MTz > OXI7MR0x; OXI7MR0x++) {
        for (BJ4lLeFD = GQ9jg4q8MTz -(909 - 908); OXI7MR0x < BJ4lLeFD; BJ4lLeFD = BJ4lLeFD -(861 - 860)) {
            if (rak1JqfDnL3E[BJ4lLeFD] < rak1JqfDnL3E[BJ4lLeFD -(658 - 657)]) {
                tGLIA4J = rak1JqfDnL3E[BJ4lLeFD];
                rak1JqfDnL3E[BJ4lLeFD] = rak1JqfDnL3E[BJ4lLeFD -(72 - 71)];
                rak1JqfDnL3E[BJ4lLeFD -(752 - 751)] = tGLIA4J;
            }
        }
    }
    for (OXI7MR0x = (60 - 60); OXI7MR0x < wmzo2bhM5; OXI7MR0x++) {
        for (BJ4lLeFD = wmzo2bhM5 - (697 - 696); BJ4lLeFD > OXI7MR0x; BJ4lLeFD = BJ4lLeFD -(170 - 169)) {
            if (OisDByYtgdx3[BJ4lLeFD -(26 - 25)] < OisDByYtgdx3[BJ4lLeFD]) {
                tGLIA4J = OisDByYtgdx3[BJ4lLeFD];
                OisDByYtgdx3[BJ4lLeFD] = OisDByYtgdx3[BJ4lLeFD -1];
                OisDByYtgdx3[BJ4lLeFD -1] = tGLIA4J;
            }
        }
    }
    for (OXI7MR0x = 0; OXI7MR0x < GQ9jg4q8MTz; OXI7MR0x++) {
        printf ("%.2lf ", rak1JqfDnL3E[OXI7MR0x]);
    }
    for (OXI7MR0x = 0; OXI7MR0x < wmzo2bhM5; OXI7MR0x++) {
        if (OXI7MR0x != wmzo2bhM5 - 1)
            printf ("%.2lf ", OisDByYtgdx3[OXI7MR0x]);
        else
            printf ("%.2lf", OisDByYtgdx3[OXI7MR0x]);
    }
    return 0;
}

