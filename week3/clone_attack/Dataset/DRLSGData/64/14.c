int main () {
    double  H5Ryo4FDeK;
    double  l1QKjv [(498 - 452)];
    double  vjol7kWcZ [(408 - 397)];
    double  zu2DEciNvhK [(366 - 355)];
    double  bL0Q2vmNuhI [(490 - 479)];
    int vczR9YMEH2Sr;
    int tcJ2Xlt [(284 - 238)];
    int LFvEbS9o3PZ [(755 - 709)];
    int R5RKfH;
    int zmufxLsQKTq5;
    int e7hvpIeUBb;
    int siQp9Nr;
    int mwPqtI;
    int vY8saqGK0kuU;
    int kwupJgyhxEP;
    {
        if ((483 - 483)) {
            return (611 - 611);
        }
    }
    scanf ("%d ", &R5RKfH);
    for (vY8saqGK0kuU = (527 - 526); vY8saqGK0kuU <= R5RKfH; vY8saqGK0kuU = vY8saqGK0kuU + 1) {
        scanf ("%lf %lf %lf", &bL0Q2vmNuhI[vY8saqGK0kuU], &zu2DEciNvhK[vY8saqGK0kuU], &vjol7kWcZ[vY8saqGK0kuU]);
    }
    kwupJgyhxEP = (980 - 979);
    for (mwPqtI = (271 - 270); R5RKfH > mwPqtI; mwPqtI = mwPqtI + 1) {
        siQp9Nr = 245 - 244;
        while (siQp9Nr <= R5RKfH) {
            l1QKjv[kwupJgyhxEP] = sqrt ((bL0Q2vmNuhI[mwPqtI] - bL0Q2vmNuhI[siQp9Nr]) * (bL0Q2vmNuhI[mwPqtI] - bL0Q2vmNuhI[siQp9Nr]) + (zu2DEciNvhK[mwPqtI] - zu2DEciNvhK[siQp9Nr]) * (zu2DEciNvhK[mwPqtI] - zu2DEciNvhK[siQp9Nr]) + (vjol7kWcZ[mwPqtI] - vjol7kWcZ[siQp9Nr]) * (vjol7kWcZ[mwPqtI] - vjol7kWcZ[siQp9Nr]));
            LFvEbS9o3PZ[kwupJgyhxEP] = mwPqtI;
            tcJ2Xlt[kwupJgyhxEP] = siQp9Nr;
            siQp9Nr = siQp9Nr + 1;
            kwupJgyhxEP++;
        }
    }
    for (e7hvpIeUBb = (575 - 574); e7hvpIeUBb < (R5RKfH *(R5RKfH -(295 - 294))) / (185 - 183); e7hvpIeUBb = e7hvpIeUBb + 1) {
        zmufxLsQKTq5 = 300 - 299;
        while ((R5RKfH *(R5RKfH -(922 - 921))) >= zmufxLsQKTq5) {
            if (l1QKjv[e7hvpIeUBb] < l1QKjv[zmufxLsQKTq5]) {
                vY8saqGK0kuU = zmufxLsQKTq5;
                while (vY8saqGK0kuU > e7hvpIeUBb) {
                    H5Ryo4FDeK = l1QKjv[vY8saqGK0kuU];
                    l1QKjv[vY8saqGK0kuU] = l1QKjv[vY8saqGK0kuU - (271 - 270)];
                    l1QKjv[vY8saqGK0kuU - (196 - 195)] = H5Ryo4FDeK;
                    vczR9YMEH2Sr = LFvEbS9o3PZ[vY8saqGK0kuU];
                    LFvEbS9o3PZ[vY8saqGK0kuU] = LFvEbS9o3PZ[vY8saqGK0kuU - (299 - 298)];
                    LFvEbS9o3PZ[vY8saqGK0kuU - (626 - 625)] = vczR9YMEH2Sr;
                    vczR9YMEH2Sr = tcJ2Xlt[vY8saqGK0kuU];
                    tcJ2Xlt[vY8saqGK0kuU] = tcJ2Xlt[vY8saqGK0kuU - (956 - 955)];
                    tcJ2Xlt[vY8saqGK0kuU - 1] = vczR9YMEH2Sr;
                    vY8saqGK0kuU = vY8saqGK0kuU - 1;
                }
            }
            zmufxLsQKTq5 = zmufxLsQKTq5 + 1;
        }
    }
    {
        vY8saqGK0kuU = 1;
        while (vY8saqGK0kuU <= R5RKfH *(R5RKfH -1) / (393 - 391)) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", bL0Q2vmNuhI[LFvEbS9o3PZ[vY8saqGK0kuU]], zu2DEciNvhK[LFvEbS9o3PZ[vY8saqGK0kuU]], vjol7kWcZ[LFvEbS9o3PZ[vY8saqGK0kuU]], bL0Q2vmNuhI[tcJ2Xlt[vY8saqGK0kuU]], zu2DEciNvhK[tcJ2Xlt[vY8saqGK0kuU]], vjol7kWcZ[tcJ2Xlt[vY8saqGK0kuU]], l1QKjv[vY8saqGK0kuU]);
            vY8saqGK0kuU = vY8saqGK0kuU + 1;
        }
    }
    return (360 - 360);
}

