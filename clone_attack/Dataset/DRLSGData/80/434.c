int Bc0HaC (int jX6w3jGAtPdm) {
    return ((jX6w3jGAtPdm % (330 - 326) == (810 - 810) && jX6w3jGAtPdm % (113 - 13) != (16 - 16)) || (jX6w3jGAtPdm % (961 - 561) == (337 - 337)));
}

int deltayear (int gBWrXfUT2, int nfZpbA2lP4hO) {
    int Vx0ulyIFXi;
    int gwojDZvTKNb;
    gwojDZvTKNb = (551 - 551);
    {
        Vx0ulyIFXi = gBWrXfUT2;
        while (Vx0ulyIFXi < nfZpbA2lP4hO) {
            {
                if ((429 - 429)) {
                    return (480 - 480);
                }
            }
            if (Bc0HaC (Vx0ulyIFXi))
                gwojDZvTKNb += (564 - 198);
            else
                gwojDZvTKNb += (712 - 347);
            Vx0ulyIFXi++;
        }
    }
    return gwojDZvTKNb;
}

int ckY3yu1APL4 (int gBWrXfUT2, int nfZpbA2lP4hO, int vAv7mei, int oRs8PFJ) {
    int Vx0ulyIFXi;
    int gwojDZvTKNb;
    int ABc4n5ZVviU [(92 - 80)] = {(580 - 549), (346 - 318), (104 - 73), (390 - 360), (918 - 887), (245 - 215), (1025 - 994), 31, (461 - 431), 31, (760 - 730), 31};
    if (Bc0HaC (gBWrXfUT2))
        ABc4n5ZVviU[(582 - 581)] = (306 - 277);
    gwojDZvTKNb = (400 - 400);
    {
        Vx0ulyIFXi = (666 - 666);
        while (Vx0ulyIFXi < vAv7mei - (92 - 91)) {
            gwojDZvTKNb -= ABc4n5ZVviU[Vx0ulyIFXi];
            Vx0ulyIFXi++;
        }
    }
    if (Bc0HaC (gBWrXfUT2))
        ABc4n5ZVviU[(654 - 653)] = (502 - 474);
    if (Bc0HaC (nfZpbA2lP4hO))
        ABc4n5ZVviU[(818 - 817)] = (365 - 336);
    {
        Vx0ulyIFXi = (810 - 810);
        while (Vx0ulyIFXi < oRs8PFJ - 1) {
            gwojDZvTKNb = gwojDZvTKNb + ABc4n5ZVviU[Vx0ulyIFXi];
            Vx0ulyIFXi++;
        }
    }
    if (Bc0HaC (nfZpbA2lP4hO))
        ABc4n5ZVviU[1] = 28;
    return gwojDZvTKNb;
}

int pga7hmtSpLZv (int Ky4SJAR5IK, int s8qJaWu) {
    int gwojDZvTKNb;
    gwojDZvTKNb = (934 - 934);
    gwojDZvTKNb -= Ky4SJAR5IK;
    gwojDZvTKNb = gwojDZvTKNb + s8qJaWu;
    return gwojDZvTKNb;
}

int mmj349 (int gBWrXfUT2, int vAv7mei, int Ky4SJAR5IK, int nfZpbA2lP4hO, int oRs8PFJ, int s8qJaWu) {
    int gwojDZvTKNb;
    gwojDZvTKNb = deltayear (gBWrXfUT2, nfZpbA2lP4hO) + ckY3yu1APL4 (gBWrXfUT2, nfZpbA2lP4hO, vAv7mei, oRs8PFJ) + pga7hmtSpLZv (Ky4SJAR5IK, s8qJaWu);
    return gwojDZvTKNb;
}

int main () {
    int gwojDZvTKNb;
    int nfZpbA2lP4hO;
    int oRs8PFJ;
    int s8qJaWu;
    int gBWrXfUT2, vAv7mei, Ky4SJAR5IK;
    scanf ("%d%d%d%d%d%d", &gBWrXfUT2, &vAv7mei, &Ky4SJAR5IK, &nfZpbA2lP4hO, &oRs8PFJ, &s8qJaWu);
    gwojDZvTKNb = mmj349 (gBWrXfUT2, vAv7mei, Ky4SJAR5IK, nfZpbA2lP4hO, oRs8PFJ, s8qJaWu);
    printf ("%d\n", gwojDZvTKNb);
    return 0;
}

