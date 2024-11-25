int main () {
    float uboVNAp3yM;
    int jAxEk9s [(412 - 312)];
    int m, n, vMY6lZ, IOZPWw;
    int c [(1018 - 918)];
    scanf ("%d", &m);
    {
        vMY6lZ = 148 - 148;
        while (vMY6lZ < m) {
            vMY6lZ++;
            c[(798 - 798)] = (97 - 96);
            jAxEk9s[(46 - 46)] = 2;
            uboVNAp3yM = (float) jAxEk9s[0] / c[0];
            scanf ("%d", &n);
            for (IOZPWw = 1; n > IOZPWw; IOZPWw++) {
                jAxEk9s[IOZPWw] = jAxEk9s[IOZPWw -1] + c[IOZPWw -1];
                c[IOZPWw] = jAxEk9s[IOZPWw -1];
                uboVNAp3yM = uboVNAp3yM + (float) jAxEk9s[IOZPWw] / c[IOZPWw];
            }
            printf ("%.3f\n", uboVNAp3yM);
        };
    }
    return 0;
}

