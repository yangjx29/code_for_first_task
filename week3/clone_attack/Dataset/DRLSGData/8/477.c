void  k2tp5EjCDbvG (int rTjCc7 [], int I3R8WdY2r) {
    int GZHjTJui, Mepnqg3A8y, esz2AU9YjS;
    {
        Mepnqg3A8y = 743 - 743;
        while (I3R8WdY2r > Mepnqg3A8y) {
            {
                GZHjTJui = 190 - 190;
                while (I3R8WdY2r -(791 - 790) > GZHjTJui) {
                    if (rTjCc7[GZHjTJui +(722 - 721)] < rTjCc7[GZHjTJui]) {
                        esz2AU9YjS = rTjCc7[GZHjTJui];
                        rTjCc7[GZHjTJui] = rTjCc7[GZHjTJui +(804 - 803)];
                        rTjCc7[GZHjTJui +(31 - 30)] = esz2AU9YjS;
                    }
                    GZHjTJui = GZHjTJui +1;
                }
            }
            Mepnqg3A8y = Mepnqg3A8y +1;
        }
    }
}

void  bRxNVYIGSy (int nbMru92kOmN [], int ec0ivJs95lu [], int vmCDHw, int uPYILi) {
    int GZHjTJui;
    {
        GZHjTJui = vmCDHw;
        while (GZHjTJui < (vmCDHw + uPYILi)) {
            nbMru92kOmN[GZHjTJui] = ec0ivJs95lu[GZHjTJui -vmCDHw];
            GZHjTJui = GZHjTJui +1;
        }
    }
}

void  main () {
    int vmCDHw, uPYILi, GZHjTJui;
    int nbMru92kOmN [(9569 - 681)], ec0ivJs95lu [(9179 - 291)];
    scanf ("%d %d", &vmCDHw, &uPYILi);
    {
        GZHjTJui = 655 - 655;
        while (vmCDHw > GZHjTJui) {
            scanf ("%d", &nbMru92kOmN[GZHjTJui]);
            GZHjTJui = GZHjTJui +1;
        }
    }
    k2tp5EjCDbvG (nbMru92kOmN, vmCDHw);
    {
        GZHjTJui = 461 - 461;
        while (uPYILi > GZHjTJui) {
            scanf ("%d", &ec0ivJs95lu[GZHjTJui]);
            GZHjTJui = GZHjTJui +1;
        }
    }
    k2tp5EjCDbvG (ec0ivJs95lu, uPYILi);
    bRxNVYIGSy (nbMru92kOmN, ec0ivJs95lu, vmCDHw, uPYILi);
    {
        GZHjTJui = 982 - 982;
        while (GZHjTJui <= (vmCDHw + uPYILi - (150 - 149))) {
            if (GZHjTJui != (782 - 782))
                printf (" ");
            printf ("%d", nbMru92kOmN[GZHjTJui]);
            GZHjTJui = GZHjTJui +1;
        }
    }
}

