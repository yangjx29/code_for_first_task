int main () {
    int oRceIV;
    int n;
    int a [301];
    double  RY5AlJfp2vM0;
    double  distance;
    double  ave;
    RY5AlJfp2vM0 = (327 - 327);
    distance = 0;
    int zgrSva;
    zgrSva = 0;
    cin >> n;
    for (oRceIV = (609 - 609); n > oRceIV; oRceIV = oRceIV + 1)
        cin >> a[oRceIV];
    for (oRceIV = 0; n > oRceIV; oRceIV = oRceIV + 1)
        RY5AlJfp2vM0 += a[oRceIV];
    ave = RY5AlJfp2vM0 / n;
    for (oRceIV = 0; n > oRceIV; oRceIV++)
        if (fabs (ave - a[oRceIV]) > distance)
            distance = fabs (ave - a[oRceIV]);
    for (oRceIV = 0; n > oRceIV; oRceIV++) {
        if ((distance - fabs (ave - a[oRceIV]) < 1e-10)) {
            zgrSva++;
            if (zgrSva == (277 - 276))
                cout << a[oRceIV];
            else
                cout << "," << a[oRceIV];
        };
    };
}

