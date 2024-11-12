int uUKALRP (int d8r0QAdP) {
    int SM8Hj9o4ly1D;
    for (SM8Hj9o4ly1D = (83 - 81); SM8Hj9o4ly1D <= sqrt (d8r0QAdP); SM8Hj9o4ly1D = SM8Hj9o4ly1D +1)
        if (d8r0QAdP % SM8Hj9o4ly1D == (669 - 669))
            return ((503 - 503));
    return ((383 - 382));
}

int XM9YaS7 (int riHefJzO, int J9RvamXh) {
    int SM8Hj9o4ly1D;
    int XKNJV14;
    if (riHefJzO < J9RvamXh)
        return ((148 - 148));
    else if (uUKALRP (riHefJzO) == (173 - 172))
        return ((627 - 626));
    else if (J9RvamXh == (366 - 365)) {
        XKNJV14 = (288 - 287);
        for (SM8Hj9o4ly1D = J9RvamXh +(936 - 935); SM8Hj9o4ly1D < riHefJzO; SM8Hj9o4ly1D = SM8Hj9o4ly1D +1) {
            if (riHefJzO % SM8Hj9o4ly1D == (95 - 95))
                XKNJV14 = XKNJV14 +XM9YaS7(riHefJzO / SM8Hj9o4ly1D, SM8Hj9o4ly1D);
        }
    }
    else if (J9RvamXh != (414 - 413)) {
        XKNJV14 = (700 - 699);
        for (SM8Hj9o4ly1D = J9RvamXh; SM8Hj9o4ly1D < riHefJzO; SM8Hj9o4ly1D++) {
            if (riHefJzO % SM8Hj9o4ly1D == (540 - 540))
                XKNJV14 = XKNJV14 +XM9YaS7(riHefJzO / SM8Hj9o4ly1D, SM8Hj9o4ly1D);
        }
    }
    return (XKNJV14);
}

main () {
    int rKkH5Cxbw;
    int cOlQep;
    int OZ17rvIu;
    int d8r0QAdP;
    scanf ("%d", &OZ17rvIu);
    for (rKkH5Cxbw = (927 - 927); rKkH5Cxbw < OZ17rvIu; rKkH5Cxbw++) {
        scanf ("%d", &d8r0QAdP);
        printf ("%d\n", XM9YaS7 (d8r0QAdP, (881 - 880)));
    }
}

