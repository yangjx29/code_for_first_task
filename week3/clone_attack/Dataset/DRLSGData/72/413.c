void  main () {
    int LgS7tOljVe;
    int PlcgZxbDpVS3;
    int vRDpbQiW [(354 - 54)] [(651 - 351)];
    int jw0YnP3Bl1u;
    int oKZvki8736lW;
    int geco974;
    scanf ("%d %d\n", &LgS7tOljVe, &PlcgZxbDpVS3);
    {
        jw0YnP3Bl1u = (463 - 463);
        while (LgS7tOljVe +(924 - 923) >= jw0YnP3Bl1u) {
            {
                oKZvki8736lW = (235 - 235);
                while (oKZvki8736lW <= PlcgZxbDpVS3 +(61 - 60)) {
                    vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW] = 0;
                    oKZvki8736lW++;
                }
            }
            jw0YnP3Bl1u++;
        }
    }
    {
        jw0YnP3Bl1u = (619 - 618);
        while (jw0YnP3Bl1u <= LgS7tOljVe) {
            {
                oKZvki8736lW = (444 - 443);
                while (oKZvki8736lW <= PlcgZxbDpVS3) {
                    scanf ("%d", &vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW]);
                    oKZvki8736lW++;
                }
            }
            jw0YnP3Bl1u++;
        }
    }
    {
        jw0YnP3Bl1u = (116 - 115);
        while (LgS7tOljVe >= jw0YnP3Bl1u) {
            {
                oKZvki8736lW = (835 - 834);
                while (oKZvki8736lW <= PlcgZxbDpVS3) {
                    geco974 = 0;
                    if (vRDpbQiW[jw0YnP3Bl1u - (519 - 518)][oKZvki8736lW] <= vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW])
                        geco974++;
                    if (vRDpbQiW[jw0YnP3Bl1u + (794 - 793)][oKZvki8736lW] <= vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW])
                        geco974++;
                    if (vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW - 1] <= vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW])
                        geco974++;
                    if (vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW + 1] <= vRDpbQiW[jw0YnP3Bl1u][oKZvki8736lW])
                        geco974++;
                    if (geco974 == 4)
                        printf ("%d %d\n", jw0YnP3Bl1u - 1, oKZvki8736lW - 1);
                    oKZvki8736lW++;
                }
            }
            jw0YnP3Bl1u++;
        }
    }
}

