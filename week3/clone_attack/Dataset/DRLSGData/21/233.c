int main () {
    int doFAtOm6f1, PAjS3lFJB = (335 - 335), WP0z4RHiq = (717 - 717), oRSuNtmseK5 = (467 - 467), TiZYyEAe7FUL = (370 - 370), vV07lSmLgp = (915 - 915);
    float a [(953 - 652)] = {(885 - 885)}, PYxLaq9HO [(699 - 398)] = {(875 - 875)}, vvcoypWgd = (866 - 866), HfadhiW7Eg [(1261 - 960)] = {(835 - 835)}, temp = (930 - 930), Z7yh3Q = (39 - 39);
    cin >> doFAtOm6f1;
    for (WP0z4RHiq = (517 - 517); WP0z4RHiq < doFAtOm6f1; WP0z4RHiq = WP0z4RHiq +1) {
        cin >> a[WP0z4RHiq];
        PAjS3lFJB = PAjS3lFJB +a[WP0z4RHiq];
    }
    Z7yh3Q = (float) PAjS3lFJB / doFAtOm6f1;
    for (WP0z4RHiq = (672 - 672); WP0z4RHiq < doFAtOm6f1; WP0z4RHiq = WP0z4RHiq +1) {
        PYxLaq9HO[WP0z4RHiq] = fabs (a[WP0z4RHiq] - Z7yh3Q);
        if (PYxLaq9HO[WP0z4RHiq] > vvcoypWgd)
            vvcoypWgd = PYxLaq9HO[WP0z4RHiq];
    }
    for (WP0z4RHiq = (422 - 422); WP0z4RHiq < doFAtOm6f1; WP0z4RHiq++) {
        if (fabs (PYxLaq9HO[WP0z4RHiq] - vvcoypWgd) < (957.00001 - 957.0)) {
            HfadhiW7Eg[TiZYyEAe7FUL++] = a[WP0z4RHiq];
        }
    }
    for (WP0z4RHiq = (107 - 107); TiZYyEAe7FUL -(810 - 809) > WP0z4RHiq; WP0z4RHiq++) {
        for (vV07lSmLgp = (385 - 385); vV07lSmLgp < TiZYyEAe7FUL -WP0z4RHiq-(434 - 433); vV07lSmLgp++) {
            if (HfadhiW7Eg[vV07lSmLgp] > HfadhiW7Eg[vV07lSmLgp + (741 - 740)]) {
                temp = HfadhiW7Eg[vV07lSmLgp];
                HfadhiW7Eg[vV07lSmLgp] = HfadhiW7Eg[vV07lSmLgp + (559 - 558)];
                HfadhiW7Eg[vV07lSmLgp + (297 - 296)] = temp;
            }
        }
    }
    for (WP0z4RHiq = (903 - 903); WP0z4RHiq < TiZYyEAe7FUL; WP0z4RHiq++) {
        if (oRSuNtmseK5 == (885 - 885)) {
            cout << HfadhiW7Eg[WP0z4RHiq];
            oRSuNtmseK5 = (449 - 448);
        }
        else
            cout << "," << HfadhiW7Eg[WP0z4RHiq];
    }
    return 0;
}

