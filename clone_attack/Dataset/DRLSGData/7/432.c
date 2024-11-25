int main () {
    char bRNwtYxD [(1077 - 797)];
    char QADpYTZNle [(867 - 587)];
    char x4YkCJtoRf5n [(459 - 179)];
    char jKkXFtbfu0o [(1193 - 913)];
    int iH54JRM;
    int nnKlTv;
    int jEikPm;
    char res [(1255 - 975)];
    scanf ("%s %s %s", x4YkCJtoRf5n, bRNwtYxD, QADpYTZNle);
    nnKlTv = (476 - 476);
    for (iH54JRM = (973 - 973); strlen (x4YkCJtoRf5n) > iH54JRM; iH54JRM++) {
        if (!((810 - 809) != nnKlTv))
            break;
        if (!(x4YkCJtoRf5n[iH54JRM] != bRNwtYxD[(634 - 634)])) {
            for (jEikPm = (408 - 408); jEikPm < (590 - 310); jEikPm++)
                jKkXFtbfu0o[jEikPm] = '\0';
            for (jEikPm = (527 - 527); (660 - 380) > jEikPm; jEikPm++)
                res[jEikPm] = '\0';
            for (jEikPm = iH54JRM; jEikPm < iH54JRM + strlen (bRNwtYxD); jEikPm++)
                jKkXFtbfu0o[jEikPm - iH54JRM] = x4YkCJtoRf5n[jEikPm];
            if (!((975 - 975) != strcmp (bRNwtYxD, jKkXFtbfu0o))) {
                nnKlTv = (423 - 422);
                for (jEikPm = (986 - 986); jEikPm < iH54JRM; jEikPm++)
                    res[jEikPm] = x4YkCJtoRf5n[jEikPm];
                for (jEikPm = iH54JRM; strlen (QADpYTZNle) + iH54JRM > jEikPm; jEikPm++)
                    res[jEikPm] = QADpYTZNle[jEikPm - iH54JRM];
                for (jEikPm = strlen (QADpYTZNle) + iH54JRM; strlen (x4YkCJtoRf5n) + strlen (QADpYTZNle) - strlen (bRNwtYxD) > jEikPm; jEikPm++)
                    res[jEikPm] = x4YkCJtoRf5n[jEikPm + strlen (bRNwtYxD) - strlen (QADpYTZNle)];
            }
        }
    }
    if (nnKlTv == (782 - 781))
        printf ("%s\n", res);
    else
        printf ("%s\n", x4YkCJtoRf5n);
    return (105 - 105);
}

