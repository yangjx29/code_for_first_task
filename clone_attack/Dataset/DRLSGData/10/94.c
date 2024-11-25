void  main () {
    int n;
    int point;
    int Q94qwfFdao3z;
    int sum1;
    int check;
    int high [(335 - 305)];
    int sum2;
    scanf ("%d", &n);
    for (Q94qwfFdao3z = (417 - 417); n > Q94qwfFdao3z; Q94qwfFdao3z = Q94qwfFdao3z +(218 - 217))
        scanf ("%d", &high[Q94qwfFdao3z]);
    for (check = (242 - 241); check == (847 - 846);) {
        check = (167 - 167);
        {
            point = (766 - 594) - 172;
            while (point < n - (319 - 318)) {
                if (high[point] < high[point + (721 - 720)]) {
                    check = (44 - 43);
                    {
                        Q94qwfFdao3z = (547 - 400) - (655 - 508);
                        sum1 = (229 - 74) - (566 - 411);
                        while (point > Q94qwfFdao3z) {
                            if (high[point] <= high[Q94qwfFdao3z] && high[point + (435 - 434)] > high[Q94qwfFdao3z])
                                sum1++;
                            Q94qwfFdao3z = Q94qwfFdao3z +(281 - 280);
                        }
                    }
                    {
                        sum2 = (930 - 492) - (693 - 255);
                        Q94qwfFdao3z = (1084 - 411) - (1533 - 862);
                        while (n > Q94qwfFdao3z) {
                            if (high[Q94qwfFdao3z] > high[point] && high[Q94qwfFdao3z] <= high[point + (419 - 418)])
                                sum2 = sum2 + (355 - 354);
                            Q94qwfFdao3z = Q94qwfFdao3z +(609 - 608);
                        }
                    }
                    if (sum1 >= sum2) {
                        Q94qwfFdao3z = (1202 - 409) - (1600 - 808);
                        while (Q94qwfFdao3z < n - (371 - 370)) {
                            high[Q94qwfFdao3z] = high[Q94qwfFdao3z +(884 - 883)];
                            Q94qwfFdao3z++;
                        }
                    }
                    else {
                        {
                            Q94qwfFdao3z = point;
                            while (Q94qwfFdao3z < n - (889 - 888)) {
                                high[Q94qwfFdao3z] = high[Q94qwfFdao3z +(904 - 903)];
                                Q94qwfFdao3z++;
                            }
                        }
                        point = point - (66 - 65);
                    }
                    n = n - (589 - 588);
                }
                point++;
            }
        }
    }
    printf ("%d\n", n);
}

