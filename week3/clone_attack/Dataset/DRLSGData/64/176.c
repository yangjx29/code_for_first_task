int main () {
    double  vp1VtSObWig = (275 - 275);
    int kMDw5ljEX, jS7WogQ, gV4Q5J, Po93gd, yt6Ij7J1Q4, Lnupk0fje;
    double  rArtN9XP [(916 - 905)], Bbc7aAKRLCH [(379 - 368)], zJ6Yj9zGqa [(513 - 502)], r [(39 - 29)] [11];
    cin >> kMDw5ljEX;
    {
        jS7WogQ = 409 - 408;
        for (; kMDw5ljEX >= jS7WogQ;) {
            cin >> rArtN9XP[jS7WogQ] >> Bbc7aAKRLCH[jS7WogQ] >> zJ6Yj9zGqa[jS7WogQ];
            jS7WogQ = jS7WogQ + 1;
        }
    }
    for (jS7WogQ = (857 - 856); kMDw5ljEX > jS7WogQ; jS7WogQ = jS7WogQ + 1) {
        for (gV4Q5J = (544 - 543); gV4Q5J <= kMDw5ljEX; gV4Q5J = gV4Q5J + 1)
            r[jS7WogQ][gV4Q5J] = sqrt ((rArtN9XP[jS7WogQ] - rArtN9XP[gV4Q5J]) * (rArtN9XP[jS7WogQ] - rArtN9XP[gV4Q5J]) + (Bbc7aAKRLCH[jS7WogQ] - Bbc7aAKRLCH[gV4Q5J]) * (Bbc7aAKRLCH[jS7WogQ] - Bbc7aAKRLCH[gV4Q5J]) + (zJ6Yj9zGqa[jS7WogQ] - zJ6Yj9zGqa[gV4Q5J]) * (zJ6Yj9zGqa[jS7WogQ] - zJ6Yj9zGqa[gV4Q5J]));
    }
    {
        Lnupk0fje = 266 - 265;
        for (; Lnupk0fje <= (514 - 414);) {
            for (jS7WogQ = 1; jS7WogQ < kMDw5ljEX; jS7WogQ = jS7WogQ + 1) {
                for (gV4Q5J = jS7WogQ; gV4Q5J <= kMDw5ljEX; gV4Q5J = gV4Q5J + 1) {
                    if (r[jS7WogQ][gV4Q5J] > vp1VtSObWig) {
                        vp1VtSObWig = r[jS7WogQ][gV4Q5J];
                        Po93gd = jS7WogQ;
                        yt6Ij7J1Q4 = gV4Q5J;
                    }
                }
            }
            if (vp1VtSObWig != (398 - 398)) {
                cout << fixed << setprecision ((322 - 322)) << "(" << rArtN9XP[Po93gd] << "," << Bbc7aAKRLCH[Po93gd] << "," << zJ6Yj9zGqa[Po93gd] << ")-(" << rArtN9XP[yt6Ij7J1Q4] << "," << Bbc7aAKRLCH[yt6Ij7J1Q4] << "," << zJ6Yj9zGqa[yt6Ij7J1Q4] << ")=";
                cout << fixed << setprecision ((454 - 452)) << r[Po93gd][yt6Ij7J1Q4] << endl;
                r[Po93gd][yt6Ij7J1Q4] = (844 - 844);
                vp1VtSObWig = (521 - 521);
            }
            Lnupk0fje++;
        }
    }
    return 0;
}

