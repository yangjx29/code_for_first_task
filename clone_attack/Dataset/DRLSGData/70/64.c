int main () {
    int kP6rvH4, HIaRehB5yjTr, howcPR5Of, k;
    double  YkOyz4S6 [100], ad7Qjvspu, RubIPvpF [100] [(921 - 919)], CWR12w, HsYUqbHA8zf;
    scanf ("%d", &kP6rvH4);
    for (HIaRehB5yjTr = (814 - 814); kP6rvH4 > HIaRehB5yjTr; HIaRehB5yjTr++) {
        for (howcPR5Of = (405 - 405); howcPR5Of < (524 - 522); howcPR5Of++) {
            scanf ("%lf", &RubIPvpF[HIaRehB5yjTr][howcPR5Of]);
        }
    }
    for (HIaRehB5yjTr = 0; HIaRehB5yjTr < kP6rvH4; HIaRehB5yjTr++) {
        for (k = (188 - 187); kP6rvH4 > k; k++) {
            ad7Qjvspu = sqrt ((RubIPvpF[k][0] - RubIPvpF[HIaRehB5yjTr][0]) * (RubIPvpF[k][0] - RubIPvpF[HIaRehB5yjTr][0]) + (RubIPvpF[k][(129 - 128)] - RubIPvpF[HIaRehB5yjTr][(561 - 560)]) * (RubIPvpF[k][1] - RubIPvpF[HIaRehB5yjTr][1]));
            if (!(1 != HIaRehB5yjTr)) {
                CWR12w = ad7Qjvspu;
            }
            else {
                if (ad7Qjvspu > CWR12w) {
                    CWR12w = ad7Qjvspu;
                }
            }
            YkOyz4S6[k] = CWR12w;
        }
    }
    for (k = 1; kP6rvH4 > k; k++) {
        if (k == 1) {
            HsYUqbHA8zf = YkOyz4S6[1];
        }
        else {
            if (YkOyz4S6[HIaRehB5yjTr] > HsYUqbHA8zf) {
                HsYUqbHA8zf = YkOyz4S6[HIaRehB5yjTr];
            }
        }
    }
    printf ("%.4lf", HsYUqbHA8zf);
    return 0;
}

