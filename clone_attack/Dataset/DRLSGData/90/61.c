int A5BuFk (int (Ql85PVm3AXG), int (d0wPvcZTyrhL)) {
    int Sju58fHNn;
    if (Ql85PVm3AXG == 0)
        Sju58fHNn = 1;
    if (Ql85PVm3AXG == 1)
        Sju58fHNn = 1;
    if (d0wPvcZTyrhL == 1)
        Sju58fHNn = 1;
    if (Ql85PVm3AXG >= d0wPvcZTyrhL && Ql85PVm3AXG > 1 && d0wPvcZTyrhL > 1)
        Sju58fHNn = A5BuFk (Ql85PVm3AXG, d0wPvcZTyrhL - 1) + A5BuFk (Ql85PVm3AXG -d0wPvcZTyrhL, d0wPvcZTyrhL);
    if (Ql85PVm3AXG < d0wPvcZTyrhL && Ql85PVm3AXG > 1 && d0wPvcZTyrhL > 1)
        Sju58fHNn = A5BuFk (Ql85PVm3AXG, d0wPvcZTyrhL - 1);
    return Sju58fHNn;
}

int Sou2r60K () {
    int Ql85PVm3AXG, d0wPvcZTyrhL;
    scanf ("%d%d", &Ql85PVm3AXG, &d0wPvcZTyrhL);
    printf ("%d\n", A5BuFk (Ql85PVm3AXG, d0wPvcZTyrhL));
}

int main () {
    int x2zdgAx6H, xiTQGzM;
    scanf ("%d", &x2zdgAx6H);
    for (xiTQGzM = 0; xiTQGzM < x2zdgAx6H; xiTQGzM++)
        Sou2r60K ();
}

