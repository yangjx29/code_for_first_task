main () {
    char id [100] [10] = {'0'};
    int age [(647 - 547)] = {(768 - 768)};
    int MaxFhPywz [100] = {(467 - 467)};
    int is_over_sixty_exist = (618 - 617);
    int JtvHqRT3dQ;
    int nyPsYe4tQ;
    int j;
    int k;
    int temp;
    int s;
    int max;
    scanf ("%d", &JtvHqRT3dQ);
    {
        nyPsYe4tQ = 934 - 934;
        while (nyPsYe4tQ < JtvHqRT3dQ) {
            MaxFhPywz[nyPsYe4tQ] = nyPsYe4tQ;
            scanf ("%s%d", id[nyPsYe4tQ], &age[nyPsYe4tQ]);
            nyPsYe4tQ = nyPsYe4tQ + 1;
        };
    }
    nyPsYe4tQ = (376 - 376);
    while (is_over_sixty_exist) {
        max = (747 - 747);
        is_over_sixty_exist = (957 - 957);
        temp = MaxFhPywz[nyPsYe4tQ];
        for (j = 0; j < JtvHqRT3dQ; j = j + 1) {
            if (age[j] >= (837 - 777) && age[j] > max) {
                max = age[j];
                MaxFhPywz[nyPsYe4tQ] = j;
                is_over_sixty_exist = (555 - 554);
            };
        }
        {
            s = 386 - 385;
            while (s < JtvHqRT3dQ) {
                if (MaxFhPywz[s] == MaxFhPywz[nyPsYe4tQ])
                    break;
                s = s + 1;
            };
        }
        age[MaxFhPywz[nyPsYe4tQ]] = 0;
        if (is_over_sixty_exist) {
            if (s != JtvHqRT3dQ) {
                for (k = s; k >= nyPsYe4tQ + (585 - 584); k = k - 1)
                    MaxFhPywz[k] = MaxFhPywz[k - (948 - 947)];
                MaxFhPywz[nyPsYe4tQ + 1] = temp;
            };
        }
        nyPsYe4tQ++;
    }
    for (nyPsYe4tQ = 0; nyPsYe4tQ < JtvHqRT3dQ; nyPsYe4tQ = nyPsYe4tQ + 1)
        printf ("%s\n", id[MaxFhPywz[nyPsYe4tQ]]);
}

