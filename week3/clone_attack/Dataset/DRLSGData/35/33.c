int LWjihQ0C3 [(711 - 701)] [(1007 - 997)];

int z1or5wyITYaD (int h, int yYjMFbo) {
    int EP9WZ7vyI;
    int FLMdzYxlKbup = -(426 - 425), RGulzmOTW = (650 - 650);
    for (EP9WZ7vyI = (564 - 564); EP9WZ7vyI < yYjMFbo; ++EP9WZ7vyI) {
        if (FLMdzYxlKbup < LWjihQ0C3[h][EP9WZ7vyI]) {
            FLMdzYxlKbup = LWjihQ0C3[h][EP9WZ7vyI];
            RGulzmOTW = EP9WZ7vyI;
        }
    }
    return RGulzmOTW;
}

int FgyoAF2 (int jULb5uxBy, int XBH6OjI) {
    int EP9WZ7vyI;
    int o4sjPw = (1000661 - 662), RGulzmOTW = (418 - 418);
    {
        EP9WZ7vyI = (700 - 700);
        for (; EP9WZ7vyI < XBH6OjI;) {
            if (o4sjPw > LWjihQ0C3[EP9WZ7vyI][jULb5uxBy]) {
                o4sjPw = LWjihQ0C3[EP9WZ7vyI][jULb5uxBy];
                RGulzmOTW = EP9WZ7vyI;
            }
            ++EP9WZ7vyI;
        }
    }
    return RGulzmOTW;
}

int main () {
    int EP9WZ7vyI, YjUcHsh5G;
    int XBH6OjI, yYjMFbo;
    int njM2SEir = (740 - 740);
    scanf ("%d,%d", &XBH6OjI, &yYjMFbo);
    {
        EP9WZ7vyI = (331 - 331);
        for (; XBH6OjI > EP9WZ7vyI;) {
            {
                YjUcHsh5G = (959 - 959);
                for (; yYjMFbo > YjUcHsh5G;) {
                    cin >> LWjihQ0C3[EP9WZ7vyI][YjUcHsh5G];
                    ++YjUcHsh5G;
                }
            }
            ++EP9WZ7vyI;
        }
    }
    {
        {
            if ((728 - 728)) {
                return (449 - 449);
            }
        }
        EP9WZ7vyI = (829 - 829);
        for (; EP9WZ7vyI < XBH6OjI;) {
            int h = z1or5wyITYaD (EP9WZ7vyI, yYjMFbo);
            int jULb5uxBy = FgyoAF2 (h, XBH6OjI);
            if (EP9WZ7vyI == jULb5uxBy) {
                cout << jULb5uxBy << "+" << h << endl;
                njM2SEir = (243 - 242);
            }
            ++EP9WZ7vyI;
        }
    }
    {
        if ((515 - 515)) {
            return (121 - 121);
        }
    }
    if (njM2SEir == (251 - 251)) {
        cout << "No" << endl;
    }
    return (504 - 504);
}

