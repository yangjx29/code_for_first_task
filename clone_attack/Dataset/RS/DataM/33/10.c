int main () {
    char K3SmPkLvfI [1000] [(967 - 711)];
    char fqLU1CG [1000] [(1196 - 940)];
    int ZoAvp70;
    int Ex0OrYtDzhI;
    int NYyeZ5;
    int x0svml;
    scanf ("%d", &ZoAvp70);
    for (Ex0OrYtDzhI = (852 - 852); ZoAvp70 > Ex0OrYtDzhI; Ex0OrYtDzhI = Ex0OrYtDzhI +1) {
        scanf ("%s", K3SmPkLvfI[Ex0OrYtDzhI]);
    }
    for (Ex0OrYtDzhI = 0; Ex0OrYtDzhI < ZoAvp70; Ex0OrYtDzhI++) {
        x0svml = strlen (K3SmPkLvfI[Ex0OrYtDzhI]);
        for (NYyeZ5 = 0; NYyeZ5 < x0svml; NYyeZ5++) {
            if (!('A' != K3SmPkLvfI[Ex0OrYtDzhI][NYyeZ5])) {
                fqLU1CG[Ex0OrYtDzhI][NYyeZ5] = 'T';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (!('G' != K3SmPkLvfI[Ex0OrYtDzhI][NYyeZ5])) {
                fqLU1CG[Ex0OrYtDzhI][NYyeZ5] = 'C';
            }
            if (K3SmPkLvfI[Ex0OrYtDzhI][NYyeZ5] == 'C') {
                fqLU1CG[Ex0OrYtDzhI][NYyeZ5] = 'G';
            }
            if (K3SmPkLvfI[Ex0OrYtDzhI][NYyeZ5] == 'T') {
                fqLU1CG[Ex0OrYtDzhI][NYyeZ5] = 'A';
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        fqLU1CG[Ex0OrYtDzhI][NYyeZ5] = '\0';
    }
    for (Ex0OrYtDzhI = 0; Ex0OrYtDzhI < ZoAvp70; Ex0OrYtDzhI++) {
        printf ("%s\n", fqLU1CG[Ex0OrYtDzhI]);
    }
    return 0;
}

