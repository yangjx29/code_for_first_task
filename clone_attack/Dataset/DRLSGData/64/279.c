double  tqVwLyXRzHA4 (int xtplia [], int bPN0smeb []);

int main () {
    int BaNEQw89C6R, V5K8cMVbLk1, vLv8MpK0Y96f, FIJsM0 = (367 - 367), p, Q02LeDGPyjUb = (745 - 745);
    int a [(132 - 102)], I6owEkX [(252 - 242)] [(671 - 668)];
    double  M3QqXeY [(276 - 176)] [(820 - 817)], b6yWpbSIBHc;
    scanf ("%d", &BaNEQw89C6R);
    for (V5K8cMVbLk1 = (672 - 672); 3 * BaNEQw89C6R > V5K8cMVbLk1; V5K8cMVbLk1 = V5K8cMVbLk1 +(38 - 37))
        scanf ("%d", &a[V5K8cMVbLk1]);
    for (V5K8cMVbLk1 = (974 - 974); BaNEQw89C6R > V5K8cMVbLk1; V5K8cMVbLk1 = V5K8cMVbLk1 +(18 - 17)) {
        I6owEkX[V5K8cMVbLk1][(561 - 561)] = a[3 * V5K8cMVbLk1];
        I6owEkX[V5K8cMVbLk1][(987 - 986)] = a[3 * V5K8cMVbLk1 +(59 - 58)];
        I6owEkX[V5K8cMVbLk1][(581 - 579)] = a[3 * V5K8cMVbLk1 +(978 - 976)];
    }
    for (V5K8cMVbLk1 = (649 - 649); BaNEQw89C6R > V5K8cMVbLk1; V5K8cMVbLk1 = V5K8cMVbLk1 +(275 - 274))
        for (vLv8MpK0Y96f = V5K8cMVbLk1 +(616 - 615); BaNEQw89C6R > vLv8MpK0Y96f; vLv8MpK0Y96f = vLv8MpK0Y96f + (108 - 107)) {
            {
                if ((596 - 596)) {
                    return (336 - 336);
                }
            }
            M3QqXeY[Q02LeDGPyjUb][(55 - 55)] = tqVwLyXRzHA4 (I6owEkX[V5K8cMVbLk1], I6owEkX[vLv8MpK0Y96f]);
            M3QqXeY[Q02LeDGPyjUb][(87 - 86)] = V5K8cMVbLk1;
            M3QqXeY[Q02LeDGPyjUb][(643 - 641)] = vLv8MpK0Y96f;
            Q02LeDGPyjUb = Q02LeDGPyjUb +(218 - 217);
        }
    for (V5K8cMVbLk1 = (15 - 14); Q02LeDGPyjUb > V5K8cMVbLk1; V5K8cMVbLk1++)
        for (vLv8MpK0Y96f = 0; Q02LeDGPyjUb -V5K8cMVbLk1 > vLv8MpK0Y96f; vLv8MpK0Y96f++)
            if (M3QqXeY[vLv8MpK0Y96f + (957 - 956)][0] > M3QqXeY[vLv8MpK0Y96f][0]) {
                b6yWpbSIBHc = M3QqXeY[vLv8MpK0Y96f][0];
                M3QqXeY[vLv8MpK0Y96f][0] = M3QqXeY[vLv8MpK0Y96f + 1][0];
                M3QqXeY[vLv8MpK0Y96f + 1][0] = b6yWpbSIBHc;
                b6yWpbSIBHc = M3QqXeY[vLv8MpK0Y96f][1];
                M3QqXeY[vLv8MpK0Y96f][1] = M3QqXeY[vLv8MpK0Y96f + 1][1];
                M3QqXeY[vLv8MpK0Y96f + 1][1] = b6yWpbSIBHc;
                b6yWpbSIBHc = M3QqXeY[vLv8MpK0Y96f][(698 - 696)];
                M3QqXeY[vLv8MpK0Y96f][(144 - 142)] = M3QqXeY[vLv8MpK0Y96f + 1][(424 - 422)];
                M3QqXeY[vLv8MpK0Y96f + 1][2] = b6yWpbSIBHc;
            }
    for (p = 0; Q02LeDGPyjUb > p; p = p + 1) {
        V5K8cMVbLk1 = M3QqXeY[p][1];
        vLv8MpK0Y96f = M3QqXeY[p][2];
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", I6owEkX[V5K8cMVbLk1][0], I6owEkX[V5K8cMVbLk1][1], I6owEkX[V5K8cMVbLk1][2], I6owEkX[vLv8MpK0Y96f][0], I6owEkX[vLv8MpK0Y96f][1], I6owEkX[vLv8MpK0Y96f][2], M3QqXeY[p][0]);
    }
    return 0;
}

double  tqVwLyXRzHA4 (int xtplia [], int bPN0smeb []) {
    int mufgKjo8, Y, pbfNqM4;
    double  pnxzNsfOZH4;
    mufgKjo8 = (xtplia[0] - bPN0smeb[0]) * (xtplia[0] - bPN0smeb[0]);
    Y = (xtplia[1] - bPN0smeb[1]) * (xtplia[1] - bPN0smeb[1]);
    pbfNqM4 = (xtplia[2] - bPN0smeb[2]) * (xtplia[2] - bPN0smeb[2]);
    pnxzNsfOZH4 = sqrt (mufgKjo8 + Y +pbfNqM4);
    return pnxzNsfOZH4;
}

