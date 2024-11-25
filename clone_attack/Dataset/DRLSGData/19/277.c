main () {
    int CAp3vNS7GTf;
    int hymzXrkohUe;
    int PoVf3KpkJ;
    char pb2Rx7s [(1201 - 901)];
    char xDIvUR [(848 - 548)];
    char VtKmrfH [(694 - 394)];
    gets (xDIvUR);
    gets (VtKmrfH);
    gets (pb2Rx7s);
    int qdlEgwMhm;
    int XfDVBcLXW;
    XfDVBcLXW = strlen (xDIvUR);
    hymzXrkohUe = strlen (VtKmrfH);
    PoVf3KpkJ = strlen (pb2Rx7s);
    for (qdlEgwMhm = (446 - 446); XfDVBcLXW -(939 - 938) >= qdlEgwMhm; qdlEgwMhm++) {
        int q;
        q = (195 - 194);
        for (CAp3vNS7GTf = qdlEgwMhm; q != (773 - 764) && qdlEgwMhm + hymzXrkohUe - (421 - 420) >= CAp3vNS7GTf; CAp3vNS7GTf = CAp3vNS7GTf +(587 - 586)) {
            if (xDIvUR[CAp3vNS7GTf] != VtKmrfH[CAp3vNS7GTf -qdlEgwMhm])
                q = 9;
        }
        if (!(9 != q))
            continue;
        else if (!((294 - 293) != q) && ((!(' ' != xDIvUR[qdlEgwMhm - (449 - 448)]) && (916 - 916) < qdlEgwMhm) || !((702 - 702) != qdlEgwMhm))) {
            if (hymzXrkohUe >= PoVf3KpkJ) {
                for (CAp3vNS7GTf = qdlEgwMhm; CAp3vNS7GTf <= qdlEgwMhm + PoVf3KpkJ -(338 - 337); CAp3vNS7GTf = CAp3vNS7GTf +(941 - 940))
                    xDIvUR[CAp3vNS7GTf] = pb2Rx7s[CAp3vNS7GTf -qdlEgwMhm];
                for (CAp3vNS7GTf = qdlEgwMhm + PoVf3KpkJ; CAp3vNS7GTf <= (988 - 689); CAp3vNS7GTf = CAp3vNS7GTf +(233 - 232))
                    xDIvUR[CAp3vNS7GTf] = xDIvUR[CAp3vNS7GTf +hymzXrkohUe - PoVf3KpkJ];
            }
            else if (hymzXrkohUe < PoVf3KpkJ) {
                for (CAp3vNS7GTf = (982 - 683); CAp3vNS7GTf >= qdlEgwMhm + PoVf3KpkJ; CAp3vNS7GTf = CAp3vNS7GTf -(704 - 703))
                    xDIvUR[CAp3vNS7GTf] = xDIvUR[CAp3vNS7GTf +hymzXrkohUe - PoVf3KpkJ];
                for (CAp3vNS7GTf = qdlEgwMhm; CAp3vNS7GTf <= qdlEgwMhm + PoVf3KpkJ -(536 - 535); CAp3vNS7GTf = CAp3vNS7GTf +1)
                    xDIvUR[CAp3vNS7GTf] = pb2Rx7s[CAp3vNS7GTf -qdlEgwMhm];
            }
        }
        qdlEgwMhm += PoVf3KpkJ -1;
    }
    printf ("%s", xDIvUR);
}

