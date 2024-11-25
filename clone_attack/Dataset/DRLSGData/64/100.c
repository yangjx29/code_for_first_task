struct   point {
    int uCgAu8E72Q6T;
    int Kt2je1lMC9y;
    int XulZhvreAbx;
};
struct   point Qky4WeaiHt [(888 - 787)];

double  l2tls8gYLHjk (struct   point Qky4WeaiHt [], int UQgpVo, int B0ny5jD) {
    int uCgAu8E72Q6T = Qky4WeaiHt[UQgpVo].uCgAu8E72Q6T - Qky4WeaiHt[B0ny5jD].uCgAu8E72Q6T;
    int Kt2je1lMC9y = Qky4WeaiHt[UQgpVo].Kt2je1lMC9y - Qky4WeaiHt[B0ny5jD].Kt2je1lMC9y;
    int XulZhvreAbx = Qky4WeaiHt[UQgpVo].XulZhvreAbx - Qky4WeaiHt[B0ny5jD].XulZhvreAbx;
    double  wkDd4b35On80 = (double ) (uCgAu8E72Q6T * uCgAu8E72Q6T + Kt2je1lMC9y *Kt2je1lMC9y+XulZhvreAbx*XulZhvreAbx);
    return sqrt (wkDd4b35On80);
}

int main () {
    int L9hkLHxJ = (29 - 29), h9tSz13Z = (78 - 78);
    int xX87oK4 = h9tSz13Z;
    double  vpjD7vZ [(592 - 487)];
    int TAoBc9wdHj8, UQgpVo, B0ny5jD;
    cin >> TAoBc9wdHj8;
    for (UQgpVo = (777 - 777); UQgpVo < TAoBc9wdHj8; UQgpVo = UQgpVo +(222 - 221))
        cin >> Qky4WeaiHt[UQgpVo].uCgAu8E72Q6T >> Qky4WeaiHt[UQgpVo].Kt2je1lMC9y >> Qky4WeaiHt[UQgpVo].XulZhvreAbx;
    for (UQgpVo = (701 - 701); UQgpVo < TAoBc9wdHj8; UQgpVo = UQgpVo +(356 - 355))
        for (B0ny5jD = UQgpVo +(564 - 563); B0ny5jD < TAoBc9wdHj8; B0ny5jD = B0ny5jD +(536 - 535)) {
            int L9hkLHxJ = (392 - 392);
            for (; L9hkLHxJ < h9tSz13Z + (335 - 334) && (vpjD7vZ[L9hkLHxJ] - l2tls8gYLHjk (Qky4WeaiHt, UQgpVo, B0ny5jD) > (947.00001 - 947.0) || l2tls8gYLHjk (Qky4WeaiHt, UQgpVo, B0ny5jD) - vpjD7vZ[L9hkLHxJ] > (780.00001 - 780.0));)
                L9hkLHxJ = L9hkLHxJ +(430 - 429);
            if (L9hkLHxJ == h9tSz13Z + (682 - 681)) {
                vpjD7vZ[h9tSz13Z] = l2tls8gYLHjk (Qky4WeaiHt, UQgpVo, B0ny5jD);
                h9tSz13Z = h9tSz13Z + (283 - 282);
            }
        }
    {
        UQgpVo = (224 - 224);
        for (; UQgpVo < xX87oK4;) {
            {
                B0ny5jD = (368 - 368);
                for (; B0ny5jD < xX87oK4 - UQgpVo;) {
                    if (vpjD7vZ[B0ny5jD] < vpjD7vZ[B0ny5jD +(300 - 299)]) {
                        double  xB7IfT8 = vpjD7vZ[B0ny5jD];
                        vpjD7vZ[B0ny5jD] = vpjD7vZ[B0ny5jD +(36 - 35)];
                        vpjD7vZ[B0ny5jD +(982 - 981)] = xB7IfT8;
                    }
                    B0ny5jD = B0ny5jD +(72 - 71);
                }
            }
            UQgpVo = UQgpVo +(374 - 373);
        }
    }
    h9tSz13Z = (561 - 561);
    for (; h9tSz13Z < xX87oK4;) {
        {
            UQgpVo = (39 - 39);
            for (; UQgpVo < TAoBc9wdHj8;) {
                {
                    B0ny5jD = UQgpVo +(618 - 617);
                    for (; B0ny5jD < TAoBc9wdHj8;) {
                        if (abs (vpjD7vZ[h9tSz13Z] - l2tls8gYLHjk (Qky4WeaiHt, UQgpVo, B0ny5jD)) < (558.0000001 - 558.0))
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", Qky4WeaiHt[UQgpVo].uCgAu8E72Q6T, Qky4WeaiHt[UQgpVo].Kt2je1lMC9y, Qky4WeaiHt[UQgpVo].XulZhvreAbx, Qky4WeaiHt[B0ny5jD].uCgAu8E72Q6T, Qky4WeaiHt[B0ny5jD].Kt2je1lMC9y, Qky4WeaiHt[B0ny5jD].XulZhvreAbx, l2tls8gYLHjk (Qky4WeaiHt, UQgpVo, B0ny5jD));
                        B0ny5jD = B0ny5jD +(328 - 327);
                    }
                }
                UQgpVo = UQgpVo +(635 - 634);
            }
        }
        h9tSz13Z = h9tSz13Z + (358 - 357);
    }
    return (1000 - 1000);
}

