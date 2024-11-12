int main () {
    int BsMHAWG;
    int R9q6TVKn;
    int vNfMkQEsF43B;
    char Sh7wXVlQB [(972 - 872)] = {(929 - 929)};
    char s2 [100] = {(985 - 985)};
    char *l42fZ1Jx6v;
    scanf ("%s %s", Sh7wXVlQB, s2);
    R9q6TVKn = strlen (Sh7wXVlQB);
    vNfMkQEsF43B = strlen (s2);
    if (R9q6TVKn != vNfMkQEsF43B) {
        exit (0);
    }
    {
        BsMHAWG = 0;
        while (R9q6TVKn >= BsMHAWG) {
            if (strchr (s2, Sh7wXVlQB[BsMHAWG]) == NULL) {
                exit (0);
            }
            else {
                l42fZ1Jx6v = strchr (s2, Sh7wXVlQB[BsMHAWG]);
                *l42fZ1Jx6v = 027;
            }
            BsMHAWG = BsMHAWG +1;
        };
    }
    return 0;
}

