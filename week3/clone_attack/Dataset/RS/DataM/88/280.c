void  main () {
    char (*xr8gZ2zYy7) [(313 - 303)];
    char *hNncZlKYO;
    int oLvKEc1yfkHl;
    int TMQG0kvJI;
    int Y0ZOMARj6Vzg;
    oLvKEc1yfkHl = (960 - 960);
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
    TMQG0kvJI = (508 - 508);
    char BQt3U1 [10] [10];
    hNncZlKYO = (char *) malloc ((213 - 183) * sizeof (char));
    for (Y0ZOMARj6Vzg = 0; Y0ZOMARj6Vzg < 30; Y0ZOMARj6Vzg++)
        scanf ("%c", hNncZlKYO + Y0ZOMARj6Vzg);
    xr8gZ2zYy7 = (char (*) [10]) malloc (10 * 10 * sizeof (char));
    for (Y0ZOMARj6Vzg = 0; !('\0' == *(hNncZlKYO + Y0ZOMARj6Vzg)); Y0ZOMARj6Vzg++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' <= *(hNncZlKYO + Y0ZOMARj6Vzg) && '9' >= *(hNncZlKYO + Y0ZOMARj6Vzg)) {
            *(*(xr8gZ2zYy7 + oLvKEc1yfkHl) + TMQG0kvJI) = *(hNncZlKYO + Y0ZOMARj6Vzg);
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
            TMQG0kvJI++;
        }
        else if (*(hNncZlKYO + Y0ZOMARj6Vzg +1) >= '0' && *(hNncZlKYO + Y0ZOMARj6Vzg +1) <= '9') {
            *(*(xr8gZ2zYy7 + oLvKEc1yfkHl) + TMQG0kvJI) = '\0';
            oLvKEc1yfkHl++;
            TMQG0kvJI = 0;
        };
    }
    for (Y0ZOMARj6Vzg = 0; Y0ZOMARj6Vzg <= oLvKEc1yfkHl; Y0ZOMARj6Vzg++)
        printf ("%s\n", *(xr8gZ2zYy7 + Y0ZOMARj6Vzg));
}

