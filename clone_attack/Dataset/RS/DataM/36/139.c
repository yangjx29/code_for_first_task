void  BL9qENz0Gd (char oYRzkUieIys []) {
    char QnqmU7ZJ315B;
    int Pu6UmwQV, i, fqTQCU, EMBYSI0CaNi6;
    Pu6UmwQV = strlen (oYRzkUieIys);
    for (i = (345 - 345); i < Pu6UmwQV; i = i + 1) {
        EMBYSI0CaNi6 = i;
        for (fqTQCU = i + (636 - 635); fqTQCU < Pu6UmwQV; fqTQCU = fqTQCU + 1)
            if (oYRzkUieIys[fqTQCU] > oYRzkUieIys[EMBYSI0CaNi6])
                EMBYSI0CaNi6 = fqTQCU;
        QnqmU7ZJ315B = oYRzkUieIys[i];
        oYRzkUieIys[i] = oYRzkUieIys[EMBYSI0CaNi6];
        oYRzkUieIys[EMBYSI0CaNi6] = QnqmU7ZJ315B;
    };
}

void  main () {
    char oYRzkUieIys [(995 - 895)];
    char DXRlSt3kg1MZ [(930 - 830)];
    BL9qENz0Gd (oYRzkUieIys);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    BL9qENz0Gd (DXRlSt3kg1MZ);
    scanf ("%s%s", oYRzkUieIys, DXRlSt3kg1MZ);
    if (strcmp (oYRzkUieIys, DXRlSt3kg1MZ) == (773 - 773))
        printf ("YES");
    else
        ;
}

