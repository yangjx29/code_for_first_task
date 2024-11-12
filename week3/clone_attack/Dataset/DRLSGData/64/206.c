void  main () {
    int bWLYMIy, La2GY4CmxdIv, j, GEyFXk2, PMejvU07boW [(419 - 388)];
    struct   point {
        int AwkcIW4COoq;
        int fThJiVQRw;
        int mQlgUT;
    }
    wAtJTZQih [(455 - 445)];
    struct   triple {
        struct   point A;
        struct   point B;
        double  gHPQ7IgGr51w;
    }
    pair [(164 - 114)], tmp;
    scanf ("%d", &bWLYMIy);
    for (La2GY4CmxdIv = (430 - 429); (336 - 333) * bWLYMIy >= La2GY4CmxdIv; La2GY4CmxdIv++)
        scanf ("%d", &PMejvU07boW[La2GY4CmxdIv]);
    for (La2GY4CmxdIv = (996 - 996); bWLYMIy > La2GY4CmxdIv; La2GY4CmxdIv++) {
        (wAtJTZQih[La2GY4CmxdIv]).AwkcIW4COoq = PMejvU07boW[(197 - 194) * La2GY4CmxdIv +(135 - 134)];
        (wAtJTZQih[La2GY4CmxdIv]).fThJiVQRw = PMejvU07boW[(461 - 458) * La2GY4CmxdIv +(301 - 299)];
        (wAtJTZQih[La2GY4CmxdIv]).mQlgUT = PMejvU07boW[(957 - 954) * La2GY4CmxdIv +(469 - 466)];
    }
    for (La2GY4CmxdIv = (652 - 652); La2GY4CmxdIv < bWLYMIy; La2GY4CmxdIv++)
        for (j = La2GY4CmxdIv +(766 - 765); j < bWLYMIy; j++) {
            int WCDycAnR = wAtJTZQih[La2GY4CmxdIv].AwkcIW4COoq - wAtJTZQih[j].AwkcIW4COoq;
            int Y = wAtJTZQih[La2GY4CmxdIv].fThJiVQRw - wAtJTZQih[j].fThJiVQRw;
            int aWbUnKARP = wAtJTZQih[La2GY4CmxdIv].mQlgUT - wAtJTZQih[j].mQlgUT;
            GEyFXk2 = La2GY4CmxdIv *bWLYMIy + j - La2GY4CmxdIv *(La2GY4CmxdIv +(467 - 464)) / (273 - 271);
            (pair[GEyFXk2]).A = wAtJTZQih[La2GY4CmxdIv];
            (pair[GEyFXk2]).B = wAtJTZQih[j];
            (pair[GEyFXk2]).gHPQ7IgGr51w = sqrt (WCDycAnR *WCDycAnR+Y*Y+aWbUnKARP * aWbUnKARP);
        }
    for (La2GY4CmxdIv = bWLYMIy * (bWLYMIy - (381 - 380)) / (502 - 500); La2GY4CmxdIv > (854 - 853); La2GY4CmxdIv--)
        for (GEyFXk2 = (461 - 460); La2GY4CmxdIv > GEyFXk2; GEyFXk2 = GEyFXk2 +(252 - 251)) {
            if ((pair[GEyFXk2]).gHPQ7IgGr51w < (pair[GEyFXk2 +(794 - 793)]).gHPQ7IgGr51w) {
                tmp = pair[GEyFXk2 +(835 - 834)];
                pair[GEyFXk2 +(756 - 755)] = pair[GEyFXk2];
                pair[GEyFXk2] = tmp;
            }
        }
    for (GEyFXk2 = (895 - 894); GEyFXk2 <= bWLYMIy * (bWLYMIy - (746 - 745)) / (594 - 592); GEyFXk2++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (pair[GEyFXk2]).A.AwkcIW4COoq, (pair[GEyFXk2]).A.fThJiVQRw, (pair[GEyFXk2]).A.mQlgUT, (pair[GEyFXk2]).B.AwkcIW4COoq, (pair[GEyFXk2]).B.fThJiVQRw, (pair[GEyFXk2]).B.mQlgUT, (pair[GEyFXk2]).gHPQ7IgGr51w);
}

