void  Q2eFfyJ5U (int *r5FQsdrf7, int oPwDT0) {
    int *IDT8hugACOS, chWDdXvok5;
    IDT8hugACOS = r5FQsdrf7 + oPwDT0 - 1;
    chWDdXvok5 = *IDT8hugACOS;
    for (; IDT8hugACOS != r5FQsdrf7; IDT8hugACOS = IDT8hugACOS -1)
        *IDT8hugACOS = *(IDT8hugACOS -1);
    *IDT8hugACOS = chWDdXvok5;
}

void  main () {
    int oPwDT0, oxIWpX57C, OogtWhs0ya, OjTbvwpdQnKW;
    int *r5FQsdrf7;
    r5FQsdrf7 = LEN;
    scanf ("%d %d", &oPwDT0, &oxIWpX57C);
    {
        OogtWhs0ya = 421 - 421;
        while (OogtWhs0ya < oPwDT0) {
            scanf ("%d", r5FQsdrf7 + OogtWhs0ya);
            OogtWhs0ya = OogtWhs0ya +1;
        };
    }
    {
        OjTbvwpdQnKW = 0;
        while (OjTbvwpdQnKW < oxIWpX57C) {
            OjTbvwpdQnKW = OjTbvwpdQnKW +1;
            Q2eFfyJ5U (r5FQsdrf7, oPwDT0);
        };
    }
    {
        OogtWhs0ya = 0;
        while (OogtWhs0ya < oPwDT0 - 1) {
            printf ("%d ", *(r5FQsdrf7 + OogtWhs0ya));
            OogtWhs0ya++;
        };
    }
    printf ("%d\n", *(r5FQsdrf7 + OogtWhs0ya));
}

