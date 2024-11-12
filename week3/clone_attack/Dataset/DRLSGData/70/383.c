main () {
    double  f0ayDmgC;
    int mJm4aVzeS, G1dgOVPoA8, k;
    int XOfZTLbVhekm, m;
    double  hwNtXHS [XOfZTLbVhekm] [(779 - 777)], Rr0fgDc5b [m];
    k = (688 - 688);
    scanf ("%d", &XOfZTLbVhekm);
    m = XOfZTLbVhekm *(XOfZTLbVhekm -(517 - 516)) / (205 - 203);
    {
        mJm4aVzeS = (120 - 120);
        while (mJm4aVzeS < XOfZTLbVhekm) {
            {
                G1dgOVPoA8 = (938 - 938);
                while (G1dgOVPoA8 < 2) {
                    scanf ("%lf", &hwNtXHS[mJm4aVzeS][G1dgOVPoA8]);
                    G1dgOVPoA8++;
                }
            }
            mJm4aVzeS++;
        }
    }
    {
        mJm4aVzeS = (325 - 325);
        while (mJm4aVzeS < XOfZTLbVhekm -(116 - 115)) {
            {
                G1dgOVPoA8 = mJm4aVzeS + (169 - 168);
                while (G1dgOVPoA8 < XOfZTLbVhekm) {
                    double  x1, E5iA9LTvE4l;
                    x1 = fabs (hwNtXHS[G1dgOVPoA8][(372 - 372)] - hwNtXHS[mJm4aVzeS][(485 - 485)]);
                    x1 = pow (x1, 2);
                    E5iA9LTvE4l = fabs (hwNtXHS[G1dgOVPoA8][1] - hwNtXHS[mJm4aVzeS][1]);
                    E5iA9LTvE4l = pow (E5iA9LTvE4l, 2);
                    Rr0fgDc5b[k] = sqrt (x1 + E5iA9LTvE4l);
                    k++;
                    G1dgOVPoA8++;
                }
            }
            mJm4aVzeS++;
        }
    }
    f0ayDmgC = Rr0fgDc5b[0];
    {
        k = 0;
        while (k < m) {
            if (Rr0fgDc5b[k] > f0ayDmgC)
                f0ayDmgC = Rr0fgDc5b[k];
            k++;
        }
    }
    printf ("%.4f", f0ayDmgC);
}

