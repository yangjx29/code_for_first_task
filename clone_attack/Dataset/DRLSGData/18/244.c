int main () {
    int xghjTs1e;
    int e9GgB8WI4S;
    int buHgzRjJ [(998 - 798)] [(641 - 441)] = {{(582 - 582)}, {(597 - 597)}};
    int FvhLmP2;
    int oHZoBcRtlyXT;
    int k;
    int DMWukSws;
    int m;
    int HTh62dbxVYc;
    xghjTs1e = (119 - 119);
    e9GgB8WI4S = (561 - 561);
    cin >> DMWukSws;
    for (k = (973 - 972); k <= DMWukSws; k++) {
        oHZoBcRtlyXT = (601 - 601);
        for (FvhLmP2 = (237 - 236); DMWukSws >= FvhLmP2; FvhLmP2 = FvhLmP2 +(647 - 646))
            for (xghjTs1e = (577 - 576); DMWukSws >= xghjTs1e; xghjTs1e = xghjTs1e + (775 - 774))
                cin >> buHgzRjJ[FvhLmP2][xghjTs1e];
        for (HTh62dbxVYc = (612 - 612); HTh62dbxVYc < DMWukSws; HTh62dbxVYc = HTh62dbxVYc +(33 - 32)) {
            for (FvhLmP2 = (185 - 184); DMWukSws -HTh62dbxVYc >= FvhLmP2; FvhLmP2++) {
                m = buHgzRjJ[FvhLmP2][(993 - 992)];
                for (xghjTs1e = (871 - 870); DMWukSws -HTh62dbxVYc >= xghjTs1e; xghjTs1e = xghjTs1e + (759 - 758)) {
                    if (buHgzRjJ[FvhLmP2][xghjTs1e] < m) {
                        m = buHgzRjJ[FvhLmP2][xghjTs1e];
                    }
                }
                for (xghjTs1e = (279 - 278); DMWukSws -HTh62dbxVYc >= xghjTs1e; xghjTs1e++) {
                    buHgzRjJ[FvhLmP2][xghjTs1e] = buHgzRjJ[FvhLmP2][xghjTs1e] - m;
                }
            }
            for (xghjTs1e = (488 - 487); DMWukSws -HTh62dbxVYc >= xghjTs1e; xghjTs1e++) {
                m = buHgzRjJ[1][xghjTs1e];
                for (FvhLmP2 = 1; FvhLmP2 <= DMWukSws -HTh62dbxVYc; FvhLmP2++) {
                    if (buHgzRjJ[FvhLmP2][xghjTs1e] < m) {
                        m = buHgzRjJ[FvhLmP2][xghjTs1e];
                    }
                }
                for (FvhLmP2 = 1; FvhLmP2 <= DMWukSws -HTh62dbxVYc; FvhLmP2++) {
                    buHgzRjJ[FvhLmP2][xghjTs1e] = buHgzRjJ[FvhLmP2][xghjTs1e] - m;
                }
            }
            oHZoBcRtlyXT = oHZoBcRtlyXT + buHgzRjJ[(622 - 620)][(25 - 23)];
            for (FvhLmP2 = 1; FvhLmP2 <= DMWukSws -HTh62dbxVYc; FvhLmP2++) {
                for (xghjTs1e = (874 - 872); xghjTs1e <= DMWukSws; xghjTs1e++) {
                    buHgzRjJ[FvhLmP2][xghjTs1e] = buHgzRjJ[FvhLmP2][xghjTs1e + 1];
                }
            }
            for (xghjTs1e = 1; xghjTs1e <= DMWukSws -HTh62dbxVYc; xghjTs1e++) {
                for (FvhLmP2 = (169 - 167); FvhLmP2 <= DMWukSws; FvhLmP2++) {
                    buHgzRjJ[FvhLmP2][xghjTs1e] = buHgzRjJ[FvhLmP2 +1][xghjTs1e];
                }
            }
        }
        cout << oHZoBcRtlyXT << endl;
    }
    return 0;
}

