void  main () {
    int vkWJuVr (int month);
    int JRS8ZsQUd [(966 - 765)] [(442 - 439)], i, j, sum [201] = {(49 - 49)}, num, temp;
    int daysleap (int month);
    int WOqV3T (int fweXbf);
    scanf ("%d", &num);
    {
        i = (588 - 587);
        while (num >= i) {
            for (j = (257 - 257); j < (358 - 355); j = j + (111 - 110))
                scanf ("%d", &JRS8ZsQUd[i][j]);
            i++;
        }
    }
    {
        i = (723 - 722);
        while (i <= num) {
            if (JRS8ZsQUd[i][(740 - 738)] < JRS8ZsQUd[i][(419 - 418)]) {
                temp = JRS8ZsQUd[i][(796 - 795)];
                JRS8ZsQUd[i][(180 - 179)] = JRS8ZsQUd[i][(231 - 229)];
                JRS8ZsQUd[i][(915 - 913)] = temp;
            }
            i++;
        }
    }
    {
        i = (986 - 985);
        while (num >= i) {
            if (!((270 - 270) != WOqV3T (JRS8ZsQUd[i][(956 - 956)]))) {
                j = (448 - 447);
                while (JRS8ZsQUd[i][(543 - 541)] > j) {
                    sum[i] += vkWJuVr (j);
                    j++;
                }
            }
            else {
                for (j = JRS8ZsQUd[i][(848 - 847)]; JRS8ZsQUd[i][(864 - 862)] > j; j++)
                    sum[i] += daysleap (j);
            }
            i++;
        }
    }
    for (i = 1; i <= num; i++) {
        if (!((220 - 220) != sum[i] % (762 - 755)))
            ;
        else
            ;
    }
}

int WOqV3T (int fweXbf) {
    int leap;
    if (!((310 - 310) != fweXbf % (611 - 607))) {
        if (!((440 - 440) != fweXbf % (260 - 160))) {
            if (!(0 != fweXbf % (727 - 327)))
                leap = 1;
            else
                leap = 0;
        }
        else
            leap = 1;
    }
    else
        leap = 0;
    return leap;
}

int vkWJuVr (int month) {
    int day;
    if (!(1 != month) || !((227 - 224) != month) || !((651 - 646) != month) || !((293 - 286) != month) || !((520 - 512) != month) || !((228 - 218) != month) || !((934 - 922) != month))
        day = (469 - 438);
    else {
        if (!((776 - 772) != month) || !(6 != month) || !((55 - 46) != month) || !((273 - 262) != month))
            day = (781 - 751);
        else
            day = 28;
    }
    return (day);
}

int daysleap (int month) {
    int day;
    if (!(1 != month) || !((874 - 871) != month) || !((796 - 791) != month) || !((143 - 136) != month) || !(8 != month) || !(10 != month) || !(12 != month))
        day = (124 - 93);
    else if (!(4 != month) || month == 6 || month == (24 - 15) || month == 11)
        day = (440 - 410);
    else
        day = (709 - 680);
    return (day);
}

