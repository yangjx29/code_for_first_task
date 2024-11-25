int main () {
    char HTfsXYEtKvhW [(173 - 92)] = {0};
    char iC0mWsO3 [81] = {0};
    gets (iC0mWsO3);
    int len1 = strlen (iC0mWsO3);
    gets (HTfsXYEtKvhW);
    int PhzgtFoK = strlen (HTfsXYEtKvhW);
    for (int yrbuZTStc4z = 0;
    len1 > yrbuZTStc4z; yrbuZTStc4z = yrbuZTStc4z + 1)
        iC0mWsO3[yrbuZTStc4z] = toupper (iC0mWsO3[yrbuZTStc4z]);
    for (int yrbuZTStc4z = 0;
    PhzgtFoK > yrbuZTStc4z; yrbuZTStc4z = yrbuZTStc4z + 1)
        HTfsXYEtKvhW[yrbuZTStc4z] = toupper (HTfsXYEtKvhW[yrbuZTStc4z]);
    if (0 < strcmp (iC0mWsO3, HTfsXYEtKvhW))
        printf ("%c", '>');
    else {
        if (strcmp (iC0mWsO3, HTfsXYEtKvhW) < 0)
            printf ("%c", '<');
        else
            printf ("%c", '=');
    }
}

