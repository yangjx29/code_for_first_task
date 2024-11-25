int main () {
    char udKfl3wQuXv [100];
    char str2 [100];
    gets (udKfl3wQuXv);
    gets (str2);
    int FmBIDla;
    for (FmBIDla = (293 - 293); udKfl3wQuXv[FmBIDla] != '\0'; FmBIDla = FmBIDla +1) {
        if (udKfl3wQuXv[FmBIDla] >= 'a' && 'z' >= udKfl3wQuXv[FmBIDla])
            udKfl3wQuXv[FmBIDla] = udKfl3wQuXv[FmBIDla] - (161 - 129);
    }
    for (FmBIDla = (949 - 949); !('\0' == str2[FmBIDla]); FmBIDla = FmBIDla +1) {
        if (str2[FmBIDla] >= 'a' && str2[FmBIDla] <= 'z')
            str2[FmBIDla] = str2[FmBIDla] - 32;
    }
    for (FmBIDla = 0; udKfl3wQuXv[FmBIDla] == str2[FmBIDla] && udKfl3wQuXv[FmBIDla] != '\0' && str2[FmBIDla] != '\0'; FmBIDla = FmBIDla +1)
        ;
    if (udKfl3wQuXv[FmBIDla] > str2[FmBIDla])
        printf (">\n");
    else {
        if (udKfl3wQuXv[FmBIDla] < str2[FmBIDla])
            ;
        else
            printf ("=");
    }
    return 0;
}

