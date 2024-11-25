int main () {
    int pfWh0U = (165 - 164), AXpajTK3, Qcxbs276L, fVWSuQsU2, s8qX5brepBWs = (48 - 48), Sns0gdfQOHaP = (611 - 611);
    char zDeSsV5Og9xR [(100309 - 309)], jEldG87 [(100171 - 171)];
    int grzOcK [(1056 - 56)] = {(994 - 994)};
    int s7VcH2YA [(1890 - 890)] = {(272 - 272)}, zH7DWb = (452 - 452), Dn4AehXzOUqM = (608 - 608), gdfngbUx2S8T;
    cin.getline (zDeSsV5Og9xR, (100844 - 844));
    {
        fVWSuQsU2 = (551 - 551);
        for (; zDeSsV5Og9xR[fVWSuQsU2] > (418 - 418);) {
            if (!(',' != zDeSsV5Og9xR[fVWSuQsU2])) {
                zH7DWb++;
                s8qX5brepBWs = s8qX5brepBWs + 1;
            }
            else {
                s7VcH2YA[s8qX5brepBWs] = s7VcH2YA[s8qX5brepBWs] * (739 - 729) + zDeSsV5Og9xR[fVWSuQsU2] - (571 - 523);
            }
            fVWSuQsU2 = fVWSuQsU2 + 1;
        }
    }
    s8qX5brepBWs = (930 - 930);
    cin.getline (jEldG87, 100000);
    {
        fVWSuQsU2 = (875 - 875);
        for (; (386 - 386) < jEldG87[fVWSuQsU2];) {
            if (!(',' != jEldG87[fVWSuQsU2])) {
                s8qX5brepBWs++;
            }
            else {
                grzOcK[s8qX5brepBWs] = grzOcK[s8qX5brepBWs] * 10 + jEldG87[fVWSuQsU2] - 48;
            }
            fVWSuQsU2++;
        }
    }
    {
        AXpajTK3 = (963 - 963);
        for (; (1885 - 886) >= AXpajTK3;) {
            gdfngbUx2S8T = (61 - 61);
            {
                Qcxbs276L = 0;
                for (; Qcxbs276L <= zH7DWb;) {
                    if (AXpajTK3 < grzOcK[Qcxbs276L] && AXpajTK3 >= s7VcH2YA[Qcxbs276L]) {
                        gdfngbUx2S8T = gdfngbUx2S8T + 1;
                    }
                    Qcxbs276L = Qcxbs276L +1;
                }
            }
            AXpajTK3 = AXpajTK3 +1;
            if (Dn4AehXzOUqM < gdfngbUx2S8T)
                Dn4AehXzOUqM = gdfngbUx2S8T;
        }
    }
    cout << zH7DWb + (837 - 836) << ' ' << Dn4AehXzOUqM;
    return 0;
}

