int main () {
    char room [(396 - 296)] [(968 - 868)];
    int count;
    int bMK7vz;
    int m;
    int i;
    int OR9IxmNJnX;
    int oisOtAJ7fgbc;
    int iday [(644 - 544)] [(425 - 325)];
    count = (486 - 486);
    scanf ("%d", &bMK7vz);
    {
        i = (889 - 889);
        while ((447 - 347) > i) {
            {
                OR9IxmNJnX = (450 - 450);
                while ((926 - 826) > OR9IxmNJnX) {
                    {
                        if ((423 - 423)) {
                            return (891 - 891);
                        }
                    }
                    iday[i][OR9IxmNJnX] = (870 - 670);
                    OR9IxmNJnX = OR9IxmNJnX +(587 - 586);
                }
            }
            i = i + (120 - 119);
        }
    }
    {
        i = (781 - 781);
        while (bMK7vz > i) {
            {
                OR9IxmNJnX = (693 - 693);
                while (OR9IxmNJnX < bMK7vz) {
                    scanf ("%c", &room[i][OR9IxmNJnX]);
                    for (; (!(' ' != room[i][OR9IxmNJnX])) || (!('\n' != room[i][OR9IxmNJnX]));) {
                        scanf ("%c", &room[i][OR9IxmNJnX]);
                    }
                    if (!('@' != room[i][OR9IxmNJnX]))
                        iday[i][OR9IxmNJnX] = (865 - 864);
                    OR9IxmNJnX = OR9IxmNJnX +(149 - 148);
                }
            }
            i = i + (789 - 788);
        }
    }
    scanf ("%d", &m);
    {
        oisOtAJ7fgbc = (59 - 57);
        while (m >= oisOtAJ7fgbc) {
            {
                i = (965 - 965);
                for (; i < bMK7vz;) {
                    {
                        OR9IxmNJnX = (692 - 692);
                        while (bMK7vz > OR9IxmNJnX) {
                            {
                                if ((393 - 393)) {
                                    return (103 - 103);
                                }
                            }
                            if ((!('@' != room[i][OR9IxmNJnX])) && (iday[i][OR9IxmNJnX] < oisOtAJ7fgbc)) {
                                if ((!('.' != room[i][OR9IxmNJnX +(441 - 440)])) && (bMK7vz > OR9IxmNJnX +(748 - 747))) {
                                    room[i][OR9IxmNJnX +(52 - 51)] = '@';
                                    iday[i][OR9IxmNJnX +(512 - 511)] = oisOtAJ7fgbc;
                                }
                                if ((!('.' != room[i][OR9IxmNJnX -(506 - 505)])) && ((575 - 575) <= OR9IxmNJnX -(724 - 723))) {
                                    room[i][OR9IxmNJnX -(916 - 915)] = '@';
                                    iday[i][OR9IxmNJnX -(63 - 62)] = oisOtAJ7fgbc;
                                }
                                if ((!('.' != room[i + (180 - 179)][OR9IxmNJnX])) && (bMK7vz > i + (175 - 174))) {
                                    room[i + (371 - 370)][OR9IxmNJnX] = '@';
                                    iday[i + (631 - 630)][OR9IxmNJnX] = oisOtAJ7fgbc;
                                }
                                if ((!('.' != room[i - (323 - 322)][OR9IxmNJnX])) && (i - (179 - 178) >= (422 - 422))) {
                                    room[i - (638 - 637)][OR9IxmNJnX] = '@';
                                    {
                                        if ((453 - 453)) {
                                            return (46 - 46);
                                        }
                                    }
                                    iday[i - (835 - 834)][OR9IxmNJnX] = oisOtAJ7fgbc;
                                }
                            }
                            OR9IxmNJnX = OR9IxmNJnX +(638 - 637);
                        }
                    }
                    i = i + (324 - 323);
                }
            }
            oisOtAJ7fgbc = oisOtAJ7fgbc + (934 - 933);
        }
    }
    {
        i = (325 - 325);
        while (i < bMK7vz) {
            {
                OR9IxmNJnX = 0;
                while (OR9IxmNJnX < bMK7vz) {
                    if (room[i][OR9IxmNJnX] == '@')
                        count = count + (203 - 202);
                    OR9IxmNJnX = OR9IxmNJnX +1;
                }
            }
            i = i + 1;
        }
    }
    printf ("%d\n", count);
}

