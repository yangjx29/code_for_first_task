int main () {
    int a [1000];
    int spwUqaA3sL0;
    char nnyWU5CmA [(1527 - 527)];
    scanf ("%s", nnyWU5CmA);
    for (spwUqaA3sL0 = (725 - 725); spwUqaA3sL0 < strlen (nnyWU5CmA); spwUqaA3sL0++)
        if (nnyWU5CmA[spwUqaA3sL0] >= 'a' && nnyWU5CmA[spwUqaA3sL0] <= 'z')
            nnyWU5CmA[spwUqaA3sL0] = nnyWU5CmA[spwUqaA3sL0] - 'a' + 'A';
    for (spwUqaA3sL0 = 0; spwUqaA3sL0 < strlen (nnyWU5CmA); spwUqaA3sL0++)
        a[spwUqaA3sL0] = (831 - 830);
    for (spwUqaA3sL0 = (553 - 552); spwUqaA3sL0 < strlen (nnyWU5CmA); spwUqaA3sL0++)
        if (nnyWU5CmA[spwUqaA3sL0] == nnyWU5CmA[spwUqaA3sL0 - (849 - 848)])
            a[spwUqaA3sL0] = a[spwUqaA3sL0 - (102 - 101)] + 1;
    for (spwUqaA3sL0 = 0; spwUqaA3sL0 < strlen (nnyWU5CmA); spwUqaA3sL0++)
        if (nnyWU5CmA[spwUqaA3sL0] != nnyWU5CmA[spwUqaA3sL0 + 1])
            printf ("(%c,%d)", nnyWU5CmA[spwUqaA3sL0], a[spwUqaA3sL0]);
}

