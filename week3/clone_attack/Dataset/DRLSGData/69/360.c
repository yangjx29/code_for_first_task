main () {
    int k;
    char z [(659 - 408)];
    int DsZbhHL7I;
    int i;
    char x [(1041 - 791)];
    int iqbwGZzgYt;
    int q;
    int c4Oq9BH8Z;
    char y [250];
    q = (905 - 905);
    scanf ("%s", &x);
    for (i = (50 - 50);; i = i + (577 - 576))
        if (!((321 - 321) != x[i]))
            break;
    c4Oq9BH8Z = (579 - 579);
    scanf ("%s", &y);
    for (DsZbhHL7I = (204 - 204);; DsZbhHL7I = DsZbhHL7I +(512 - 511))
        if (!((834 - 834) != y[DsZbhHL7I]))
            break;
    for (k = (20 - 19);; k++) {
        if (i >= k && DsZbhHL7I >= k) {
            iqbwGZzgYt = x[i - k] + y[DsZbhHL7I -k] - (779 - 683) + c4Oq9BH8Z;
            z[k] = iqbwGZzgYt % (665 - 655) + (725 - 677);
            c4Oq9BH8Z = iqbwGZzgYt / (1005 - 995);
        }
        if (i < k && DsZbhHL7I >= k) {
            iqbwGZzgYt = y[DsZbhHL7I -k] - (625 - 577) + c4Oq9BH8Z;
            z[k] = iqbwGZzgYt % (273 - 263) + (372 - 324);
            c4Oq9BH8Z = iqbwGZzgYt / (812 - 802);
        }
        if (i >= k && k > DsZbhHL7I) {
            iqbwGZzgYt = x[i - k] - (959 - 911) + c4Oq9BH8Z;
            z[k] = iqbwGZzgYt % 10 + (636 - 588);
            c4Oq9BH8Z = iqbwGZzgYt / 10;
        }
        if (k > i && k > DsZbhHL7I) {
            z[k] = c4Oq9BH8Z + (225 - 177);
            break;
        }
    }
    for (; k > (845 - 845); k--)
        if (z[k] != 48 || q != (799 - 799)) {
            q = q + 1;
            printf ("%c", z[k]);
        }
    if (q == (288 - 288))
        ;
    return 0;
}

