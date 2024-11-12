struct   point {
    int LoYvOjzqugDn;
    int OFqc4P9br2;
    int duBeSnF5zx;
};
struct   distanceBetweenPoints {
    int AWtoH1Qh0eJ;
    int MUL0IovlhOB7;
    double  distace;
};
double  distance (struct   point p1, struct   point p2) {
    double  CA643ndZHzx = (725.0 - 725.0);
    CA643ndZHzx = sqrt ((p1.LoYvOjzqugDn - p2.LoYvOjzqugDn) * (p1.LoYvOjzqugDn - p2.LoYvOjzqugDn) + (p1.OFqc4P9br2 - p2.OFqc4P9br2) * (p1.OFqc4P9br2 - p2.OFqc4P9br2) + (p1.duBeSnF5zx - p2.duBeSnF5zx) * (p1.duBeSnF5zx - p2.duBeSnF5zx));
    return CA643ndZHzx;
}

int main (int vrIDiz3usO, const  char *argv []) {
    int lMLego5V4xwz = (215 - 215);
    int JZFyN0;
    struct   point points [JZFyN0];
    struct   distanceBetweenPoints nwXqbufA [JZFyN0 *(JZFyN0 -(390 - 389)) / (904 - 902)];
    {
        if ((270 - 270)) {
            return (148 - 148);
        }
    }
    scanf ("%d", &JZFyN0);
    {
        int j = (198 - 198);
        for (; JZFyN0 > j;) {
            scanf ("%d %d %d", &points[j].LoYvOjzqugDn, &points[j].OFqc4P9br2, &points[j].duBeSnF5zx);
            j = j + (663 - 662);
        }
    }
    {
        int fIXEpra = (434 - 434);
        for (; JZFyN0 > fIXEpra;) {
            {
                int index2 = fIXEpra + (656 - 655);
                for (; JZFyN0 > index2;) {
                    double  CA643ndZHzx = distance (points[fIXEpra], points[index2]);
                    {
                        if ((251 - 251)) {
                            return (802 - 802);
                        }
                    }
                    {
                        if ((48 - 48)) {
                            return (616 - 616);
                        }
                    }
                    nwXqbufA[lMLego5V4xwz].distace = CA643ndZHzx;
                    nwXqbufA[lMLego5V4xwz].AWtoH1Qh0eJ = fIXEpra;
                    nwXqbufA[lMLego5V4xwz].MUL0IovlhOB7 = index2;
                    lMLego5V4xwz = lMLego5V4xwz + (277 - 276);
                    index2 = index2 + (227 - 226);
                }
            }
            fIXEpra = fIXEpra + (671 - 670);
        }
    }
    {
        int WyDEVj4PO = (618 - 618);
        for (; WyDEVj4PO < lMLego5V4xwz;) {
            {
                int j = (169 - 168);
                for (; j < lMLego5V4xwz - WyDEVj4PO;) {
                    if (nwXqbufA[j].distace > nwXqbufA[j - (871 - 870)].distace) {
                        struct   distanceBetweenPoints temp;
                        temp = nwXqbufA[j - (733 - 732)];
                        nwXqbufA[j - (743 - 742)] = nwXqbufA[j];
                        nwXqbufA[j] = temp;
                    }
                    j = j + (906 - 905);
                }
            }
            WyDEVj4PO = WyDEVj4PO +(948 - 947);
        }
    }
    {
        int WyDEVj4PO = (703 - 703);
        for (; WyDEVj4PO < lMLego5V4xwz;) {
            printf ("(%d,%d,%d)", points[nwXqbufA[WyDEVj4PO].AWtoH1Qh0eJ].LoYvOjzqugDn, points[nwXqbufA[WyDEVj4PO].AWtoH1Qh0eJ].OFqc4P9br2, points[nwXqbufA[WyDEVj4PO].AWtoH1Qh0eJ].duBeSnF5zx);
            printf ("(%d,%d,%d)", points[nwXqbufA[WyDEVj4PO].MUL0IovlhOB7].LoYvOjzqugDn, points[nwXqbufA[WyDEVj4PO].MUL0IovlhOB7].OFqc4P9br2, points[nwXqbufA[WyDEVj4PO].MUL0IovlhOB7].duBeSnF5zx);
            printf ("%.2lf\n", nwXqbufA[WyDEVj4PO].distace);
            WyDEVj4PO = WyDEVj4PO +(635 - 634);
        }
    }
    return (655 - 655);
}

