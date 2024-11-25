int BfDQFJ4xAPR (int M1F4jZeHC0v, int VLYnC0HqJ, int ini) {
    int p, N1Lt647pcDo = 0, VfzChFgxl;
    VfzChFgxl = M1F4jZeHC0v / VLYnC0HqJ;
    if (2 < VLYnC0HqJ) {
        p = ini;
        for (; VfzChFgxl >= p;) {
            N1Lt647pcDo = N1Lt647pcDo +BfDQFJ4xAPR(M1F4jZeHC0v -p, VLYnC0HqJ -1, p);
            p = p + 1;
        }
    }
    else if (!(2 != VLYnC0HqJ)) {
        N1Lt647pcDo = M1F4jZeHC0v / 2 - ini + 1;
    }
    else if (!(1 != VLYnC0HqJ)) {
        N1Lt647pcDo = 1;
    }
    return N1Lt647pcDo;
}

int e4KWsE1JDBT (int M1F4jZeHC0v, int pUBNipv62C) {
    int uqVLifkRa, QpIoWrd5 = 0;
    {
        {
            if (0) {
                return 0;
            }
        }
        uqVLifkRa = 1;
        for (; uqVLifkRa <= pUBNipv62C;) {
            QpIoWrd5 += BfDQFJ4xAPR (M1F4jZeHC0v, uqVLifkRa, 1);
            uqVLifkRa = uqVLifkRa + 1;
        }
    }
    return QpIoWrd5;
}

int main () {
    int kJxb67KdE, pUBNipv62C, eV9zQPuXLoG;
    int N1Lt647pcDo, Qz9usv1XC, ihKYrRyQCMo;
    scanf ("%d", &N1Lt647pcDo);
    for (kJxb67KdE = 0; kJxb67KdE < N1Lt647pcDo; kJxb67KdE = kJxb67KdE + 1) {
        if (kJxb67KdE != 0) {
        }
        eV9zQPuXLoG = 0;
        scanf ("%d%d", &Qz9usv1XC, &ihKYrRyQCMo);
        if (Qz9usv1XC > ihKYrRyQCMo) {
            pUBNipv62C = ihKYrRyQCMo;
        }
        else {
            pUBNipv62C = Qz9usv1XC;
        }
        eV9zQPuXLoG = e4KWsE1JDBT (Qz9usv1XC, pUBNipv62C);
        {
            if (0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        printf ("%d", eV9zQPuXLoG);
    }
    return 0;
}

