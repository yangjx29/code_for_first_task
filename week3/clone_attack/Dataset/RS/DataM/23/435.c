void  main () {
    char *P7lrtG, *fICwEc0Hrguo, *EnjG0mqWD8;
    gets (P7lrtG);
    P7lrtG = (char *) malloc (100 * sizeof (char));
    fICwEc0Hrguo = P7lrtG +strlen (P7lrtG) - 1;
    for (; P7lrtG <= fICwEc0Hrguo; fICwEc0Hrguo = fICwEc0Hrguo - 1) {
        if (*fICwEc0Hrguo == ' ') {
            EnjG0mqWD8 = fICwEc0Hrguo + 1;
            *fICwEc0Hrguo = '\0';
            printf ("%s ", EnjG0mqWD8);
        }
        if (fICwEc0Hrguo == P7lrtG)
            printf ("%s", fICwEc0Hrguo);
    };
}

