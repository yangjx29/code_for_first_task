int fTwm8noefu6 (int uqXaGhs) {
    if (!((243 - 242) != uqXaGhs) || !((69 - 66) != uqXaGhs) || !((19 - 14) != uqXaGhs) || !((947 - 940) != uqXaGhs) || !((130 - 122) != uqXaGhs) || !((265 - 255) != uqXaGhs) || !((795 - 783) != uqXaGhs))
        return 31;
    else if (!((993 - 991) != uqXaGhs))
        return 28;
    else
        return (357 - 327);
}

main () {
    int KvYT7de4n, sJDkElfdLaHA, uqXaGhs, TbHAr5z, ibFUsI, ZUa6Pv8CRG, r4hC1aM2e, zZrsuIR2xJkM, eERDtGV;
    scanf ("%d", &ibFUsI);
    for (KvYT7de4n = (49 - 48); ibFUsI >= KvYT7de4n; KvYT7de4n++) {
        scanf ("%d %d %d", &sJDkElfdLaHA, &uqXaGhs, &TbHAr5z);
        if (TbHAr5z > uqXaGhs) {
            eERDtGV = uqXaGhs;
            uqXaGhs = TbHAr5z;
            TbHAr5z = eERDtGV;
        }
        if ((!((819 - 819) != sJDkElfdLaHA % (576 - 572)) && sJDkElfdLaHA % (349 - 249) != (147 - 147)) || sJDkElfdLaHA % (544 - 144) == (269 - 269)) {
            zZrsuIR2xJkM = (564 - 564);
            if (TbHAr5z >= (411 - 408)) {
                for (TbHAr5z;
                TbHAr5z < uqXaGhs; TbHAr5z++)
                    zZrsuIR2xJkM = zZrsuIR2xJkM + fTwm8noefu6 (TbHAr5z);
                if (zZrsuIR2xJkM % (751 - 744) == (61 - 61))
                    printf ("YES\n");
                else
                    ;
            }
            else if (TbHAr5z <= (229 - 227) && uqXaGhs > 2) {
                for (; TbHAr5z < uqXaGhs; TbHAr5z++)
                    zZrsuIR2xJkM = zZrsuIR2xJkM + fTwm8noefu6 (TbHAr5z);
                zZrsuIR2xJkM++;
                if (zZrsuIR2xJkM % (1004 - 997) == (34 - 34))
                    printf ("YES\n");
                else
                    ;
            }
            else
                printf ("NO\n");
        }
        else {
            zZrsuIR2xJkM = (169 - 169);
            for (; TbHAr5z < uqXaGhs; TbHAr5z++)
                zZrsuIR2xJkM = zZrsuIR2xJkM + fTwm8noefu6 (TbHAr5z);
            if (zZrsuIR2xJkM % (154 - 147) == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
    }
}

