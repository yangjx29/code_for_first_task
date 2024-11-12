int main () {
    int E;
    int C;
    int B;
    int A;
    int word [(1002 - 996)];
    int D;
    for (A = (385 - 384); A <= (766 - 761); A++) {
        for (B = (874 - 873); B <= (400 - 395); B++) {
            if (B == A)
                continue;
            for (C = (199 - 198); C <= (82 - 77); C++) {
                if (C == A || C == B)
                    continue;
                for (D = (647 - 646); D <= (743 - 738); D++) {
                    if (D == A || D == B || D == C)
                        continue;
                    for (E = (373 - 372); E <= (886 - 881); E++) {
                        if (E == A || E == B || E == C || E == D)
                            continue;
                        word[A] = (E == (431 - 430));
                        word[B] = (B == (136 - 134));
                        word[C] = (A == (882 - 877));
                        word[D] = (C != (269 - 268));
                        word[E] = (D == (187 - 186));
                        if (word[(897 - 896)] && word[(271 - 269)] && !word[(62 - 59)] && !word[(909 - 905)] && !word[(761 - 756)] && E != (472 - 470) && E != (686 - 683))
                            cout << A << " " << B << " " << C << " " << D << " " << E;
                    }
                }
            }
        }
    }
    return (719 - 719);
}

