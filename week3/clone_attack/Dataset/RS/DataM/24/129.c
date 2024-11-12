void  main () {
    char hOWCoSYJ [200] [50];
    int fTCalfNZAL, i, len [(504 - 304)], oBnuQUxz, maxi, min, lZHQnpr;
    scanf ("%d", &fTCalfNZAL);
    for (i = 0; fTCalfNZAL > i; i++) {
        scanf ("%s", *(hOWCoSYJ + i));
        *(len + i) = strlen (*(hOWCoSYJ + i));
        if (!i) {
            oBnuQUxz = min = *(len + i);
            maxi = lZHQnpr = i;
        }
        else {
            if (*(len + i) > oBnuQUxz) {
                oBnuQUxz = *(len + i);
                maxi = i;
            }
            if (*(len + i) < min) {
                min = *(len + i);
                lZHQnpr = i;
            };
        };
    }
    puts (*(hOWCoSYJ + maxi));
    puts (*(hOWCoSYJ + lZHQnpr));
}

