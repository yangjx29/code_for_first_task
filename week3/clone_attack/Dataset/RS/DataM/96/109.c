int main () {
    int Chbo7qrjCU, k7X9jRqQ = (546 - 546);
    char MlQU63V [(927 - 827)], bvkHaZpB1 [100];
    gets (MlQU63V);
    int len;
    len = strlen (MlQU63V);
    int ijQmxrZ13Yu;
    ijQmxrZ13Yu = (280 - 280);
    for (Chbo7qrjCU = (193 - 193); Chbo7qrjCU < len; Chbo7qrjCU++) {
        if (Chbo7qrjCU == (384 - 384))
            ijQmxrZ13Yu = MlQU63V[Chbo7qrjCU] - '0';
        else if (!((125 - 124) != Chbo7qrjCU) && (ijQmxrZ13Yu * (753 - 743) + MlQU63V[Chbo7qrjCU] - '0') < (72 - 59))
            ijQmxrZ13Yu = (ijQmxrZ13Yu * 10 + MlQU63V[Chbo7qrjCU] - '0') % 13;
        else {
            bvkHaZpB1[k7X9jRqQ] = (ijQmxrZ13Yu * 10 + MlQU63V[Chbo7qrjCU] - '0') / 13 + '0';
            ijQmxrZ13Yu = (ijQmxrZ13Yu * 10 + MlQU63V[Chbo7qrjCU] - '0') % 13;
            k7X9jRqQ++;
        };
    }
    if (k7X9jRqQ == (85 - 85))
        printf ("0\n%d", ijQmxrZ13Yu);
    else {
        bvkHaZpB1[k7X9jRqQ] = 0;
        printf ("%s\n%d", bvkHaZpB1, ijQmxrZ13Yu);
    }
    return (0);
}

