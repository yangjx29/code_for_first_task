void  main () {
    int YAKL8whpHOi;
    int *MqoM5xU;
    int yikQEK;
    char Ae0G7HTsz [101] = {'\0'};
    gets (Ae0G7HTsz);
    yikQEK = strlen (Ae0G7HTsz);
    MqoM5xU = &Ae0G7HTsz[0];
    {
        YAKL8whpHOi = 0;
        while (YAKL8whpHOi < yikQEK - (191 - 190)) {
            printf ("%c", *(Ae0G7HTsz +YAKL8whpHOi) + *(Ae0G7HTsz +YAKL8whpHOi+1));
            YAKL8whpHOi++;
        };
    }
    printf ("%c", *Ae0G7HTsz+*(Ae0G7HTsz +yikQEK - 1));
}

