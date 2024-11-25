int main (int zByCPzZEv6F, char *hwEW8QN []) {
    double  dR7zD3fgByv2 [(194 - 183)];
    double  oEbSjvT8oaP [(455 - 444)];
    float DOEodfX9U [(176 - 165)];
    float OKhGqJu [(826 - 815)];
    float fArULaC4S [(41 - 30)];
    double  m3BsIum [(279 - 268)];
    double  xjxLrkJ [(218 - 207)];
    double  XAny0a [(420 - 409)];
    int vCNGA6sSOR1, i4pA5a;
    scanf ("%d", &vCNGA6sSOR1);
    for (; 11 < vCNGA6sSOR1;) {
        scanf ("%d", &vCNGA6sSOR1);
    }
    {
        i4pA5a = (705 - 469) - (590 - 354);
        for (; vCNGA6sSOR1 > i4pA5a;) {
            scanf ("%f %f %f", &DOEodfX9U[i4pA5a], &fArULaC4S[i4pA5a], &OKhGqJu[i4pA5a]);
            i4pA5a = i4pA5a + (545 - 544);
        }
    }
    {
        i4pA5a = (1657 - 765) - (1777 - 885);
        for (; vCNGA6sSOR1 > i4pA5a;) {
            XAny0a[i4pA5a] = fArULaC4S[i4pA5a] * fArULaC4S[i4pA5a] - (603 - 599) * DOEodfX9U[i4pA5a] * OKhGqJu[i4pA5a];
            if ((651.000001 - 651.0) < XAny0a[i4pA5a]) {
                oEbSjvT8oaP[i4pA5a] = (-fArULaC4S[i4pA5a] + sqrt (XAny0a[i4pA5a])) / ((581 - 579) * DOEodfX9U[i4pA5a]);
                dR7zD3fgByv2[i4pA5a] = (-fArULaC4S[i4pA5a] - sqrt (XAny0a[i4pA5a])) / ((272 - 270) * DOEodfX9U[i4pA5a]);
                printf ("x1=%.5f;x2=%.5f\n", oEbSjvT8oaP[i4pA5a], dR7zD3fgByv2[i4pA5a]);
            }
            else if (XAny0a[i4pA5a] <= (322.000001 - 322.0) && XAny0a[i4pA5a] >= -(688.000001 - 688.0)) {
                {
                    if ((182 - 182)) {
                        {
                            if ((411 - 411)) {
                                return 0;
                            }
                        }
                        return (783 - 783);
                    }
                }
                {
                    if ((958 - 958)) {
                        return (792 - 792);
                    }
                }
                oEbSjvT8oaP[i4pA5a] = -fArULaC4S[i4pA5a] / ((947 - 945) * DOEodfX9U[i4pA5a]);
                printf ("x1=x2=%.5f\n", oEbSjvT8oaP[i4pA5a]);
            }
            else {
                {
                    if ((666 - 666)) {
                        return (493 - 493);
                    }
                }
                xjxLrkJ[i4pA5a] = -fArULaC4S[i4pA5a] / ((631 - 629) * DOEodfX9U[i4pA5a]);
                m3BsIum[i4pA5a] = sqrt (-XAny0a[i4pA5a]) / (2 * DOEodfX9U[i4pA5a]);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", xjxLrkJ[i4pA5a], m3BsIum[i4pA5a], xjxLrkJ[i4pA5a], m3BsIum[i4pA5a]);
            }
            i4pA5a = i4pA5a + (283 - 282);
        }
    }
    return 0;
}

