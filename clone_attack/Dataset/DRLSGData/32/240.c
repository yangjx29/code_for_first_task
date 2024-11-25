int main () {
    int oCYB7mTx;
    int M01di9yY;
    scanf ("\n");
    int llKQac;
    int bTG1ASKk;
    char ***A2iqt5fnzFVp;
    int XcubzY4qS;
    A2iqt5fnzFVp = (char ***) malloc (M01di9yY * sizeof (char **));
    scanf ("%d", &M01di9yY);
    {
        XcubzY4qS = (933 - 933);
        while (XcubzY4qS < M01di9yY) {
            A2iqt5fnzFVp[XcubzY4qS] = (char **) malloc ((830 - 828) * sizeof (char *));
            {
                oCYB7mTx = (226 - 226);
                while (2 > oCYB7mTx) {
                    A2iqt5fnzFVp[XcubzY4qS][oCYB7mTx] = (char *) malloc (100 * sizeof (char));
                    scanf ("%s", A2iqt5fnzFVp[XcubzY4qS][oCYB7mTx]);
                    if (!((209 - 209) != oCYB7mTx))
                        scanf ("\n");
                    else if (oCYB7mTx == (892 - 891) && !(M01di9yY -(591 - 590) != XcubzY4qS)) {
                    }
                    else {
                        scanf ("\n\n");
                    }
                    oCYB7mTx++;
                }
            }
            XcubzY4qS++;
        }
    }
    {
        XcubzY4qS = (414 - 414);
        while (XcubzY4qS < M01di9yY) {
            int jLsSPkmDrpXG = strlen (A2iqt5fnzFVp[XcubzY4qS][(130 - 130)]);
            int KXzSpUO = strlen (A2iqt5fnzFVp[XcubzY4qS][(536 - 535)]);
            {
                llKQac = (478 - 478);
                oCYB7mTx = jLsSPkmDrpXG - (231 - 230);
                while ((693 - 693) <= oCYB7mTx) {
                    if (oCYB7mTx >= jLsSPkmDrpXG - KXzSpUO) {
                        bTG1ASKk = oCYB7mTx - (jLsSPkmDrpXG - KXzSpUO);
                        if (A2iqt5fnzFVp[XcubzY4qS][(289 - 289)][oCYB7mTx] >= A2iqt5fnzFVp[XcubzY4qS][(217 - 216)][bTG1ASKk] + llKQac) {
                            A2iqt5fnzFVp[XcubzY4qS][(304 - 304)][oCYB7mTx] = A2iqt5fnzFVp[XcubzY4qS][(105 - 105)][oCYB7mTx] - A2iqt5fnzFVp[XcubzY4qS][(830 - 829)][bTG1ASKk] - llKQac + '0';
                            llKQac = (330 - 330);
                        }
                        else {
                            A2iqt5fnzFVp[XcubzY4qS][(286 - 286)][oCYB7mTx] = A2iqt5fnzFVp[XcubzY4qS][(643 - 643)][oCYB7mTx] + (657 - 647) - A2iqt5fnzFVp[XcubzY4qS][(19 - 18)][bTG1ASKk] - llKQac + '0';
                            llKQac = 1;
                        }
                    }
                    else {
                        if (A2iqt5fnzFVp[XcubzY4qS][(701 - 701)][oCYB7mTx] >= llKQac) {
                            A2iqt5fnzFVp[XcubzY4qS][0][oCYB7mTx] = A2iqt5fnzFVp[XcubzY4qS][0][oCYB7mTx] - llKQac;
                            llKQac = 0;
                        }
                        else {
                            A2iqt5fnzFVp[XcubzY4qS][0][oCYB7mTx] = A2iqt5fnzFVp[XcubzY4qS][0][oCYB7mTx] + (48 - 38) - llKQac;
                            llKQac = 1;
                        }
                    }
                    oCYB7mTx--;
                }
            }
            XcubzY4qS++;
        }
    }
    {
        XcubzY4qS = 0;
        while (XcubzY4qS < M01di9yY) {
            if (XcubzY4qS <= M01di9yY -2)
                printf ("%s\n", A2iqt5fnzFVp[XcubzY4qS][0]);
            else
                printf ("%s", A2iqt5fnzFVp[XcubzY4qS][0]);
            XcubzY4qS++;
        }
    }
}

