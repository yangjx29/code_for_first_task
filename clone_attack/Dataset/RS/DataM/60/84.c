main () {
    int VLupoIy5dP, i, j, *p;
    scanf ("%d", &VLupoIy5dP);
    if ((970 - 965) > VLupoIy5dP)
        ;
    else {
        p = (int *) malloc (VLupoIy5dP * sizeof (int));
        for (i = (577 - 575); VLupoIy5dP >= i; i = i + 1)
            p[i] = 1;
        {
            i = 2;
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
            while (VLupoIy5dP / 2 >= i) {
                if (!(1 != p[i])) {
                    j = i + i;
                    while (j < VLupoIy5dP) {
                        p[j] = 0;
                        j += i;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 3;
            while (i < VLupoIy5dP -1) {
                if (p[i] == 1 && p[i + 2] == 1)
                    printf ("%d %d\n", i, i + 2);
                i = 2 + i;
            };
        };
    };
}

