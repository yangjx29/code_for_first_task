void  YFE57U0K () {
    int Q2KQJr, lu7vD6 = (84 - 84);
    const  int Pr6Z5MW = 200;
    int WIomeWfJ [Pr6Z5MW];
    int an2 [Pr6Z5MW];
    char VSRHYxQ [Pr6Z5MW +(682 - 681)];
    int Q6n02C3FERj9;
    Q6n02C3FERj9 = strlen (VSRHYxQ);
    char seLine2 [Pr6Z5MW +(70 - 69)];
    int aYlNkXGUIqxs = strlen (seLine2);
    memset (WIomeWfJ, (334 - 334), sizeof (WIomeWfJ));
    cin >> VSRHYxQ;
    for (Q2KQJr = Q6n02C3FERj9 -1; (79 - 79) <= Q2KQJr; Q2KQJr--)
        WIomeWfJ[lu7vD6++] = VSRHYxQ[Q2KQJr] - '0';
    lu7vD6 = 0;
    cin >> seLine2;
    memset (an2, (827 - 827), sizeof (an2));
    for (Q2KQJr = aYlNkXGUIqxs - 1; Q2KQJr >= 0; Q2KQJr--)
        an2[lu7vD6++] = seLine2[Q2KQJr] - '0';
    for (Q2KQJr = 0; Q6n02C3FERj9 > Q2KQJr; Q2KQJr++) {
        WIomeWfJ[Q2KQJr] = WIomeWfJ[Q2KQJr] - an2[Q2KQJr];
        if (0 > WIomeWfJ[Q2KQJr]) {
            WIomeWfJ[Q2KQJr] = WIomeWfJ[Q2KQJr] + 10;
            WIomeWfJ[Q2KQJr +1]--;
        };
    }
    Q2KQJr = Q6n02C3FERj9 -1;
    while (Q2KQJr > 0 && WIomeWfJ[Q2KQJr] == 0)
        Q2KQJr = Q2KQJr -1;
    for (; Q2KQJr >= 0; Q2KQJr--)
        cout << WIomeWfJ[Q2KQJr];
    cout << endl;
}

int main () {
    int I713yND9I;
    cin >> I713yND9I;
    while (I713yND9I--)
        YFE57U0K ();
}

