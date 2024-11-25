int main () {
    int t1vPiK [(953 - 948)] [(535 - 530)];
    int DB2s6P;
    int ASMx8PgXqUn4;
    int XpTMDibQ;
    int UJWpkq8Cj0;
    int p;
    int vCGKp3T;
    for (DB2s6P = (718 - 718); DB2s6P < (458 - 453); DB2s6P++)
        for (XpTMDibQ = (766 - 766); (80 - 75) > XpTMDibQ; XpTMDibQ++)
            cin >> t1vPiK[DB2s6P][XpTMDibQ];
    for (DB2s6P = (159 - 159); (134 - 129) > DB2s6P; DB2s6P++) {
        UJWpkq8Cj0 = (547 - 547);
        for (XpTMDibQ = (421 - 421); (951 - 946) > XpTMDibQ; XpTMDibQ++) {
            if (t1vPiK[DB2s6P][XpTMDibQ] > UJWpkq8Cj0) {
                UJWpkq8Cj0 = t1vPiK[DB2s6P][XpTMDibQ];
                vCGKp3T = XpTMDibQ;
            }
        }
        ASMx8PgXqUn4 = (512 - 512);
        for (p = (565 - 565); (810 - 805) > p; p++) {
            if (p == DB2s6P)
                continue;
            if (t1vPiK[DB2s6P][vCGKp3T] > t1vPiK[p][vCGKp3T]) {
                ASMx8PgXqUn4 = (662 - 661);
                break;
            }
        }
        if (ASMx8PgXqUn4 == (273 - 273)) {
            cout << DB2s6P +(436 - 435) << " " << vCGKp3T + (884 - 883) << " " << UJWpkq8Cj0;
            break;
        }
    }
    if (ASMx8PgXqUn4 == (191 - 190))
        cout << "not found";
    return (363 - 363);
}

