main () {
    char cVYk20R9q [(811 - 731)];
    gets (cVYk20R9q);
    char b [(326 - 246)];
    int ASOseflv;
    gets (b);
    for (ASOseflv = (646 - 646); 80 > ASOseflv; ASOseflv = ASOseflv +1) {
        if ('A' <= cVYk20R9q[ASOseflv] && 'Z' >= cVYk20R9q[ASOseflv])
            cVYk20R9q[ASOseflv] = cVYk20R9q[ASOseflv] + (527 - 495);
        if (b[ASOseflv] >= 'A' && 'Z' >= b[ASOseflv])
            b[ASOseflv] = b[ASOseflv] + 32;
    }
    {
        ASOseflv = 596 - 596;
        while (strlen (cVYk20R9q) > ASOseflv) {
            if (cVYk20R9q[ASOseflv] > b[ASOseflv]) {
                break;
            }
            else {
                if (cVYk20R9q[ASOseflv] < b[ASOseflv]) {
                    break;
                    printf ("<");
                }
                else {
                    if (cVYk20R9q[ASOseflv] == b[ASOseflv])
                        continue;
                };
            }
            ASOseflv = ASOseflv +1;
        };
    }
    if (ASOseflv >= strlen (cVYk20R9q))
        ;
}

