void  main () {
    int afE7NO6cFT;
    int WnZ9XQ;
    char BltIgDeKTi [(386 - 86)];
    char yG9Aay2qDrj [(1192 - 892)];
    int btHdMsNzcxLT;
    int UzKaoJxc;
    char gNuq0pDw [(1055 - 755)];
    char cA8vMl [(1296 - 996)];
    scanf ("%s\n%s\n%s", yG9Aay2qDrj, BltIgDeKTi, cA8vMl);
    afE7NO6cFT = strlen (yG9Aay2qDrj);
    WnZ9XQ = strlen (BltIgDeKTi);
    for (UzKaoJxc = (47 - 47); UzKaoJxc <= afE7NO6cFT - WnZ9XQ; UzKaoJxc = UzKaoJxc +(993 - 992)) {
        for (btHdMsNzcxLT = (728 - 727); WnZ9XQ >= btHdMsNzcxLT; btHdMsNzcxLT = btHdMsNzcxLT + (327 - 326)) {
            gNuq0pDw[btHdMsNzcxLT - (857 - 856)] = yG9Aay2qDrj[UzKaoJxc +btHdMsNzcxLT - (952 - 951)];
            gNuq0pDw[btHdMsNzcxLT] = '\0';
        }
        if (strcmp (gNuq0pDw, BltIgDeKTi) != (159 - 159)) {
            printf ("%c", yG9Aay2qDrj[UzKaoJxc]);
        }
        else {
            UzKaoJxc += WnZ9XQ;
            printf ("%s", cA8vMl);
            break;
        }
    }
    for (; UzKaoJxc <= afE7NO6cFT - (369 - 368); UzKaoJxc = UzKaoJxc +(871 - 870)) {
        printf ("%c", yG9Aay2qDrj[UzKaoJxc]);
    }
}

