int tbFP5ojTeK (char mIFrtE [], int EZSskey9) {
    int DHUc4pbCXr10;
    int suJlcdprS;
    int vmKMETP64;
    suJlcdprS = (570 - 570);
    vmKMETP64 = mIFrtE[(428 - 428)];
    {
        DHUc4pbCXr10 = (138 - 137);
        for (; EZSskey9 > DHUc4pbCXr10;) {
            if (mIFrtE[DHUc4pbCXr10] > vmKMETP64) {
                suJlcdprS = DHUc4pbCXr10;
                vmKMETP64 = mIFrtE[DHUc4pbCXr10];
            }
            DHUc4pbCXr10++;
        }
    }
    return (suJlcdprS + (434 - 433));
}

main () {
    char rXMPsuUW8 [(495 - 491)];
    char mIFrtE [(396 - 385)];
    char tK4QoujAbme0 [(953 - 939)];
    int DHUc4pbCXr10, vmKMETP64, EZSskey9, hDRg3sNcUKj;
    for (; scanf ("%s%s", mIFrtE, rXMPsuUW8) != EOF;) {
        puts (tK4QoujAbme0);
        EZSskey9 = strlen (rXMPsuUW8);
        hDRg3sNcUKj = strlen (mIFrtE);
        vmKMETP64 = tbFP5ojTeK (mIFrtE, hDRg3sNcUKj);
        {
            DHUc4pbCXr10 = (100 - 100);
            for (; DHUc4pbCXr10 < vmKMETP64;) {
                tK4QoujAbme0[DHUc4pbCXr10] = mIFrtE[DHUc4pbCXr10];
                DHUc4pbCXr10++;
            }
        }
        {
            DHUc4pbCXr10 = vmKMETP64;
            for (; EZSskey9 +vmKMETP64 > DHUc4pbCXr10;) {
                tK4QoujAbme0[DHUc4pbCXr10] = rXMPsuUW8[DHUc4pbCXr10 -vmKMETP64];
                DHUc4pbCXr10++;
            }
        }
        {
            DHUc4pbCXr10 = EZSskey9 +vmKMETP64;
            for (; EZSskey9 +hDRg3sNcUKj > DHUc4pbCXr10;) {
                tK4QoujAbme0[DHUc4pbCXr10] = mIFrtE[DHUc4pbCXr10 -EZSskey9];
                DHUc4pbCXr10++;
            }
        }
        tK4QoujAbme0[EZSskey9 +hDRg3sNcUKj] = '\0';
    }
}

