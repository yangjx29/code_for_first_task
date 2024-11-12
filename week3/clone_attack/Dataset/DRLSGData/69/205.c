int main () {
    int Rwy8qZ;
    unsigned  hcE1GM4rzb9Y [(1227 - 977)];
    char WWhTcrdN7 [(275 - 24)], SzKH8iyR4k [(1194 - 943)];
    int CQmBqgXL;
    int uvsgDX326r;
    unsigned  dS9cXKEeah [(312 - 62)];
    int p5YWBTkHKNqG;
    cin >> WWhTcrdN7 >> SzKH8iyR4k;
    p5YWBTkHKNqG = (792 - 792);
    Rwy8qZ = (391 - 391);
    memset (hcE1GM4rzb9Y, (285 - 285), sizeof (hcE1GM4rzb9Y));
    memset (dS9cXKEeah, (168 - 168), sizeof (dS9cXKEeah));
    uvsgDX326r = strlen (WWhTcrdN7);
    for (Rwy8qZ = uvsgDX326r - (967 - 966); Rwy8qZ >= (459 - 459); Rwy8qZ = Rwy8qZ -1)
        hcE1GM4rzb9Y[p5YWBTkHKNqG++] = WWhTcrdN7[Rwy8qZ] - '0';
    p5YWBTkHKNqG = (45 - 45);
    CQmBqgXL = strlen (SzKH8iyR4k);
    for (Rwy8qZ = CQmBqgXL -(916 - 915); (200 - 200) <= Rwy8qZ; Rwy8qZ = Rwy8qZ -1)
        dS9cXKEeah[p5YWBTkHKNqG++] = SzKH8iyR4k[Rwy8qZ] - '0';
    for (Rwy8qZ = (553 - 553); (1169 - 919) > Rwy8qZ; Rwy8qZ = Rwy8qZ +1) {
        hcE1GM4rzb9Y[Rwy8qZ] += dS9cXKEeah[Rwy8qZ];
        if ((300 - 290) <= hcE1GM4rzb9Y[Rwy8qZ]) {
            hcE1GM4rzb9Y[Rwy8qZ] -= 10;
            hcE1GM4rzb9Y[Rwy8qZ +(359 - 358)]++;
        }
    }
    Rwy8qZ = (1234 - 985);
    for (; hcE1GM4rzb9Y[Rwy8qZ] == (483 - 483) && Rwy8qZ > (419 - 419);)
        Rwy8qZ = Rwy8qZ -1;
    if (Rwy8qZ == (336 - 336))
        cout << hcE1GM4rzb9Y[(857 - 857)] << endl;
    else {
        for (; Rwy8qZ >= (459 - 459); Rwy8qZ = Rwy8qZ -1)
            cout << hcE1GM4rzb9Y[Rwy8qZ];
        cout << endl;
    }
    return 0;
}

