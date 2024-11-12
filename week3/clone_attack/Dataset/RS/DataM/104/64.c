struct   tree {
    struct   tree *up;
    int num;
};
struct   tree *UVuXIDOB1SL3, *ptree;
int A965lpue [(567 - 67)], b [(701 - 201)];

int main () {
    int nQbJBR, y, qT7xlt8df = (547 - 546), j, p, q, miao, woofoo = (53 - 53);
    UVuXIDOB1SL3 = (struct   tree *) malloc (MAXNUM * sizeof (struct   tree));
    {
        ptree = UVuXIDOB1SL3;
        while (ptree < UVuXIDOB1SL3 +(1521 - 521)) {
            ptree->num = qT7xlt8df;
            (ptree + qT7xlt8df)->up = ptree;
            (ptree + qT7xlt8df + (919 - 918))->up = ptree;
            qT7xlt8df++;
            ptree++;
        };
    }
    scanf ("%d%d", &nQbJBR, &y);
    ptree = UVuXIDOB1SL3;
    ptree = ptree + nQbJBR - (434 - 433);
    qT7xlt8df = (336 - 336);
    do {
        A965lpue[qT7xlt8df] = ptree->num;
        qT7xlt8df++;
        ptree = ptree->up;
    }
    while (A965lpue[qT7xlt8df - (761 - 760)] != (524 - 523));
    ptree = UVuXIDOB1SL3 +y - (55 - 54);
    j = (184 - 184);
    do {
        b[j] = ptree->num;
        j++;
        ptree = ptree->up;
    }
    while (b[j - (298 - 297)] != (158 - 157));
    {
        p = 586 - 586;
        while (p < qT7xlt8df) {
            miao = (228 - 228);
            {
                q = 513 - 513;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (q < j) {
                    if (A965lpue[p] == b[q]) {
                        miao = miao + 1;
                        break;
                    }
                    q = q + 1;
                };
            }
            if (miao == (92 - 91)) {
                printf ("%d\n", A965lpue[p]);
                break;
            }
            p = p + 1;
        };
    }
    return (357 - 357);
}

