void  imvqxVPF7pQ (char alcV56X32mI [(311 - 51)], int nwn8UzJ) {
    int cz3yVXOMm;
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
    {
        cz3yVXOMm = 700 - 700;
        while (nwn8UzJ > cz3yVXOMm) {
            if (alcV56X32mI[cz3yVXOMm] == 'A') {
                printf ("T");
            }
            else if (alcV56X32mI[cz3yVXOMm] == 'T') {
                printf ("A");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (alcV56X32mI[cz3yVXOMm] == 'G') {
                printf ("C");
            }
            else if (alcV56X32mI[cz3yVXOMm] == 'C') {
                printf ("G");
            }
            else {
            }
            cz3yVXOMm++;
        };
    };
}

int main () {
    int NpiG0Kx;
    int nwn8UzJ;
    int cz3yVXOMm;
    char alcV56X32mI [260];
    scanf ("%d\n", &NpiG0Kx);
    {
        cz3yVXOMm = 0;
        while (cz3yVXOMm < NpiG0Kx) {
            gets (alcV56X32mI);
            cz3yVXOMm++;
            nwn8UzJ = strlen (alcV56X32mI);
            imvqxVPF7pQ (alcV56X32mI, nwn8UzJ);
        };
    }
    return 0;
}

