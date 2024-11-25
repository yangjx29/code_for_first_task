struct   bing {
    char id [10];
    int age;
}
person [100], old [100];

main () {
    int qr4MZkX, AXUebuwp, FSKG8VDhtIL = (496 - 496), dUfwgbx4r, b;
    char e [10];
    scanf ("%d", &qr4MZkX);
    for (AXUebuwp = 0; qr4MZkX > AXUebuwp; AXUebuwp++) {
        scanf ("%s%d", person[AXUebuwp].id, &person[AXUebuwp].age);
        if (60 <= person[AXUebuwp].age) {
            strcpy (old[FSKG8VDhtIL].id, person[AXUebuwp].id);
            old[FSKG8VDhtIL].age = person[AXUebuwp].age;
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
            FSKG8VDhtIL = FSKG8VDhtIL +1;
        };
    }
    for (dUfwgbx4r = 1; FSKG8VDhtIL > dUfwgbx4r; dUfwgbx4r++) {
        AXUebuwp = 0;
        while (AXUebuwp < FSKG8VDhtIL -dUfwgbx4r) {
            if (old[AXUebuwp +1].age > old[AXUebuwp].age) {
                strcpy (e, old[AXUebuwp].id);
                strcpy (old[AXUebuwp].id, old[AXUebuwp +1].id);
                strcpy (old[AXUebuwp +1].id, e);
                b = old[AXUebuwp].age;
                old[AXUebuwp].age = old[AXUebuwp +1].age;
                old[AXUebuwp +1].age = b;
            }
            AXUebuwp++;
        };
    }
    for (AXUebuwp = 0; FSKG8VDhtIL > AXUebuwp; AXUebuwp++)
        printf ("%s\n", old[AXUebuwp].id);
    for (AXUebuwp = 0; AXUebuwp < qr4MZkX; AXUebuwp++)
        if (person[AXUebuwp].age < 60)
            printf ("%s\n", person[AXUebuwp].id);
    return 0;
}

