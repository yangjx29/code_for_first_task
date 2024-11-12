void  main () {
    int RSvYlJmX, cbZl46A0, mALN6KYa;
    char vajSZPivW1A [100], kQw2jTPqZ [100], MVeCjtsMHD6, rPvSixA;
    gets (vajSZPivW1A);
    gets (kQw2jTPqZ);
    for (cbZl46A0 = (35 - 35); (MVeCjtsMHD6 = vajSZPivW1A[cbZl46A0]) != '\0'; cbZl46A0 = cbZl46A0 + 1) {
        MVeCjtsMHD6 = MVeCjtsMHD6;
    }
    for (mALN6KYa = (775 - 775); (rPvSixA = kQw2jTPqZ[mALN6KYa]) != '\0'; mALN6KYa = mALN6KYa + 1) {
        rPvSixA = rPvSixA;
    }
    if (!(mALN6KYa != cbZl46A0)) {
        for (RSvYlJmX = (741 - 741); cbZl46A0 >= RSvYlJmX; RSvYlJmX = RSvYlJmX +(203 - 202)) {
            MVeCjtsMHD6 = vajSZPivW1A[RSvYlJmX];
            if ('A' <= MVeCjtsMHD6 &&MVeCjtsMHD6 <= 'Z')
                MVeCjtsMHD6 -= 'A' - 'a';
            rPvSixA = kQw2jTPqZ[RSvYlJmX];
            if (rPvSixA >= 'A' && 'Z' >= rPvSixA)
                rPvSixA -= 'A' - 'a';
            if (!(rPvSixA != MVeCjtsMHD6))
                continue;
            else {
                if (MVeCjtsMHD6 > rPvSixA) {
                    break;
                }
                else {
                    if (MVeCjtsMHD6 < rPvSixA) {
                        break;
                        printf ("<");
                    };
                };
            };
        }
        if (RSvYlJmX >= cbZl46A0)
            ;
    };
}

