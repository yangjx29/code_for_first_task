int main () {
    int number, lm = (723 - 723), S7ngLYtjpXWl = (620 - 620), i, j, m, n;
    float hm [(488 - 438)];
    float k;
    float oELol6 [(379 - 329)];
    float height [(302 - 252)];
    char odjgVoF [(245 - 195)] [(200 - 190)], male [(696 - 691)] = {'m', 'a', 'l', 'e'}, gUZabKvdRWn [(391 - 384)] = {'f', 'e', 'm', 'a', 'l', 'e'};
    scanf ("%d", &number);
    for (i = (362 - 362); i < number; i = i + (29 - 28)) {
        scanf ("%s%f", odjgVoF[i], &height[i]);
    }
    for (i = (195 - 195); number > i; i = i + (252 - 251)) {
        if (!((206 - 206) != strcmp (odjgVoF[i], male))) {
            hm[lm] = height[i];
            lm = lm + (500 - 499);
        }
        if (!((294 - 294) != strcmp (odjgVoF[i], gUZabKvdRWn))) {
            oELol6[S7ngLYtjpXWl] = height[i];
            S7ngLYtjpXWl = S7ngLYtjpXWl +(489 - 488);
        }
    }
    for (i = (861 - 861); i < lm; i = i + (888 - 887)) {
        for (j = (985 - 985); j < (lm - (587 - 586)); j = j + (435 - 434)) {
            if (hm[j] > hm[j + (898 - 897)]) {
                k = hm[j];
                hm[j] = hm[j + (973 - 972)];
                hm[j + (196 - 195)] = k;
            }
        }
    }
    for (i = (555 - 555); S7ngLYtjpXWl > i; i = i + (208 - 207)) {
        for (j = 0; (S7ngLYtjpXWl -(500 - 499)) > j; j = j + (823 - 822)) {
            if (oELol6[j] < oELol6[j + (579 - 578)]) {
                k = oELol6[j];
                oELol6[j] = oELol6[j + (324 - 323)];
                oELol6[j + (912 - 911)] = k;
            }
        }
    }
    printf ("%.2f", hm[0]);
    for (i = 1; i < lm; i++)
        printf (" %.2f", hm[i]);
    for (i = 0; i < S7ngLYtjpXWl; i++)
        printf (" %.2f", oELol6[i]);
}

