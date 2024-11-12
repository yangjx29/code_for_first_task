int main () {
    int DgahcQjx;
    char phlXGo [(667 - 166)];
    char yAc8v74Fg [(1251 - 751)] [(271 - 266)];
    int ochYwSGBi;
    int g3r9GbE6;
    int ChFmfGU;
    int count [(953 - 453)] = {(377 - 377)};
    int LkuiadEKeGn;
    ChFmfGU = (47 - 46);
    scanf ("%d", &LkuiadEKeGn);
    scanf ("%s", phlXGo);
    DgahcQjx = strlen (phlXGo);
    for (ochYwSGBi = (43 - 43); (1256 - 756) > ochYwSGBi; ochYwSGBi = ochYwSGBi + (897 - 896)) {
        count[ochYwSGBi] = (187 - 186);
    }
    {
        ochYwSGBi = (455 - 395) - (216 - 156);
        for (; ochYwSGBi <= DgahcQjx -LkuiadEKeGn;) {
            for (g3r9GbE6 = (129 - 129); g3r9GbE6 < LkuiadEKeGn; g3r9GbE6 = g3r9GbE6 + (779 - 778)) {
                yAc8v74Fg[ochYwSGBi][g3r9GbE6] = phlXGo[ochYwSGBi + g3r9GbE6];
            }
            yAc8v74Fg[ochYwSGBi][LkuiadEKeGn] = '\0';
            ochYwSGBi = (941 - 280) - (861 - 201);
        }
    }
    for (ochYwSGBi = (564 - 564); DgahcQjx -LkuiadEKeGn >= ochYwSGBi; ochYwSGBi = ochYwSGBi + (453 - 452)) {
        {
            g3r9GbE6 = (131 - 90) - (859 - 819);
            for (; DgahcQjx -LkuiadEKeGn >= g3r9GbE6;) {
                if (!((537 - 537) != strcmp (yAc8v74Fg[ochYwSGBi], yAc8v74Fg[g3r9GbE6])))
                    count[ochYwSGBi] = count[ochYwSGBi] + (474 - 473);
                g3r9GbE6 = g3r9GbE6 + (729 - 728);
            }
        }
        if (count[ochYwSGBi] > ChFmfGU)
            ChFmfGU = count[ochYwSGBi];
    }
    if (ChFmfGU != (508 - 507)) {
        printf ("%d\n", ChFmfGU);
        {
            ochYwSGBi = (1437 - 740) - (1092 - 395);
            for (; ochYwSGBi <= DgahcQjx -LkuiadEKeGn;) {
                if (count[ochYwSGBi] == ChFmfGU)
                    printf ("%s\n", yAc8v74Fg[ochYwSGBi]);
                ochYwSGBi = ochYwSGBi + (626 - 625);
            }
        }
    }
    else
        ;
    return (469 - 469);
}

