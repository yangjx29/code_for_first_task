int main () {
    struct   student {
        int kT5Gs0cLXEr;
        int WdRaiz;
        int arWL8juM;
        int V5EV7C;
    };
    struct   student *I17f3m8uQ;
    int FMdFKxWwn, Chl8LsYdTvi, T9blAGO51S28, rs1fz5Aaw8D, MbXw7MGg, XCYdLkhilZx = (356 - 356), hr4lZPRGwm2 = (868 - 868), L9jW1Z = (547 - 547), IpTGWOHhPAw, okOxN8btW, uDcmqjE3e1;
    I17f3m8uQ = (struct   student *) malloc (FMdFKxWwn * sizeof (struct   student));
    scanf ("%d", &FMdFKxWwn);
    for (Chl8LsYdTvi = (554 - 554); FMdFKxWwn > Chl8LsYdTvi; Chl8LsYdTvi = Chl8LsYdTvi +1) {
        scanf ("%d%d%d", &I17f3m8uQ[Chl8LsYdTvi].kT5Gs0cLXEr, &I17f3m8uQ[Chl8LsYdTvi].WdRaiz, &I17f3m8uQ[Chl8LsYdTvi].arWL8juM);
        I17f3m8uQ[Chl8LsYdTvi].V5EV7C = I17f3m8uQ[Chl8LsYdTvi].WdRaiz + I17f3m8uQ[Chl8LsYdTvi].arWL8juM;
    }
    {
        Chl8LsYdTvi = 767 - 767;
        while (FMdFKxWwn > Chl8LsYdTvi) {
            if (XCYdLkhilZx < I17f3m8uQ[Chl8LsYdTvi].V5EV7C) {
                IpTGWOHhPAw = Chl8LsYdTvi;
                XCYdLkhilZx = I17f3m8uQ[Chl8LsYdTvi].V5EV7C;
            }
            Chl8LsYdTvi = Chl8LsYdTvi +1;
        };
    }
    {
        Chl8LsYdTvi = 0;
        while (FMdFKxWwn > Chl8LsYdTvi) {
            if (I17f3m8uQ[Chl8LsYdTvi].V5EV7C <= XCYdLkhilZx &&I17f3m8uQ[Chl8LsYdTvi].V5EV7C > hr4lZPRGwm2 && !(IpTGWOHhPAw == Chl8LsYdTvi)) {
                okOxN8btW = Chl8LsYdTvi;
                hr4lZPRGwm2 = I17f3m8uQ[Chl8LsYdTvi].V5EV7C;
            }
            Chl8LsYdTvi++;
        };
    }
    for (Chl8LsYdTvi = 0; Chl8LsYdTvi < FMdFKxWwn; Chl8LsYdTvi++)
        if (hr4lZPRGwm2 >= I17f3m8uQ[Chl8LsYdTvi].V5EV7C && I17f3m8uQ[Chl8LsYdTvi].V5EV7C > L9jW1Z &&Chl8LsYdTvi != IpTGWOHhPAw &&Chl8LsYdTvi != okOxN8btW) {
            uDcmqjE3e1 = Chl8LsYdTvi;
            L9jW1Z = I17f3m8uQ[Chl8LsYdTvi].V5EV7C;
        }
    printf ("%d %d\n%d %d\n%d %d\n", I17f3m8uQ[IpTGWOHhPAw].kT5Gs0cLXEr, I17f3m8uQ[IpTGWOHhPAw].V5EV7C, I17f3m8uQ[okOxN8btW].kT5Gs0cLXEr, I17f3m8uQ[okOxN8btW].V5EV7C, I17f3m8uQ[uDcmqjE3e1].kT5Gs0cLXEr, I17f3m8uQ[uDcmqjE3e1].V5EV7C);
    return 0;
}

