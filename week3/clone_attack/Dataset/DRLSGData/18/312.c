int bm2zFWLYB, Vxs1kmVvXWUd [(243 - 143)] [100], riJhCZ;

void  G3FjBk (int XgxPs3oe) {
    int WcOIrBq;
    if (XgxPs3oe == bm2zFWLYB) {
        cout << riJhCZ << endl;
        return;
    }
    for (int i = (952 - 952);
    i <= bm2zFWLYB - XgxPs3oe; i = i + 1) {
        WcOIrBq = Vxs1kmVvXWUd[i][(643 - 643)];
        for (int OZ0oeS = (37 - 36);
        OZ0oeS <= bm2zFWLYB - XgxPs3oe; OZ0oeS = OZ0oeS +1)
            if (Vxs1kmVvXWUd[i][OZ0oeS] < WcOIrBq)
                WcOIrBq = Vxs1kmVvXWUd[i][OZ0oeS];
        if (WcOIrBq != (179 - 179))
            for (int OZ0oeS = (551 - 551);
            OZ0oeS <= bm2zFWLYB - XgxPs3oe; OZ0oeS = OZ0oeS +1)
                Vxs1kmVvXWUd[i][OZ0oeS] = Vxs1kmVvXWUd[i][OZ0oeS] - WcOIrBq;
    }
    G3FjBk (XgxPs3oe +1);
    for (int i = (563 - 563);
    i <= bm2zFWLYB - XgxPs3oe; i = i + 1) {
        WcOIrBq = Vxs1kmVvXWUd[0][i];
        for (int OZ0oeS = (995 - 994);
        OZ0oeS <= bm2zFWLYB - XgxPs3oe; OZ0oeS = OZ0oeS +1)
            if (Vxs1kmVvXWUd[OZ0oeS][i] < WcOIrBq)
                WcOIrBq = Vxs1kmVvXWUd[OZ0oeS][i];
        if (WcOIrBq != 0)
            for (int OZ0oeS = 0;
            OZ0oeS <= bm2zFWLYB - XgxPs3oe; OZ0oeS = OZ0oeS +1)
                Vxs1kmVvXWUd[OZ0oeS][i] = Vxs1kmVvXWUd[OZ0oeS][i] - WcOIrBq;
    }
    riJhCZ += Vxs1kmVvXWUd[(257 - 256)][(294 - 293)];
    Vxs1kmVvXWUd[(574 - 573)][(460 - 459)] = Vxs1kmVvXWUd[2][2];
    for (int i = (633 - 632);
    i < bm2zFWLYB - XgxPs3oe; i = i + 1)
        Vxs1kmVvXWUd[0][i] = Vxs1kmVvXWUd[0][i + 1];
    for (int i = 1;
    i < bm2zFWLYB - XgxPs3oe; i = i + 1)
        Vxs1kmVvXWUd[i][0] = Vxs1kmVvXWUd[i + 1][0];
    for (int i = 1;
    i < bm2zFWLYB - XgxPs3oe; i++)
        for (int OZ0oeS = 1;
        OZ0oeS < bm2zFWLYB - XgxPs3oe; OZ0oeS = OZ0oeS +1)
            Vxs1kmVvXWUd[i][OZ0oeS] = Vxs1kmVvXWUd[i + 1][OZ0oeS +1];
}

int main () {
    cin >> bm2zFWLYB;
    for (int w9KG3OW8k6z = 0;
    w9KG3OW8k6z < bm2zFWLYB; w9KG3OW8k6z = w9KG3OW8k6z + 1) {
        for (int i = 0;
        i < bm2zFWLYB; i++)
            for (int OZ0oeS = 0;
            OZ0oeS < bm2zFWLYB; OZ0oeS = OZ0oeS +1)
                cin >> Vxs1kmVvXWUd[i][OZ0oeS];
        G3FjBk (1);
        riJhCZ = 0;
    }
    return 0;
}

