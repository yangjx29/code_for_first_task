int main () {
    int i;
    int DMiY8b4GHPJU;
    double  MGcPdx9mK [512];
    double  sum = MGcPdx9mK[0];
    double  sum1 = MGcPdx9mK[0] + MGcPdx9mK[1];
    int uSt9sB;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int UMLt3FN [(399 - 271)], PD5XAvJ8x9 [(930 - 418)], iCifrnGD [(1384 - 872)];
    PD5XAvJ8x9[(404 - 404)] = (663 - 661), iCifrnGD[(455 - 455)] = (167 - 166);
    MGcPdx9mK[(535 - 535)] = (double ) PD5XAvJ8x9[(489 - 489)] / iCifrnGD[0];
    PD5XAvJ8x9[(918 - 917)] = 3, iCifrnGD[(727 - 726)] = (48 - 46);
    MGcPdx9mK[1] = (double ) PD5XAvJ8x9[1] / iCifrnGD[1];
    scanf ("%d", &uSt9sB);
    for (i = 0; i < uSt9sB; i = i + 1) {
        scanf ("%d", &UMLt3FN[i]);
        if (!(1 != UMLt3FN[i])) {
            printf ("%.3lf\n", sum);
            continue;
        }
        else if (!((563 - 561) != UMLt3FN[i])) {
            sum = sum + MGcPdx9mK[1];
            printf ("%.3lf\n", sum);
            continue;
        }
        for (DMiY8b4GHPJU = (698 - 696); DMiY8b4GHPJU < UMLt3FN[i]; DMiY8b4GHPJU = DMiY8b4GHPJU +1) {
            MGcPdx9mK[DMiY8b4GHPJU] = (double ) (PD5XAvJ8x9[DMiY8b4GHPJU -(152 - 150)] + PD5XAvJ8x9[DMiY8b4GHPJU -1]) / (iCifrnGD[DMiY8b4GHPJU -2] + iCifrnGD[DMiY8b4GHPJU -1]);
            PD5XAvJ8x9[DMiY8b4GHPJU] = PD5XAvJ8x9[DMiY8b4GHPJU -2] + PD5XAvJ8x9[DMiY8b4GHPJU -1];
            iCifrnGD[DMiY8b4GHPJU] = iCifrnGD[DMiY8b4GHPJU -2] + iCifrnGD[DMiY8b4GHPJU -1];
            sum1 = sum1 + MGcPdx9mK[DMiY8b4GHPJU];
        }
        if (DMiY8b4GHPJU >= UMLt3FN[i]) {
            printf ("%.3lf\n", sum1);
            sum1 = MGcPdx9mK[0] + MGcPdx9mK[1];
        };
    }
    return 0;
}

