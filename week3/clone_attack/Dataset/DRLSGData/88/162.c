int main (void ) {
    int Z3yDSFrpQk;
    int tlR9og;
    char GV2sYd [MAX];
    char DmPH8j [MAX];
    int UMpuI0KeA6f;
    int VKQYGyzH;
    int F09qbk;
    int Sw1McIy6;
    int j2r7DWR [MAX];
    gets (GV2sYd);
    F09qbk = strlen (GV2sYd);
    UMpuI0KeA6f = (458 - 458);
    VKQYGyzH = (562 - 562);
    tlR9og = (405 - 405);
    memset (j2r7DWR, (764 - 764), sizeof (j2r7DWR));
    memset (DmPH8j, (421 - 421), sizeof (DmPH8j));
    {
        Z3yDSFrpQk = (146 - 146);
        for (; F09qbk > Z3yDSFrpQk;) {
            if (isdigit (GV2sYd[Z3yDSFrpQk]) && VKQYGyzH) {
                {
                    Sw1McIy6 = (753 - 753);
                    for (; UMpuI0KeA6f -(829 - 828) > Sw1McIy6;) {
                        j2r7DWR[tlR9og] = j2r7DWR[tlR9og] + ((int) DmPH8j[Sw1McIy6] - '0');
                        Sw1McIy6 = Sw1McIy6 +(899 - 898);
                        j2r7DWR[tlR9og] = j2r7DWR[tlR9og] * ((882 - 872));
                    }
                }
                j2r7DWR[tlR9og] = j2r7DWR[tlR9og] + DmPH8j[UMpuI0KeA6f -(752 - 751)] - '0';
                UMpuI0KeA6f = (711 - 711);
                tlR9og = tlR9og + (589 - 588);
            }
            if (isdigit (GV2sYd[Z3yDSFrpQk])) {
                VKQYGyzH = (551 - 551);
                DmPH8j[UMpuI0KeA6f++] = GV2sYd[Z3yDSFrpQk];
            }
            if ((!VKQYGyzH) && (!isdigit (GV2sYd[Z3yDSFrpQk])))
                VKQYGyzH = (641 - 640);
            Z3yDSFrpQk = Z3yDSFrpQk +(749 - 748);
        }
    }
    {
        Sw1McIy6 = (518 - 518);
        for (; UMpuI0KeA6f -(111 - 110) > Sw1McIy6;) {
            j2r7DWR[tlR9og] = j2r7DWR[tlR9og] + (DmPH8j[Sw1McIy6] - '0');
            Sw1McIy6 = Sw1McIy6 +(834 - 833);
            j2r7DWR[tlR9og] = j2r7DWR[tlR9og] * ((530 - 520));
        }
    }
    j2r7DWR[tlR9og] = j2r7DWR[tlR9og] + DmPH8j[UMpuI0KeA6f -(249 - 248)] - '0';
    {
        Z3yDSFrpQk = (373 - 373);
        for (; Z3yDSFrpQk <= tlR9og;) {
            if (j2r7DWR[Z3yDSFrpQk] >= (847 - 847))
                printf ("%d\n", j2r7DWR[Z3yDSFrpQk]);
            Z3yDSFrpQk = Z3yDSFrpQk +(297 - 296);
        }
    }
    return;
}

