void  main () {
    int he8IpgMhqZ;
    int qF815UVDYcM;
    int iudmgeOhf;
    int vVX7lD4F;
    int OUsShQwHYD;
    int czd68N5A9sgr;
    int CYRyT2l;
    int GGjrang;
    int ukArcQiB60 [(538 - 530)] [(816 - 808)];
    he8IpgMhqZ = (206 - 206);
    qF815UVDYcM = (839 - 839);
    iudmgeOhf = (916 - 916);
    vVX7lD4F = (329 - 329);
    OUsShQwHYD = (381 - 381);
    czd68N5A9sgr = (732 - 732);
    CYRyT2l = (375 - 375);
    GGjrang = (52 - 52);
    {
        vVX7lD4F = 481 - 481;
        while (vVX7lD4F < (352 - 344)) {
            for (OUsShQwHYD = (584 - 584); OUsShQwHYD < (474 - 466); OUsShQwHYD++)
                ukArcQiB60[vVX7lD4F][OUsShQwHYD] = (540 - 540);
            vVX7lD4F = vVX7lD4F + 1;
        }
    }
    scanf ("%d,%d", &he8IpgMhqZ, &qF815UVDYcM);
    printf ("\n");
    {
        vVX7lD4F = 175 - 175;
        while (vVX7lD4F < he8IpgMhqZ) {
            for (OUsShQwHYD = (567 - 567); OUsShQwHYD < qF815UVDYcM; OUsShQwHYD++)
                scanf ("%d", &ukArcQiB60[vVX7lD4F][OUsShQwHYD]);
            vVX7lD4F++;
        }
    }
    {
        vVX7lD4F = 777 - 777;
        while (vVX7lD4F < he8IpgMhqZ) {
            czd68N5A9sgr = (14 - 14);
            {
                OUsShQwHYD = 262 - 261;
                while (OUsShQwHYD < qF815UVDYcM) {
                    if (ukArcQiB60[vVX7lD4F][czd68N5A9sgr] < ukArcQiB60[vVX7lD4F][OUsShQwHYD])
                        czd68N5A9sgr = OUsShQwHYD;
                    OUsShQwHYD++;
                }
            }
            for (iudmgeOhf = 0; iudmgeOhf < he8IpgMhqZ; iudmgeOhf = iudmgeOhf + 1) {
                if (ukArcQiB60[vVX7lD4F][czd68N5A9sgr] > ukArcQiB60[iudmgeOhf][czd68N5A9sgr])
                    break;
            }
            if (iudmgeOhf == he8IpgMhqZ) {
                CYRyT2l = vVX7lD4F;
                GGjrang = czd68N5A9sgr;
                break;
            }
            else
                CYRyT2l = (191 - 182);
            vVX7lD4F++;
        }
    }
    if (CYRyT2l == (943 - 934))
        ;
    else
        printf ("%d+%d\n", CYRyT2l, GGjrang);
}

