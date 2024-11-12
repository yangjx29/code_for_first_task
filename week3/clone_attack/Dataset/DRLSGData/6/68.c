int main () {
    int Bg3LilEAmZ;
    int iWjSVc8BYtZA;
    int XMiQczVgoqIp;
    int phb0rwCO [99] [99];
    scanf ("%d", &Bg3LilEAmZ);
    for (int l62EGAg09n = 1;
    Bg3LilEAmZ >= l62EGAg09n; l62EGAg09n = l62EGAg09n + 1) {
        int XpLW7xcy;
        XpLW7xcy = 0;
        scanf ("%d %d", &iWjSVc8BYtZA, &XMiQczVgoqIp);
        for (int bCSvJ2mP = 0;
        iWjSVc8BYtZA > bCSvJ2mP; bCSvJ2mP = bCSvJ2mP + 1)
            for (int CTizrWxHFE = 0;
            XMiQczVgoqIp > CTizrWxHFE; CTizrWxHFE = CTizrWxHFE +1)
                scanf ("%d", &phb0rwCO[bCSvJ2mP][CTizrWxHFE]);
        if (iWjSVc8BYtZA <= 2 || XMiQczVgoqIp <= 2) {
            for (int bCSvJ2mP = 0;
            bCSvJ2mP < iWjSVc8BYtZA; bCSvJ2mP = bCSvJ2mP + 1)
                for (int CTizrWxHFE = 0;
                XMiQczVgoqIp > CTizrWxHFE; CTizrWxHFE = CTizrWxHFE +1)
                    XpLW7xcy = XpLW7xcy +phb0rwCO[bCSvJ2mP][CTizrWxHFE];
        }
        else {
            for (int CTizrWxHFE = 0;
            XMiQczVgoqIp > CTizrWxHFE; CTizrWxHFE = CTizrWxHFE +1)
                XpLW7xcy = XpLW7xcy +phb0rwCO[0][CTizrWxHFE];
            for (int CTizrWxHFE = 0;
            CTizrWxHFE < XMiQczVgoqIp; CTizrWxHFE = CTizrWxHFE +1)
                XpLW7xcy = XpLW7xcy +phb0rwCO[iWjSVc8BYtZA - 1][CTizrWxHFE];
            for (int bCSvJ2mP = 1;
            bCSvJ2mP < iWjSVc8BYtZA - 1; bCSvJ2mP++)
                XpLW7xcy = XpLW7xcy +phb0rwCO[bCSvJ2mP][0];
            for (int bCSvJ2mP = 1;
            bCSvJ2mP < iWjSVc8BYtZA - 1; bCSvJ2mP++)
                XpLW7xcy += phb0rwCO[bCSvJ2mP][XMiQczVgoqIp -1];
        }
        printf ("%d\n", XpLW7xcy);
    }
    return 0;
}

