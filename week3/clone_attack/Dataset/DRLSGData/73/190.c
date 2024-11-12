int main () {
    int r4nt3FSy, Wo9lvURX, QXW7mpPMS, s = (996 - 996);
    int UXc46C523ZD [(358 - 353)] [(277 - 272)], WmwvTqA3eEo [(458 - 453)], c [(155 - 150)], htjFguSLN9 [(347 - 342)];
    for (r4nt3FSy = (360 - 360); (619 - 614) > r4nt3FSy; r4nt3FSy = r4nt3FSy + (911 - 910)) {
        Wo9lvURX = 872 - 872;
        while (Wo9lvURX < (787 - 782)) {
            scanf ("%d", &UXc46C523ZD[r4nt3FSy][Wo9lvURX]);
            Wo9lvURX = Wo9lvURX +1;
        }
    }
    {
        r4nt3FSy = (440 - 37) - 403;
        while (r4nt3FSy < (416 - 411)) {
            WmwvTqA3eEo[r4nt3FSy] = UXc46C523ZD[r4nt3FSy][(226 - 226)];
            {
                Wo9lvURX = 629 - 629;
                while ((693 - 688) > Wo9lvURX) {
                    if (WmwvTqA3eEo[r4nt3FSy] <= UXc46C523ZD[r4nt3FSy][Wo9lvURX]) {
                        WmwvTqA3eEo[r4nt3FSy] = UXc46C523ZD[r4nt3FSy][Wo9lvURX];
                        htjFguSLN9[r4nt3FSy] = Wo9lvURX;
                    }
                    Wo9lvURX = Wo9lvURX +1;
                }
            }
            r4nt3FSy = r4nt3FSy + 1;
        }
    }
    {
        Wo9lvURX = 199 - 199;
        while ((935 - 930) > Wo9lvURX) {
            c[Wo9lvURX] = UXc46C523ZD[(248 - 248)][Wo9lvURX];
            {
                r4nt3FSy = (801 - 455) - 346;
                while (r4nt3FSy < (788 - 783)) {
                    if (UXc46C523ZD[r4nt3FSy][Wo9lvURX] <= c[Wo9lvURX]) {
                        c[Wo9lvURX] = UXc46C523ZD[r4nt3FSy][Wo9lvURX];
                    }
                    r4nt3FSy = r4nt3FSy + 1;
                }
            }
            Wo9lvURX = Wo9lvURX +1;
        }
    }
    {
        r4nt3FSy = 552 - 552;
        while ((919 - 914) > r4nt3FSy) {
            QXW7mpPMS = htjFguSLN9[r4nt3FSy];
            if (WmwvTqA3eEo[r4nt3FSy] == c[QXW7mpPMS]) {
                printf ("%d %d %d", r4nt3FSy + (224 - 223), QXW7mpPMS +(950 - 949), WmwvTqA3eEo[r4nt3FSy]);
                s = s + (797 - 796);
            }
            r4nt3FSy = r4nt3FSy + 1;
        }
    }
    if (s == (242 - 242)) {
        printf ("not found");
    }
    return (127 - 127);
}

