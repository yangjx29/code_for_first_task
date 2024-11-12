int main () {
    int lPiT8o;
    int U9kyBZi6;
    int yO1qNw [(473 - 373)];
    double  Fd37vHPS0ok;
    double  qUGjNO8ix;
    double  fi5IbQWXMo;
    double  da4ce70tNmFO;
    Fd37vHPS0ok = 0.0;
    qUGjNO8ix = 0.0;
    fi5IbQWXMo = 0.0;
    da4ce70tNmFO = 0.0;
    double  G86IU25zm, SNA9mxDSt, yAfGJR6Deoms, WuQmeB07KnWb, o7bL9ajMU1S0;
    scanf ("%d", &lPiT8o);
    {
        U9kyBZi6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (U9kyBZi6 < lPiT8o) {
            scanf ("%d", &yO1qNw[U9kyBZi6]);
            U9kyBZi6 = U9kyBZi6 +1;
        };
    }
    for (U9kyBZi6 = 0; U9kyBZi6 < lPiT8o; U9kyBZi6++) {
        if (yO1qNw[U9kyBZi6] >= 1 && 18 >= yO1qNw[U9kyBZi6])
            Fd37vHPS0ok = Fd37vHPS0ok +1;
        else {
            if (19 <= yO1qNw[U9kyBZi6] && yO1qNw[U9kyBZi6] <= 35)
                qUGjNO8ix = qUGjNO8ix + 1;
        }
        if (yO1qNw[U9kyBZi6] >= (71 - 35) && yO1qNw[U9kyBZi6] <= (186 - 126))
            fi5IbQWXMo++;
        if (yO1qNw[U9kyBZi6] >= 61)
            da4ce70tNmFO = da4ce70tNmFO + 1;
    }
    G86IU25zm = Fd37vHPS0ok +qUGjNO8ix + fi5IbQWXMo + da4ce70tNmFO;
    o7bL9ajMU1S0 = da4ce70tNmFO / G86IU25zm *100;
    SNA9mxDSt = Fd37vHPS0ok / G86IU25zm *(298 - 198);
    printf ("1-18: %.2lf%\n", SNA9mxDSt);
    yAfGJR6Deoms = qUGjNO8ix / G86IU25zm *100;
    printf ("19-35: %.2lf%\n", yAfGJR6Deoms);
    WuQmeB07KnWb = fi5IbQWXMo / G86IU25zm *100;
    printf ("36-60: %.2lf%\n", WuQmeB07KnWb);
    printf ("60??: %.2lf%\n", o7bL9ajMU1S0);
    return 0;
}

