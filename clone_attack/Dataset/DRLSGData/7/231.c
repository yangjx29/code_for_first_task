int main () {
    int gyRrUAi4ISz;
    char zZPTOmD [(628 - 372)], UknYpJ7Pev [(729 - 473)], FN0D8kb9U [(801 - 545)];
    gets (zZPTOmD), gets (UknYpJ7Pev), gets (FN0D8kb9U);
    int XTes7L;
    int Ab1BG3J;
    int fhUROt;
    int Sy20ev;
    fhUROt = strlen (zZPTOmD);
    Sy20ev = strlen (UknYpJ7Pev);
    {
        XTes7L = 755 - 755;
        while (fhUROt - Sy20ev >= XTes7L) {
            {
                gyRrUAi4ISz = 446 - 446;
                while (gyRrUAi4ISz < Sy20ev) {
                    if (zZPTOmD[XTes7L +gyRrUAi4ISz] != UknYpJ7Pev[gyRrUAi4ISz])
                        break;
                    gyRrUAi4ISz++;
                }
            }
            if (!(Sy20ev != gyRrUAi4ISz)) {
                {
                    Ab1BG3J = 127 - 127;
                    while (gyRrUAi4ISz > Ab1BG3J) {
                        zZPTOmD[XTes7L +Ab1BG3J] = '@';
                        Ab1BG3J++;
                    }
                }
                XTes7L = XTes7L +gyRrUAi4ISz - 1;
                break;
            }
            XTes7L++;
        }
    }
    {
        XTes7L = 558 - 558;
        while (fhUROt > XTes7L) {
            if (zZPTOmD[XTes7L] == '@') {
                printf ("%s", FN0D8kb9U);
                while (zZPTOmD[XTes7L] == '@')
                    XTes7L++;
                XTes7L--;
            }
            else {
                printf ("%c", zZPTOmD[XTes7L]);
            }
            XTes7L++;
        }
    }
    return 0;
}

