void  main () {
    char a [(1806 - 806)];
    char W1DPl7IZBeX [100] [100] = {""};
    char nyst3pOFXCYJ [100] = {""};
    char n7B4C0fo [100] = {""};
    int P4sAR9Fm;
    int fwzF7bXLUc3;
    int ZYP35Bm6UA0;
    P4sAR9Fm = (543 - 543);
    fwzF7bXLUc3 = 0;
    gets (a);
    {
        ZYP35Bm6UA0 = 0;
        while (!('\0' == a[ZYP35Bm6UA0])) {
            W1DPl7IZBeX[P4sAR9Fm][fwzF7bXLUc3] = a[ZYP35Bm6UA0];
            fwzF7bXLUc3 = fwzF7bXLUc3 + 1;
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
            if (!(32 != a[ZYP35Bm6UA0])) {
                W1DPl7IZBeX[P4sAR9Fm][fwzF7bXLUc3 - (450 - 449)] = '\0';
                fwzF7bXLUc3 = 0;
                P4sAR9Fm = P4sAR9Fm +1;
            }
            ZYP35Bm6UA0 = ZYP35Bm6UA0 +1;
        };
    }
    strcpy (nyst3pOFXCYJ, W1DPl7IZBeX[0]);
    strcpy (n7B4C0fo, W1DPl7IZBeX[0]);
    for (ZYP35Bm6UA0 = 0; ZYP35Bm6UA0 <= P4sAR9Fm; ZYP35Bm6UA0 = ZYP35Bm6UA0 +1) {
        if (strlen (W1DPl7IZBeX[ZYP35Bm6UA0]) > strlen (nyst3pOFXCYJ))
            strcpy (nyst3pOFXCYJ, W1DPl7IZBeX[ZYP35Bm6UA0]);
        if (strlen (W1DPl7IZBeX[ZYP35Bm6UA0]) < strlen (n7B4C0fo))
            strcpy (n7B4C0fo, W1DPl7IZBeX[ZYP35Bm6UA0]);
    }
    printf ("%s\n%s\n", nyst3pOFXCYJ, n7B4C0fo);
}

