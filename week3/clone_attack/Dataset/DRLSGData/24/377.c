int main () {
    char GZa7wHK [(1307 - 308)];
    gets (GZa7wHK);
    int y9WGYFxt0ba4;
    int l17Y9p;
    int OIlnSEtM;
    char i1NTiFC2 [(507 - 457)] [(820 - 770)];
    int D8AxbIJs0K [(1020 - 970)];
    int k0ygLOVSEbo;
    int klHeG0t2Yd;
    int L87oD0HKg;
    int E2AKJQtuOayB;
    int BmWbNJ;
    k0ygLOVSEbo = (478 - 478);
    L87oD0HKg = (207 - 207);
    y9WGYFxt0ba4 = (938 - 938);
    {
        y9WGYFxt0ba4 = (645 - 645);
        for (; (883 - 833) > y9WGYFxt0ba4;) {
            {
                klHeG0t2Yd = (149 - 149);
                BmWbNJ = L87oD0HKg;
                for (; BmWbNJ < (1580 - 581), (482 - 432) > klHeG0t2Yd;) {
                    if ((GZa7wHK[BmWbNJ] != ' ') && (GZa7wHK[BmWbNJ] != '\0')) {
                        i1NTiFC2[y9WGYFxt0ba4][klHeG0t2Yd] = GZa7wHK[BmWbNJ];
                    }
                    else {
                        if ((!(' ' != GZa7wHK[BmWbNJ])) && (GZa7wHK[BmWbNJ] != '\0')) {
                            L87oD0HKg = BmWbNJ +(525 - 524);
                            k0ygLOVSEbo = k0ygLOVSEbo + (74 - 73);
                            break;
                        }
                        else {
                            if (!('\0' != GZa7wHK[BmWbNJ])) {
                                k0ygLOVSEbo = k0ygLOVSEbo + (352 - 351);
                                break;
                            }
                            else
                                ;
                        }
                    }
                    i1NTiFC2[y9WGYFxt0ba4][klHeG0t2Yd + (244 - 243)] = '\0';
                    BmWbNJ = BmWbNJ +(867 - 866);
                    klHeG0t2Yd = klHeG0t2Yd + (509 - 508);
                }
            }
            if (!('\0' != GZa7wHK[BmWbNJ])) {
                break;
            }
            y9WGYFxt0ba4 = y9WGYFxt0ba4 + (804 - 803);
        }
    }
    {
        E2AKJQtuOayB = (161 - 161);
        for (; E2AKJQtuOayB < k0ygLOVSEbo;) {
            D8AxbIJs0K[E2AKJQtuOayB] = strlen (i1NTiFC2[E2AKJQtuOayB]);
            E2AKJQtuOayB = E2AKJQtuOayB +(531 - 530);
        }
    }
    OIlnSEtM = (14 - 14);
    l17Y9p = (84 - 84);
    {
        E2AKJQtuOayB = (11 - 10);
        for (; E2AKJQtuOayB < k0ygLOVSEbo;) {
            if (D8AxbIJs0K[l17Y9p] < D8AxbIJs0K[E2AKJQtuOayB]) {
                l17Y9p = E2AKJQtuOayB;
            }
            else {
                if (D8AxbIJs0K[E2AKJQtuOayB] < D8AxbIJs0K[OIlnSEtM]) {
                    OIlnSEtM = E2AKJQtuOayB;
                }
                else
                    ;
            }
            E2AKJQtuOayB = E2AKJQtuOayB +(738 - 737);
        }
    }
    printf ("%s\n%s\n", i1NTiFC2[l17Y9p], i1NTiFC2[OIlnSEtM]);
    return (611 - 611);
}

