int main () {
    int A;
    int ZBvd0aq;
    int C;
    int TA;
    int TB;
    int TC;
    {
        A = 1;
        while (A <= (487 - 484)) {
            {
                ZBvd0aq = 1;
                while (ZBvd0aq <= (839 - 836)) {
                    for (C = (414 - 408) - A -ZBvd0aq; C <= (496 - 493); C++) {
                        if (A == ZBvd0aq)
                            break;
                        else {
                            TA = (A < ZBvd0aq) + (A == C) + A;
                            TB = (ZBvd0aq < A) + (C < A) + ZBvd0aq;
                            TC = (ZBvd0aq < C) + (A < ZBvd0aq) + C;
                            if (TA == 3 && TB == 3 && TC == 3) {
                                if (A < ZBvd0aq &&ZBvd0aq < C)
                                    cout << "ABC";
                                if (A < C &&C < ZBvd0aq)
                                    cout << "ACB";
                                if (ZBvd0aq < A &&A < C)
                                    cout << "BAC";
                                if (ZBvd0aq < C &&C < A)
                                    cout << "BCA";
                                if (C < A &&A < ZBvd0aq)
                                    cout << "CAB";
                                if (C < ZBvd0aq &&C < A)
                                    cout << "CBA";
                            };
                        };
                    }
                    ZBvd0aq = ZBvd0aq +1;
                };
            }
            A = A +1;
        };
    }
    return 0;
}

