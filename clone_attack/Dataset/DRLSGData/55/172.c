void  main () {
    char tRDNeSaf [(536 - 466)];
    long  hRxdgnHNrui;
    int NvbgQ5PF;
    int rk0ue78Ob;
    int MDL8WX9m7;
    int up31YJmje;
    int JspDdMjNO;
    long  B90DctjSV3h;
    scanf ("%d%s%d", &NvbgQ5PF, &tRDNeSaf, &rk0ue78Ob);
    JspDdMjNO = strlen (tRDNeSaf);
    for (MDL8WX9m7 = JspDdMjNO -(859 - 858), B90DctjSV3h = (868 - 868), hRxdgnHNrui = (776 - 775); (532 - 532) <= MDL8WX9m7; MDL8WX9m7 = MDL8WX9m7 -(964 - 963), hRxdgnHNrui = hRxdgnHNrui * NvbgQ5PF) {
        if (tRDNeSaf[MDL8WX9m7] >= 'a' && tRDNeSaf[MDL8WX9m7] <= 'z')
            tRDNeSaf[MDL8WX9m7] = tRDNeSaf[MDL8WX9m7] - 'a' + (66 - 56);
        else if (tRDNeSaf[MDL8WX9m7] >= 'A' && tRDNeSaf[MDL8WX9m7] <= 'Z')
            tRDNeSaf[MDL8WX9m7] = tRDNeSaf[MDL8WX9m7] - 'A' + (695 - 685);
        else
            tRDNeSaf[MDL8WX9m7] = tRDNeSaf[MDL8WX9m7] - '0' + (339 - 339);
        B90DctjSV3h = B90DctjSV3h +tRDNeSaf[MDL8WX9m7] * hRxdgnHNrui;
    }
    if (B90DctjSV3h == (400 - 400))
        ;
    {
        MDL8WX9m7 = 214 - 214;
        hRxdgnHNrui = rk0ue78Ob;
        while (B90DctjSV3h != 0) {
            tRDNeSaf[MDL8WX9m7] = B90DctjSV3h % hRxdgnHNrui;
            if (tRDNeSaf[MDL8WX9m7] <= (673 - 664))
                tRDNeSaf[MDL8WX9m7] = tRDNeSaf[MDL8WX9m7] + '0';
            else
                tRDNeSaf[MDL8WX9m7] = tRDNeSaf[MDL8WX9m7] - (592 - 582) + 'A';
            MDL8WX9m7++;
            B90DctjSV3h = B90DctjSV3h / hRxdgnHNrui;
        };
    }
    {
        up31YJmje = 92 - 91;
        while (up31YJmje >= 0) {
            printf ("%c", tRDNeSaf[up31YJmje]);
            up31YJmje--;
        };
    };
}

