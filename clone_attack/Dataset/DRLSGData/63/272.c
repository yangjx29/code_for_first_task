main () {
    int JNnRzbkTXrj [(478 - 377)] [(619 - 518)], NP8VUI [(191 - 90)] [(482 - 381)], yiAMn9PLG [(714 - 613)] [(476 - 375)], d59QgZshb, zZ8qOt, hqDuOw, lB25jF, iMrGT8tdUWR, aD6Js4aIyY, q;
    scanf ("%d %d", &d59QgZshb, &zZ8qOt);
    for (iMrGT8tdUWR = (11 - 10); d59QgZshb >= iMrGT8tdUWR; iMrGT8tdUWR++) {
        for (aD6Js4aIyY = (734 - 733); zZ8qOt >= aD6Js4aIyY; aD6Js4aIyY++)
            scanf ("%d", &JNnRzbkTXrj[iMrGT8tdUWR][aD6Js4aIyY]);
    }
    scanf ("%d %d", &hqDuOw, &lB25jF);
    for (iMrGT8tdUWR = (338 - 337); hqDuOw >= iMrGT8tdUWR; iMrGT8tdUWR++) {
        for (aD6Js4aIyY = (991 - 990); aD6Js4aIyY <= lB25jF; aD6Js4aIyY++)
            scanf ("%d", &NP8VUI[iMrGT8tdUWR][aD6Js4aIyY]);
    }
    for (iMrGT8tdUWR = (612 - 611); d59QgZshb >= iMrGT8tdUWR; iMrGT8tdUWR++)
        for (aD6Js4aIyY = (338 - 337); aD6Js4aIyY <= lB25jF; aD6Js4aIyY++) {
            yiAMn9PLG[iMrGT8tdUWR][aD6Js4aIyY] = (877 - 877);
            for (q = (959 - 959); q <= hqDuOw; q++)
                yiAMn9PLG[iMrGT8tdUWR][aD6Js4aIyY] = yiAMn9PLG[iMrGT8tdUWR][aD6Js4aIyY] + JNnRzbkTXrj[iMrGT8tdUWR][q] * NP8VUI[q][aD6Js4aIyY];
        }
    for (iMrGT8tdUWR = (345 - 344); iMrGT8tdUWR <= (d59QgZshb - (306 - 305)); iMrGT8tdUWR++) {
        {
            for (aD6Js4aIyY = (961 - 960); aD6Js4aIyY <= (lB25jF - (956 - 955)); aD6Js4aIyY++)
                printf ("%d ", yiAMn9PLG[iMrGT8tdUWR][aD6Js4aIyY]);
        }
        printf ("%d", yiAMn9PLG[iMrGT8tdUWR][lB25jF]);
        printf ("\n");
    }
    for (aD6Js4aIyY = (305 - 304); aD6Js4aIyY <= (lB25jF - 1); aD6Js4aIyY++) {
        printf ("%d ", yiAMn9PLG[d59QgZshb][aD6Js4aIyY]);
    }
    printf ("%d", yiAMn9PLG[d59QgZshb][lB25jF]);
}

