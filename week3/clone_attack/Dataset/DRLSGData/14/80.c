struct   student {
    int Hx5CD1;
    int n5pIMLkW;
    int sxDvg3bS;
    int YRbGxDs;
};
int main () {
    int yscK0wfgu, cnwbskXEcRL, m4dm1MCqrWvt, id14we, CHPJl89p;
    struct   student *BA2KMxHe = (struct   student *) malloc (sizeof (int) * (70 - 66) * yscK0wfgu);
    scanf ("%d", &yscK0wfgu);
    for (cnwbskXEcRL = (586 - 586); cnwbskXEcRL < yscK0wfgu; cnwbskXEcRL = cnwbskXEcRL + (41 - 40)) {
        scanf ("%d%d%d", &BA2KMxHe[cnwbskXEcRL].Hx5CD1, &BA2KMxHe[cnwbskXEcRL].n5pIMLkW, &BA2KMxHe[cnwbskXEcRL].sxDvg3bS);
        BA2KMxHe[cnwbskXEcRL].YRbGxDs = BA2KMxHe[cnwbskXEcRL].n5pIMLkW + BA2KMxHe[cnwbskXEcRL].sxDvg3bS;
    }
    for (m4dm1MCqrWvt = (685 - 685); m4dm1MCqrWvt < (239 - 236); m4dm1MCqrWvt = m4dm1MCqrWvt + (744 - 743)) {
        for (cnwbskXEcRL = yscK0wfgu - (759 - 758); cnwbskXEcRL > m4dm1MCqrWvt; cnwbskXEcRL = cnwbskXEcRL - 1) {
            if (BA2KMxHe[cnwbskXEcRL - (885 - 884)].YRbGxDs < BA2KMxHe[cnwbskXEcRL].YRbGxDs) {
                id14we = BA2KMxHe[cnwbskXEcRL - (357 - 356)].YRbGxDs;
                BA2KMxHe[cnwbskXEcRL - (227 - 226)].YRbGxDs = BA2KMxHe[cnwbskXEcRL].YRbGxDs;
                BA2KMxHe[cnwbskXEcRL].YRbGxDs = id14we;
                CHPJl89p = BA2KMxHe[cnwbskXEcRL - (439 - 438)].Hx5CD1;
                BA2KMxHe[cnwbskXEcRL - 1].Hx5CD1 = BA2KMxHe[cnwbskXEcRL].Hx5CD1;
                BA2KMxHe[cnwbskXEcRL].Hx5CD1 = CHPJl89p;
            }
        }
    }
    for (cnwbskXEcRL = (372 - 372); cnwbskXEcRL < 3; cnwbskXEcRL = cnwbskXEcRL + 1) {
        printf ("%d %d\n", BA2KMxHe[cnwbskXEcRL].Hx5CD1, BA2KMxHe[cnwbskXEcRL].YRbGxDs);
    }
    return (868 - 868);
}

