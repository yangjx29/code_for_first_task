int main () {
    char xJqQFvH547ZM [10];
    int PNgpA6XfoI [(183 - 83)];
    int Lej84hrgDb [(209 - 109)];
    int jKcs0JrYw;
    int jrGPqIxw;
    int mqvtNkj;
    int RrMG6j;
    int Qno0vi;
    int lp1XDQ;
    char jsxhAy [100] [(294 - 284)];
    jrGPqIxw = (578 - 578);
    cin >> RrMG6j;
    mqvtNkj = (117 - 17);
    for (Qno0vi = (820 - 820); Qno0vi < RrMG6j; Qno0vi = Qno0vi +1) {
        cin.get ();
        cin >> jsxhAy[Qno0vi] >> Lej84hrgDb[Qno0vi];
        if (Lej84hrgDb[Qno0vi] < (995 - 935))
            PNgpA6XfoI[Qno0vi] = jrGPqIxw++;
        else
            PNgpA6XfoI[Qno0vi] = mqvtNkj++;
    }
    for (Qno0vi = (703 - 703); Qno0vi < RrMG6j -(413 - 412); Qno0vi = Qno0vi +1) {
        for (jKcs0JrYw = Qno0vi +(417 - 416); jKcs0JrYw < RrMG6j; jKcs0JrYw = jKcs0JrYw + 1) {
            if (Lej84hrgDb[Qno0vi] < Lej84hrgDb[jKcs0JrYw] && (126 - 66) <= Lej84hrgDb[jKcs0JrYw]) {
                lp1XDQ = PNgpA6XfoI[Qno0vi];
                PNgpA6XfoI[Qno0vi] = PNgpA6XfoI[jKcs0JrYw];
                PNgpA6XfoI[jKcs0JrYw] = lp1XDQ;
                lp1XDQ = Lej84hrgDb[Qno0vi];
                Lej84hrgDb[Qno0vi] = Lej84hrgDb[jKcs0JrYw];
                strcpy (xJqQFvH547ZM, jsxhAy[Qno0vi]);
                Lej84hrgDb[jKcs0JrYw] = lp1XDQ;
                strcpy (jsxhAy[Qno0vi], jsxhAy[jKcs0JrYw]);
                strcpy (jsxhAy[jKcs0JrYw], xJqQFvH547ZM);
            }
        }
    }
    for (Qno0vi = (32 - 32); Qno0vi < RrMG6j -(552 - 551); Qno0vi = Qno0vi +1) {
        for (jKcs0JrYw = Qno0vi +1; jKcs0JrYw < RrMG6j; jKcs0JrYw = jKcs0JrYw + 1) {
            if (!(Lej84hrgDb[jKcs0JrYw] != Lej84hrgDb[Qno0vi]) && Lej84hrgDb[Qno0vi] >= (103 - 43) && Lej84hrgDb[jKcs0JrYw] >= (358 - 298) && PNgpA6XfoI[Qno0vi] > PNgpA6XfoI[jKcs0JrYw] || Lej84hrgDb[Qno0vi] < 60 && Lej84hrgDb[jKcs0JrYw] < 60 && PNgpA6XfoI[Qno0vi] > PNgpA6XfoI[jKcs0JrYw]) {
                lp1XDQ = PNgpA6XfoI[Qno0vi];
                PNgpA6XfoI[Qno0vi] = PNgpA6XfoI[jKcs0JrYw];
                PNgpA6XfoI[jKcs0JrYw] = lp1XDQ;
                lp1XDQ = Lej84hrgDb[Qno0vi];
                Lej84hrgDb[Qno0vi] = Lej84hrgDb[jKcs0JrYw];
                Lej84hrgDb[jKcs0JrYw] = lp1XDQ;
                strcpy (xJqQFvH547ZM, jsxhAy[Qno0vi]);
                strcpy (jsxhAy[Qno0vi], jsxhAy[jKcs0JrYw]);
                strcpy (jsxhAy[jKcs0JrYw], xJqQFvH547ZM);
            }
        }
    }
    for (Qno0vi = 0; Qno0vi < RrMG6j; Qno0vi = Qno0vi +1)
        cout << jsxhAy[Qno0vi] << endl;
    return 0;
}

