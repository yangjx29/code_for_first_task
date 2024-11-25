struct   student {
    char aRW0kzPl56c [(964 - 864)];
    struct   student *qd23f0ixMIHl;
};
struct   student *at6UVYqe18Xj () {
    struct   student *vxUDnPvKWf;
    struct   student *sEoYH6ORpn2;
    struct   student *jjuD9VYy;
    sEoYH6ORpn2 = (struct   student *) malloc (len);
    gets (sEoYH6ORpn2->aRW0kzPl56c);
    sEoYH6ORpn2->qd23f0ixMIHl = null;
    do {
        jjuD9VYy = (struct   student *) malloc (len);
        gets (jjuD9VYy->aRW0kzPl56c);
        jjuD9VYy->qd23f0ixMIHl = sEoYH6ORpn2;
        sEoYH6ORpn2 = jjuD9VYy;
    }
    while (strcmp (jjuD9VYy->aRW0kzPl56c, "end"));
    vxUDnPvKWf = jjuD9VYy;
    return (vxUDnPvKWf);
}

void  main () {
    struct   student *M1NZsQqVFitO;
    struct   student *vxUDnPvKWf;
    vxUDnPvKWf = at6UVYqe18Xj ();
    M1NZsQqVFitO = vxUDnPvKWf;
    for (; M1NZsQqVFitO->qd23f0ixMIHl;) {
        M1NZsQqVFitO = M1NZsQqVFitO->qd23f0ixMIHl;
        printf ("%s\n", M1NZsQqVFitO->aRW0kzPl56c);
    }
}

