int main () {
    int XEp6y2aIRfn, NUiAzY, ZnJX0m, BIC7bPD;
    double  w7UI4t [(504 - 404)] [(1218 - 218)], HQZDMEz97, yEO6GiW74gTK [(310 - 210)] = {(174 - 174)}, *vNnUP21MX4G, *VRcWwM;
    scanf ("%d", &XEp6y2aIRfn);
    VRcWwM = yEO6GiW74gTK;
    vNnUP21MX4G = w7UI4t[(806 - 806)];
    for (ZnJX0m = (251 - 251); XEp6y2aIRfn > ZnJX0m; ZnJX0m++) {
        scanf ("%d", &NUiAzY);
        for (BIC7bPD = (543 - 543); NUiAzY > BIC7bPD; BIC7bPD++) {
            scanf ("%lf", ((vNnUP21MX4G + ZnJX0m) + BIC7bPD));
        }
        HQZDMEz97 = (717 - 717);
        {
            BIC7bPD = 0;
            for (; BIC7bPD < NUiAzY;) {
                HQZDMEz97 = HQZDMEz97 +*((vNnUP21MX4G + ZnJX0m) + BIC7bPD);
                BIC7bPD++;
            }
        }
        HQZDMEz97 = HQZDMEz97 / NUiAzY;
        {
            BIC7bPD = 0;
            for (; BIC7bPD < NUiAzY;) {
                *(VRcWwM +ZnJX0m) = *(VRcWwM +ZnJX0m) + (*((vNnUP21MX4G + ZnJX0m) + BIC7bPD) - HQZDMEz97) * (*((vNnUP21MX4G + ZnJX0m) + BIC7bPD) - HQZDMEz97);
                BIC7bPD++;
            }
        }
        *(VRcWwM +ZnJX0m) = *(VRcWwM +ZnJX0m) / NUiAzY;
        *(VRcWwM +ZnJX0m) = sqrt (*(VRcWwM +ZnJX0m));
    }
    for (ZnJX0m = 0; XEp6y2aIRfn > ZnJX0m; ZnJX0m++) {
        printf ("%.5lf\n", *(VRcWwM +ZnJX0m));
    }
    return 0;
}

