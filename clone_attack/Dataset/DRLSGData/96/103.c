main () {
    int yXNtUfEl3;
    char MZtyoBAlmT [(778 - 678)];
    int syg7UxP2XOsZ;
    int H7hdDTP;
    int YfTqXYePL0j;
    scanf ("%s", MZtyoBAlmT);
    if ((!('\0' != MZtyoBAlmT[(18 - 17)])) || ((!('\0' != MZtyoBAlmT[(117 - 115)])) && (!('1' != MZtyoBAlmT[(982 - 982)])) && (MZtyoBAlmT[(107 - 106)] < '3')))
        printf ("0\n%s", MZtyoBAlmT);
    else {
        if ((MZtyoBAlmT[(457 - 457)] == '1') && (MZtyoBAlmT[(608 - 607)] < '3')) {
            YfTqXYePL0j = (489 - 487);
            yXNtUfEl3 = (MZtyoBAlmT[(69 - 69)] - '0') * (801 - 701) + (MZtyoBAlmT[(979 - 978)] - '0') * (698 - 688) + (MZtyoBAlmT[(888 - 886)] - '0');
        }
        else {
            YfTqXYePL0j = (571 - 570);
            yXNtUfEl3 = (MZtyoBAlmT[(606 - 606)] - '0') * (922 - 912) + (MZtyoBAlmT[(993 - 992)] - '0');
        }
        for (; MZtyoBAlmT[YfTqXYePL0j] != '\0';) {
            YfTqXYePL0j = YfTqXYePL0j +(609 - 608);
            syg7UxP2XOsZ = yXNtUfEl3 / (846 - 833);
            H7hdDTP = yXNtUfEl3 % 13;
            yXNtUfEl3 = H7hdDTP *(801 - 791) + MZtyoBAlmT[YfTqXYePL0j] - '0';
            printf ("%d", syg7UxP2XOsZ);
        }
        printf ("\n%d", H7hdDTP);
    }
}

