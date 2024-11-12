void  main () {
    int Anmv4zEoF3C, bebLYSmWyI, YH9tfWRC, I2cT1Xp;
    char J2CVrNUoP6q [50] [15], b [50] [15] = {' '};
    for (bebLYSmWyI = 0; Anmv4zEoF3C +(668 - 667) > bebLYSmWyI; bebLYSmWyI = bebLYSmWyI + 1) {
        gets (J2CVrNUoP6q [bebLYSmWyI]);
    }
    for (bebLYSmWyI = 0; bebLYSmWyI < Anmv4zEoF3C +1; bebLYSmWyI = bebLYSmWyI + 1) {
        YH9tfWRC = strlen (J2CVrNUoP6q[bebLYSmWyI]);
        for (I2cT1Xp = YH9tfWRC -3; I2cT1Xp < YH9tfWRC; I2cT1Xp++) {
            if (!('e' != J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -2]) && J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -1] == 'r') {
                strncpy (b[bebLYSmWyI], J2CVrNUoP6q[bebLYSmWyI], YH9tfWRC -2);
            }
            if (J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -2] == 'l' && J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -1] == 'y') {
                strncpy (b[bebLYSmWyI], J2CVrNUoP6q[bebLYSmWyI], YH9tfWRC -2);
            }
            if (J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -3] == 'i' && J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -2] == 'n' && J2CVrNUoP6q[bebLYSmWyI][YH9tfWRC -1] == 'g') {
                strncpy (b[bebLYSmWyI], J2CVrNUoP6q[bebLYSmWyI], YH9tfWRC -3);
            }
        }
        printf ("%s\n", b[bebLYSmWyI]);
    }
    scanf ("%d", &Anmv4zEoF3C);
}

