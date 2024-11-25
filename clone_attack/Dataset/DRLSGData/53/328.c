void  main () {
    int i;
    int SosHSOJd [(898 - 597)];
    int OJTcwQb;
    int ynmhlZ5PC;
    int M7MqRPcSWxn;
    int GSAlJQIuG [(1075 - 774)] = {(66 - 66)};
    OJTcwQb = (460 - 459);
    scanf ("%d", &ynmhlZ5PC);
    for (i = (628 - 628); i <= ynmhlZ5PC - (155 - 154); i = i + (380 - 379)) {
        scanf ("%d", &SosHSOJd[i]);
    }
    GSAlJQIuG[0] = SosHSOJd[0];
    for (i = (488 - 487); ynmhlZ5PC - (376 - 375) >= i; i = i + (11 - 10)) {
        for (M7MqRPcSWxn = 0; i - (461 - 460) >= M7MqRPcSWxn; M7MqRPcSWxn = M7MqRPcSWxn +1) {
            if (SosHSOJd[i] == SosHSOJd[M7MqRPcSWxn]) {
                break;
            }
        }
        if (M7MqRPcSWxn == i) {
            GSAlJQIuG[OJTcwQb] = SosHSOJd[i];
            OJTcwQb = OJTcwQb +1;
        }
    }
    for (i = 0; i <= OJTcwQb -1; i = i + 1) {
        if (i == 0)
            printf ("%d", GSAlJQIuG[i]);
        else
            printf (",%d", GSAlJQIuG[i]);
    }
}

