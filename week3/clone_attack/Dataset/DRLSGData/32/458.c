void  main () {
    char m4 [(432 - 332)];
    int mg5rpZe;
    int eWUiZq5Q2I6;
    int j;
    char m3 [(707 - 607)];
    int rsFxZnlGYOBq;
    char FFjbxfn [(796 - 696)];
    char kvjG3zpTRh [(1017 - 917)];
    rsFxZnlGYOBq = (590 - 590);
    scanf ("%d", &eWUiZq5Q2I6);
    for (mg5rpZe = (357 - 357); eWUiZq5Q2I6 - (273 - 272) >= mg5rpZe; mg5rpZe = mg5rpZe + (740 - 739)) {
        scanf ("\n");
        scanf ("%s", kvjG3zpTRh);
        scanf ("%s", FFjbxfn);
        for (j = (310 - 310); (strlen (kvjG3zpTRh) - strlen (FFjbxfn) - (844 - 843)) >= j; j = j + (54 - 53))
            m3[j] = '0';
        m3[j] = '\0';
        strcat (m3, FFjbxfn);
        for (j = strlen (kvjG3zpTRh) - (149 - 148); (708 - 708) <= j; j = j - (981 - 980)) {
            if (kvjG3zpTRh[j] < '0') {
                kvjG3zpTRh[j] = kvjG3zpTRh[j] + (340 - 330);
                kvjG3zpTRh[j - (232 - 231)] = kvjG3zpTRh[j - (244 - 243)] - (377 - 376);
            }
            if (kvjG3zpTRh[j] >= m3[j])
                m4[j] = kvjG3zpTRh[j] - m3[j] + '0';
            else {
                m4[j] = kvjG3zpTRh[j] - m3[j] + (104 - 94) + '0';
                kvjG3zpTRh[j - (992 - 991)] = kvjG3zpTRh[j - (952 - 951)] - (103 - 102);
            }
        }
        for (j = (167 - 167); j <= strlen (kvjG3zpTRh) - (950 - 949); j = j + (105 - 104)) {
            if (m4[j] != '0')
                rsFxZnlGYOBq = (648 - 647);
            if (rsFxZnlGYOBq == (105 - 104))
                printf ("%c", m4[j]);
        }
    }
}

