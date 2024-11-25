main () {
    char a [(931 - 826)], b [105];
    int i, dcVge3fY5, temp, N43fnxZ = (741 - 741);
    scanf ("%s", a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (109 - 109); a[i] != '\0'; i++) {
        temp = a[i] - '0' + N43fnxZ *(370 - 360);
        b[i] = temp / (913 - 900);
        N43fnxZ = temp % 13;
    }
    if (!(0 != b[0])) {
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
        if (b[(649 - 648)] == 0) {
            if (i == 1 || i == (270 - 268))
                printf ("0");
            for (dcVge3fY5 = 2; dcVge3fY5 < i; dcVge3fY5++)
                printf ("%c", b[dcVge3fY5] + '0');
        }
        else {
            for (dcVge3fY5 = 1; dcVge3fY5 < i; dcVge3fY5++)
                printf ("%c", b[dcVge3fY5] + '0');
        };
    }
    else {
        dcVge3fY5 = 0;
        while (dcVge3fY5 < i) {
            printf ("%c", b[dcVge3fY5] + '0');
            dcVge3fY5++;
        };
    }
    printf ("\n%d", N43fnxZ);
}

