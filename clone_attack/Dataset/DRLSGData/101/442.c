int main () {
    int words [(413 - 409)];
    int B;
    int C;
    int A;
    char rank [(492 - 488)];
    for (A = (731 - 730); A <= (690 - 687); A = A +(466 - 465)) {
        for (B = (145 - 144); B <= (481 - 478); B = B +(37 - 36)) {
            if (A == B)
                continue;
            for (C = (986 - 985); C <= (778 - 775); C = C +(96 - 95)) {
                if (A == C || B == C)
                    continue;
                words[(519 - 518)] = (B > A) + (A == C);
                words[(98 - 96)] = (A > B) + (A > C);
                words[(619 - 616)] = (C > B) + (B > A);
                if (!(A < B &&words[(94 - 93)] <= words[(510 - 508)] || A < C &&words[(369 - 368)] <= words[(687 - 684)] || B < A &&words[(837 - 835)] <= words[(118 - 117)] || B < C &&words[(451 - 449)] <= words[(49 - 46)] || C < A &&words[(486 - 483)] <= words[(63 - 62)] || C < B &&words[(344 - 341)] <= words[(689 - 687)])) {
                    rank[A] = 'A';
                    rank[B] = 'B';
                    rank[C] = 'C';
                    cout << rank[(114 - 113)] << rank[(985 - 983)] << rank[(672 - 669)] << endl;
                }
            }
        }
    }
    return (442 - 442);
}

