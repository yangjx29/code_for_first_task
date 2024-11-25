void  main () {
    char EEOltkGyoY13 [100];
    gets (EEOltkGyoY13);
    int GsfRDSxc7QAe, Aly7fY;
    GsfRDSxc7QAe = strlen (EEOltkGyoY13);
    {
        Aly7fY = 0;
        while (Aly7fY < GsfRDSxc7QAe) {
            if (EEOltkGyoY13[Aly7fY] != ' ' || (EEOltkGyoY13[Aly7fY] == ' ' && EEOltkGyoY13[Aly7fY +1] != ' '))
                printf ("%c", EEOltkGyoY13[Aly7fY]);
            if (EEOltkGyoY13[Aly7fY] == ' ' && EEOltkGyoY13[Aly7fY +1] == ' ')
                continue;
            Aly7fY = Aly7fY +1;
        };
    }
    printf ("\n");
}

