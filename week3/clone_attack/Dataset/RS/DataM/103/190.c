main () {
    int ns60YecOPfU;
    int temp = (509 - 508);
    char rkxAzVJ6 [1000];
    gets (rkxAzVJ6);
    {
        ns60YecOPfU = 671 - 671;
        while (strlen (rkxAzVJ6) - 1 >= ns60YecOPfU) {
            if (((rkxAzVJ6[ns60YecOPfU] >= 'a') && (rkxAzVJ6[ns60YecOPfU] <= 'z'))) {
                rkxAzVJ6[ns60YecOPfU] += 'A' - 'a';
            }
            ns60YecOPfU++;
        };
    }
    if (strlen (rkxAzVJ6) == 1)
        printf ("(%c,%d)", rkxAzVJ6[(468 - 468)], 1);
    else {
        for (ns60YecOPfU = 1; ns60YecOPfU <= strlen (rkxAzVJ6) - 1; ns60YecOPfU++) {
            if (rkxAzVJ6[ns60YecOPfU] == rkxAzVJ6[ns60YecOPfU - 1])
                temp++;
            else {
                printf ("(%c,%d)", rkxAzVJ6[ns60YecOPfU - 1], temp);
                temp = 1;
            }
            if (rkxAzVJ6[ns60YecOPfU + 1] == 0)
                printf ("(%c,%d)", rkxAzVJ6[ns60YecOPfU], temp);
        };
    }
    return 0;
}

