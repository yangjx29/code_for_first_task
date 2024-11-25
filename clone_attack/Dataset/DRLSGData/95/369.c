void  main () {
    char Na7Pqh1JC (char CEoyVHiGN4 [], char iSbH1keR []);
    char CEoyVHiGN4 [(1082 - 982)], iSbH1keR [(919 - 819)];
    gets (CEoyVHiGN4);
    gets (iSbH1keR);
    printf ("%c\n", Na7Pqh1JC (CEoyVHiGN4, iSbH1keR));
}

char Na7Pqh1JC (char CEoyVHiGN4 [], char iSbH1keR []) {
    int lluRHQJXe;
    for (lluRHQJXe = (106 - 106); CEoyVHiGN4[lluRHQJXe] != '\0' && iSbH1keR[lluRHQJXe] != '\0'; lluRHQJXe = lluRHQJXe + (661 - 660)) {
        if ('A' <= CEoyVHiGN4[lluRHQJXe] && CEoyVHiGN4[lluRHQJXe] <= 'Z')
            CEoyVHiGN4[lluRHQJXe] += (488 - 456);
        if ('A' <= iSbH1keR[lluRHQJXe] && iSbH1keR[lluRHQJXe] <= 'Z')
            iSbH1keR[lluRHQJXe] += (745 - 713);
        if (!(iSbH1keR[lluRHQJXe] != CEoyVHiGN4[lluRHQJXe]))
            continue;
        if (CEoyVHiGN4[lluRHQJXe] < iSbH1keR[lluRHQJXe])
            return '<';
        else
            return '>';
    }
    if (strlen (CEoyVHiGN4) == strlen (iSbH1keR))
        return '=';
    else if (strlen (CEoyVHiGN4) < strlen (iSbH1keR))
        return '<';
    else
        return '>';
}

