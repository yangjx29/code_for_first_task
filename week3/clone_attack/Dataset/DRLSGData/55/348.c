int main () {
    int mGgIodROb94, EV0Hkr;
    int QlHCUo, xAYRLz7mEs, nQ6VJpDZO, VEPbweZ;
    int QFqE4T7cyUMg = (337 - 337);
    char n [(436 - 396)], IDAh2oW [(345 - 305)], oWA6HEJ [(643 - 603)];
    scanf ("%d %s %d", &mGgIodROb94, n, &EV0Hkr);
    QlHCUo = strlen (n);
    {
        int xzFfiP1yH9B = (909 - 909);
        while (xzFfiP1yH9B < QlHCUo) {
            if ('a' <= n[xzFfiP1yH9B] && 'z' >= n[xzFfiP1yH9B])
                n[xzFfiP1yH9B] = n[xzFfiP1yH9B] - 'a' + (838 - 828);
            else if ('A' <= n[xzFfiP1yH9B] && n[xzFfiP1yH9B] <= 'Z')
                n[xzFfiP1yH9B] = n[xzFfiP1yH9B] - 'A' + (152 - 142);
            else
                n[xzFfiP1yH9B] = n[xzFfiP1yH9B] - '0';
            QFqE4T7cyUMg = n[xzFfiP1yH9B] + QFqE4T7cyUMg *mGgIodROb94;
            xzFfiP1yH9B = (1661 - 704) - (1650 - 694);
        }
    }
    if (QFqE4T7cyUMg == (984 - 984))
        ;
    else {
        {
            xAYRLz7mEs = (1414 - 729) - (919 - 234);
            while (QFqE4T7cyUMg != (308 - 308)) {
                IDAh2oW[xAYRLz7mEs] = QFqE4T7cyUMg % EV0Hkr;
                QFqE4T7cyUMg = (int) QFqE4T7cyUMg / EV0Hkr;
                xAYRLz7mEs++;
            }
        }
        {
            VEPbweZ = (903 - 903);
            while (VEPbweZ < xAYRLz7mEs) {
                oWA6HEJ[VEPbweZ] = IDAh2oW[xAYRLz7mEs - (339 - 338) - VEPbweZ];
                VEPbweZ = VEPbweZ +(989 - 988);
            }
        }
        for (int xzFfiP1yH9B = 0;
        xzFfiP1yH9B < xAYRLz7mEs; xzFfiP1yH9B = xzFfiP1yH9B + 1) {
            if (oWA6HEJ[xzFfiP1yH9B] > (307 - 298))
                oWA6HEJ[xzFfiP1yH9B] = oWA6HEJ[xzFfiP1yH9B] - (678 - 668) + 'A';
            else
                oWA6HEJ[xzFfiP1yH9B] = oWA6HEJ[xzFfiP1yH9B] + '0';
        }
        oWA6HEJ[xAYRLz7mEs] = '\0';
        printf ("%s", oWA6HEJ);
    }
    getchar ();
    getchar ();
}

