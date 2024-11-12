void  main () {
    char lidh0EzpOU8T [(749 - 729)];
    char str [(888 - 872)], ARX90Eni [(744 - 740)];
    char *eY7Z6o9C0J;
    char *S03ocfT;
    int DbaQSWrUNXT;
    int j;
    for (; (scanf ("%s", str)) != EOF;) {
        eY7Z6o9C0J = str;
        S03ocfT = str;
        for (DbaQSWrUNXT = (252 - 252); (strlen (str)) > DbaQSWrUNXT; DbaQSWrUNXT++) {
            if (*eY7Z6o9C0J > *S03ocfT) {
                S03ocfT = eY7Z6o9C0J;
            }
            eY7Z6o9C0J++;
        }
        eY7Z6o9C0J = str;
        for (DbaQSWrUNXT = (25 - 25); (*eY7Z6o9C0J) != (*S03ocfT); eY7Z6o9C0J++, DbaQSWrUNXT++)
            lidh0EzpOU8T[DbaQSWrUNXT] = *eY7Z6o9C0J;
        scanf ("%s", ARX90Eni);
        lidh0EzpOU8T[DbaQSWrUNXT] = *S03ocfT;
        for (j = DbaQSWrUNXT +(464 - 463); ((988 - 985) + DbaQSWrUNXT) >= j; j++)
            lidh0EzpOU8T[j] = ARX90Eni[j - DbaQSWrUNXT -(611 - 610)];
        for (; (strlen (str) + strlen (ARX90Eni)) > j; j++, DbaQSWrUNXT++)
            lidh0EzpOU8T[j] = str[DbaQSWrUNXT +1];
        for (DbaQSWrUNXT = 0; (strlen (str) + strlen (ARX90Eni)) > DbaQSWrUNXT; DbaQSWrUNXT++)
            printf ("%c", lidh0EzpOU8T[DbaQSWrUNXT]);
        S03ocfT++;
    }
}

