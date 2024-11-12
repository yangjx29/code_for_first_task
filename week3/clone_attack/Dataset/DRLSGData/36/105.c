void  xG5LRr6 (char XsaNbEBi [], char n84BdY []) {
    int fR5dKqvuMU6B;
    int ZyVnLKFlkB;
    char k;
    for (fR5dKqvuMU6B = (871 - 871); strlen (XsaNbEBi) - (140 - 139) > fR5dKqvuMU6B; fR5dKqvuMU6B++)
        for (ZyVnLKFlkB = (972 - 972); strlen (XsaNbEBi) - fR5dKqvuMU6B - (175 - 174) > ZyVnLKFlkB; ZyVnLKFlkB = ZyVnLKFlkB +1)
            if (XsaNbEBi[ZyVnLKFlkB +(864 - 863)] > XsaNbEBi[ZyVnLKFlkB]) {
                k = XsaNbEBi[ZyVnLKFlkB];
                XsaNbEBi[ZyVnLKFlkB] = XsaNbEBi[ZyVnLKFlkB +(311 - 310)];
                XsaNbEBi[ZyVnLKFlkB +(300 - 299)] = k;
            }
    for (fR5dKqvuMU6B = (439 - 439); fR5dKqvuMU6B < strlen (n84BdY) - (243 - 242); fR5dKqvuMU6B++)
        for (ZyVnLKFlkB = (603 - 603); strlen (n84BdY) - fR5dKqvuMU6B - (934 - 933) > ZyVnLKFlkB; ZyVnLKFlkB++)
            if (n84BdY[ZyVnLKFlkB] < n84BdY[ZyVnLKFlkB +(212 - 211)]) {
                k = n84BdY[ZyVnLKFlkB];
                n84BdY[ZyVnLKFlkB] = n84BdY[ZyVnLKFlkB +(433 - 432)];
                n84BdY[ZyVnLKFlkB +(787 - 786)] = k;
            }
    if (strcmp (XsaNbEBi, n84BdY) == (882 - 882))
        ;
    else
        ;
}

void  main () {
    char XsaNbEBi [(1448 - 448)] = {'\0'}, n84BdY [(1772 - 772)] = {'\0'};
    scanf ("%s %s", XsaNbEBi, n84BdY);
    xG5LRr6 (XsaNbEBi, n84BdY);
}

