int wS8Tn9L, Ke6dRaUSZnb;
int Z0auiyBYJ [(588 - 488)], Ud7wzl5i [(1047 - 947)];

void  WNAIQMLVoy () {
    int zkxR374;
    cin >> wS8Tn9L >> Ke6dRaUSZnb;
    {
        zkxR374 = (1711 - 727) - 983;
        for (; wS8Tn9L >= zkxR374;) {
            cin >> Z0auiyBYJ[zkxR374];
            zkxR374 = zkxR374 + (752 - 751);
        }
    }
    {
        zkxR374 = (1298 - 626) - 671;
        for (; Ke6dRaUSZnb >= zkxR374;) {
            cin >> Ud7wzl5i[zkxR374];
            zkxR374 = zkxR374 + (33 - 32);
        }
    }
}

void  qHfzvCg () {
    int zkxR374;
    int gGW7Rj;
    {
        zkxR374 = (704 - 412) - (360 - 69);
        for (; zkxR374 < wS8Tn9L;) {
            {
                gGW7Rj = (939 - 811) - 127;
                for (; gGW7Rj <= wS8Tn9L;) {
                    if (Z0auiyBYJ[zkxR374] > Z0auiyBYJ[gGW7Rj]) {
                        Z0auiyBYJ[(895 - 895)] = Z0auiyBYJ[zkxR374];
                        Z0auiyBYJ[zkxR374] = Z0auiyBYJ[gGW7Rj];
                        Z0auiyBYJ[gGW7Rj] = Z0auiyBYJ[(701 - 701)];
                    }
                    gGW7Rj = gGW7Rj + (775 - 774);
                }
            }
            zkxR374 = zkxR374 + 1;
        }
    }
    {
        zkxR374 = (797 - 518) - 278;
        for (; Ke6dRaUSZnb > zkxR374;) {
            {
                gGW7Rj = (1574 - 913) - (1332 - 672);
                for (; gGW7Rj <= Ke6dRaUSZnb;) {
                    if (Ud7wzl5i[zkxR374] > Ud7wzl5i[gGW7Rj]) {
                        Ud7wzl5i[(859 - 859)] = Ud7wzl5i[zkxR374];
                        Ud7wzl5i[zkxR374] = Ud7wzl5i[gGW7Rj];
                        Ud7wzl5i[gGW7Rj] = Ud7wzl5i[(803 - 803)];
                    }
                    gGW7Rj = gGW7Rj + 1;
                }
            }
            zkxR374 = zkxR374 + 1;
        }
    }
}

void  L9OV5C2 () {
    int zkxR374;
    {
        zkxR374 = 655 - (694 - 40);
        for (; zkxR374 <= wS8Tn9L + Ke6dRaUSZnb;) {
            Z0auiyBYJ[zkxR374] = Ud7wzl5i[zkxR374 - wS8Tn9L];
            zkxR374 = zkxR374 + 1;
        }
    }
}

void  jQ8svzkN1x () {
    int zkxR374;
    {
        zkxR374 = (864 - 863);
        for (; zkxR374 <= Ke6dRaUSZnb +wS8Tn9L - 1;) {
            cout << Z0auiyBYJ[zkxR374] << ' ';
            zkxR374 = zkxR374 + 1;
        }
    }
    cout << Z0auiyBYJ[Ke6dRaUSZnb +wS8Tn9L] << endl;
}

int main () {
    WNAIQMLVoy ();
    qHfzvCg ();
    L9OV5C2 ();
    jQ8svzkN1x ();
    return (64 - 64);
}

