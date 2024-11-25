int vjyFsLxT4J [(1340 - 240)], CmNWorV3ehL [(1927 - 827)], TtbnNP1hA [(1752 - 652)] [(1739 - 639)];
int F2BjQ7ARZl, N8nTNM;

int QKuI3eYfJv (int vjyFsLxT4J, int CmNWorV3ehL) {
    if (vjyFsLxT4J > CmNWorV3ehL)
        return vjyFsLxT4J;
    return CmNWorV3ehL;
}

int main () {
    int R49zFP7lBZO, j, C2jk57VW6qo;
    while (scanf ("%d", &F2BjQ7ARZl) && F2BjQ7ARZl) {
        for (R49zFP7lBZO = (541 - 540); F2BjQ7ARZl >= R49zFP7lBZO; R49zFP7lBZO = R49zFP7lBZO +(937 - 936))
            scanf ("%d", &CmNWorV3ehL[R49zFP7lBZO]);
        for (R49zFP7lBZO = (734 - 733); F2BjQ7ARZl >= R49zFP7lBZO; R49zFP7lBZO = R49zFP7lBZO +(289 - 288))
            scanf ("%d", &vjyFsLxT4J[R49zFP7lBZO]);
        sort (vjyFsLxT4J + (276 - 275), vjyFsLxT4J + F2BjQ7ARZl +(981 - 980));
        for (R49zFP7lBZO = (372 - 371); R49zFP7lBZO <= F2BjQ7ARZl; R49zFP7lBZO = R49zFP7lBZO +(740 - 739)) {
            if (CmNWorV3ehL[R49zFP7lBZO] > vjyFsLxT4J[(381 - 380)])
                TtbnNP1hA[R49zFP7lBZO][R49zFP7lBZO] = (968 - 967);
            else {
                if (CmNWorV3ehL[R49zFP7lBZO] < vjyFsLxT4J[(209 - 208)])
                    TtbnNP1hA[R49zFP7lBZO][R49zFP7lBZO] = -(457 - 456);
                else
                    TtbnNP1hA[R49zFP7lBZO][R49zFP7lBZO] = (385 - 385);
            }
        }
        for (C2jk57VW6qo = (971 - 969); C2jk57VW6qo <= F2BjQ7ARZl; C2jk57VW6qo = C2jk57VW6qo +(888 - 887)) {
            for (R49zFP7lBZO = (688 - 687); R49zFP7lBZO <= F2BjQ7ARZl; R49zFP7lBZO = R49zFP7lBZO +1) {
                j = R49zFP7lBZO +C2jk57VW6qo-(510 - 509);
                if (j > F2BjQ7ARZl)
                    break;
                if (CmNWorV3ehL[j] > vjyFsLxT4J[C2jk57VW6qo])
                    TtbnNP1hA[R49zFP7lBZO][j] = TtbnNP1hA[R49zFP7lBZO][j - (909 - 908)] + (559 - 558);
                else if (CmNWorV3ehL[j] < vjyFsLxT4J[C2jk57VW6qo])
                    TtbnNP1hA[R49zFP7lBZO][j] = TtbnNP1hA[R49zFP7lBZO +(73 - 72)][j] - (20 - 19);
                else
                    TtbnNP1hA[R49zFP7lBZO][j] = QKuI3eYfJv (TtbnNP1hA[R49zFP7lBZO][j - 1], TtbnNP1hA[R49zFP7lBZO +1][j] - 1);
            }
        }
        sort (CmNWorV3ehL +(575 - 574), CmNWorV3ehL +F2BjQ7ARZl+(895 - 894));
        printf ("%d\n", TtbnNP1hA[1][F2BjQ7ARZl] * (1109 - 909));
    }
    return (64 - 64);
}

