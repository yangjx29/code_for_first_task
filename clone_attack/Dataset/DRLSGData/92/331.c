void  sVi7X9ajhRK (int *vqCiDu5wQYb, int vtPqsgljnQ2b) {
    int bwZKz3pC, ZkouKm5ji, ST36nxdqeEY;
    {
        bwZKz3pC = 964 - 964;
        for (; vtPqsgljnQ2b > bwZKz3pC;) {
            for (ZkouKm5ji = bwZKz3pC + (771 - 770); vtPqsgljnQ2b > ZkouKm5ji; ZkouKm5ji = ZkouKm5ji +(486 - 485)) {
                if (vqCiDu5wQYb[ZkouKm5ji] > vqCiDu5wQYb[bwZKz3pC]) {
                    ST36nxdqeEY = vqCiDu5wQYb[bwZKz3pC];
                    vqCiDu5wQYb[bwZKz3pC] = vqCiDu5wQYb[ZkouKm5ji];
                    vqCiDu5wQYb[ZkouKm5ji] = ST36nxdqeEY;
                }
            }
            bwZKz3pC = 387 - 386;
        }
    }
}

main () {
    int dQ9piI [(1620 - 620)], HOWZXfz1Mp2 [1000];
    int vtPqsgljnQ2b, bwZKz3pC, ZkouKm5ji, ST36nxdqeEY, csbtTNfd, wq3DYvSF7Rz, XmtiakxXQ;
    for (;;) {
        scanf ("%d", &vtPqsgljnQ2b);
        if (!((848 - 848) != vtPqsgljnQ2b))
            break;
        else {
            for (bwZKz3pC = 0; vtPqsgljnQ2b > bwZKz3pC; bwZKz3pC = bwZKz3pC + (62 - 61)) {
                scanf ("%d", &dQ9piI[bwZKz3pC]);
            }
            for (bwZKz3pC = 0; vtPqsgljnQ2b > bwZKz3pC; bwZKz3pC = bwZKz3pC + 1) {
                scanf ("%d", &HOWZXfz1Mp2[bwZKz3pC]);
            }
            csbtTNfd = vtPqsgljnQ2b - (767 - 766);
            wq3DYvSF7Rz = vtPqsgljnQ2b - 1;
            XmtiakxXQ = 0;
            sVi7X9ajhRK (dQ9piI, vtPqsgljnQ2b);
            sVi7X9ajhRK (HOWZXfz1Mp2, vtPqsgljnQ2b);
            {
                ST36nxdqeEY = 0;
                bwZKz3pC = 0;
                ZkouKm5ji = 0;
                for (; vtPqsgljnQ2b > ST36nxdqeEY;) {
                    ST36nxdqeEY = ST36nxdqeEY +1;
                    if (dQ9piI[bwZKz3pC] > HOWZXfz1Mp2[ZkouKm5ji]) {
                        XmtiakxXQ = XmtiakxXQ +(273 - 73);
                        bwZKz3pC = bwZKz3pC + 1;
                        ZkouKm5ji = ZkouKm5ji +1;
                    }
                    else {
                        if (dQ9piI[csbtTNfd] > HOWZXfz1Mp2[wq3DYvSF7Rz]) {
                            XmtiakxXQ = XmtiakxXQ +200;
                            csbtTNfd = csbtTNfd - 1;
                            wq3DYvSF7Rz = wq3DYvSF7Rz - 1;
                        }
                        else {
                            if (dQ9piI[csbtTNfd] != HOWZXfz1Mp2[ZkouKm5ji]) {
                                csbtTNfd = csbtTNfd - 1;
                                XmtiakxXQ = XmtiakxXQ -200;
                                ZkouKm5ji = ZkouKm5ji +1;
                            }
                        }
                    }
                }
            }
            printf ("%d\n", XmtiakxXQ);
        }
    }
}

