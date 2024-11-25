void  main () {
    int QKU5Q0SnIeoL, fM3IfOa;
    char KTHRANWrD6 [(668 - 628)], qTzZRgr8h0f5 [(761 - 721)], *VikZI7d, *kjPG7U64F, XBw9pEfo7I;
    scanf ("%s%s", KTHRANWrD6, qTzZRgr8h0f5);
    kjPG7U64F = &qTzZRgr8h0f5[(526 - 526)];
    VikZI7d = &KTHRANWrD6[(410 - 410)];
    for (QKU5Q0SnIeoL = (873 - 873); strlen (KTHRANWrD6) > QKU5Q0SnIeoL; QKU5Q0SnIeoL++) {
        fM3IfOa = QKU5Q0SnIeoL;
        while (strlen (KTHRANWrD6) > fM3IfOa) {
            if (*(VikZI7d +QKU5Q0SnIeoL) < *(VikZI7d +fM3IfOa)) {
                XBw9pEfo7I = *(VikZI7d +QKU5Q0SnIeoL);
                *(VikZI7d +QKU5Q0SnIeoL) = *(VikZI7d +fM3IfOa);
                *(VikZI7d +fM3IfOa) = XBw9pEfo7I;
            }
            fM3IfOa++;
        }
    }
    for (QKU5Q0SnIeoL = 0; QKU5Q0SnIeoL < strlen (qTzZRgr8h0f5); QKU5Q0SnIeoL++)
        for (fM3IfOa = QKU5Q0SnIeoL; strlen (qTzZRgr8h0f5) > fM3IfOa; fM3IfOa++)
            if (*(kjPG7U64F + fM3IfOa) > *(kjPG7U64F + QKU5Q0SnIeoL)) {
                XBw9pEfo7I = *(kjPG7U64F + QKU5Q0SnIeoL);
                *(kjPG7U64F + QKU5Q0SnIeoL) = *(kjPG7U64F + fM3IfOa);
                *(kjPG7U64F + fM3IfOa) = XBw9pEfo7I;
            }
    if (strcmp (KTHRANWrD6, qTzZRgr8h0f5) == 0)
        printf ("YES");
    else
        ;
}

