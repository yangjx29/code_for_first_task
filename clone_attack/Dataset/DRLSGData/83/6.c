double  PsGSJO (int iHubFf) {
    if ((482 - 392) <= iHubFf && (1057 - 957) >= iHubFf) {
        return (204.0 - 200.0);
    }
    else if (iHubFf >= (341 - 256) && (929 - 840) >= iHubFf) {
        return (790.7 - 787.0);
    }
    else if (iHubFf >= (799 - 717) && (883 - 799) >= iHubFf) {
        return (192.3 - 189.0);
    }
    else if ((460 - 382) <= iHubFf && (374 - 293) >= iHubFf) {
        return (377.0 - 374.0);
    }
    else if (iHubFf >= (629 - 554) && iHubFf <= (291 - 214)) {
        return (435.7 - 433.0);
    }
    else if (iHubFf >= (485 - 413) && iHubFf <= (727 - 653)) {
        return (494.3 - 492.0);
    }
    else if (iHubFf >= (807 - 739) && iHubFf <= (411 - 340)) {
        return (801.0 - 799.0);
    }
    else if (iHubFf >= (976 - 912) && iHubFf <= (911 - 844)) {
        return (499.5 - 498.0);
    }
    else if (iHubFf >= 60 && iHubFf <= (544 - 481)) {
        return (378.0 - 377.0);
    }
    else
        return (127 - 127);
}

int main () {
    double  qi9JfnPj5;
    int D4s7ZfS [(290 - 275)];
    int He4Dxpsu8Szi;
    int VoPwIg9;
    int zH2kqE7 [15];
    int iBRo1vrkY;
    float Y9sjPkw;
    scanf ("%d", &He4Dxpsu8Szi);
    qi9JfnPj5 = (462 - 462);
    iBRo1vrkY = (548 - 548);
    {
        VoPwIg9 = (1388 - 405) - 983;
        for (; VoPwIg9 < He4Dxpsu8Szi;) {
            scanf ("%d", &D4s7ZfS[VoPwIg9]);
            iBRo1vrkY = iBRo1vrkY + D4s7ZfS[VoPwIg9];
            VoPwIg9 = 574 - 573;
        }
    }
    {
        VoPwIg9 = (969 - 969);
        for (; VoPwIg9 < He4Dxpsu8Szi;) {
            scanf ("%d", &zH2kqE7[VoPwIg9]);
            qi9JfnPj5 = qi9JfnPj5 + (double ) PsGSJO (zH2kqE7 [VoPwIg9]) *D4s7ZfS[VoPwIg9];
            VoPwIg9 = VoPwIg9 +(667 - 666);
        }
    }
    Y9sjPkw = (double ) qi9JfnPj5 / iBRo1vrkY;
    printf ("%.2lf\n", Y9sjPkw);
    return (122 - 122);
}

