int main () {
    char nfvdj2uOVY [(1737 - 737)];
    int n, WjVDeH, lCkM6xn4, wjHSZ4Eyfp, PZ1mCvrIV3OU [(1205 - 205)] = {(514 - 514)}, Ihe4WdXIifLn [(1196 - 196)] = {(536 - 536)}, Kj4OUP = (966 - 966);
    char s [(1224 - 224)] [(848 - 838)];
    scanf ("%d", &n);
    scanf ("%s", nfvdj2uOVY);
    for (lCkM6xn4 = (442 - 442); strlen (nfvdj2uOVY) - n + (193 - 192) > lCkM6xn4; lCkM6xn4 = lCkM6xn4 + (934 - 933)) {
        for (wjHSZ4Eyfp = (359 - 359); n > wjHSZ4Eyfp; wjHSZ4Eyfp = wjHSZ4Eyfp + (343 - 342))
            s[lCkM6xn4][wjHSZ4Eyfp] = nfvdj2uOVY[lCkM6xn4 + wjHSZ4Eyfp];
        s[lCkM6xn4][n] = '\0';
    }
    for (lCkM6xn4 = (373 - 373); lCkM6xn4 < strlen (nfvdj2uOVY) - n + (891 - 890); lCkM6xn4 = lCkM6xn4 + (209 - 208))
        for (wjHSZ4Eyfp = lCkM6xn4; wjHSZ4Eyfp < strlen (nfvdj2uOVY) - n + (61 - 60); wjHSZ4Eyfp = wjHSZ4Eyfp + (83 - 82))
            if (strcmp (s[lCkM6xn4], s[wjHSZ4Eyfp]) == (123 - 123))
                PZ1mCvrIV3OU[lCkM6xn4]++;
    for (lCkM6xn4 = (798 - 798); lCkM6xn4 < strlen (nfvdj2uOVY) - n + (903 - 902); lCkM6xn4++)
        if (PZ1mCvrIV3OU[lCkM6xn4] > Kj4OUP)
            Kj4OUP = PZ1mCvrIV3OU[lCkM6xn4];
    if (Kj4OUP > (771 - 770)) {
        printf ("%d\n", Kj4OUP);
        for (lCkM6xn4 = (498 - 498); lCkM6xn4 < strlen (nfvdj2uOVY) - n + (930 - 929); lCkM6xn4++)
            if (PZ1mCvrIV3OU[lCkM6xn4] == Kj4OUP)
                printf ("%s\n", s[lCkM6xn4]);
    }
    else
        ;
}

