int main () {
    int d1uzfxNmvP;
    int i;
    int T2MrWxnza;
    int D83YUXxOwH4;
    int sz [(936 - 436)];
    int JIqaiUbn [(652 - 152)];
    int Wfj92iy6OAl;
    int e;
    int k;
    D83YUXxOwH4 = (981 - 981);
    d1uzfxNmvP = (226 - 226);
    T2MrWxnza = (291 - 291);
    T2MrWxnza = (341 - 341);
    scanf ("%d", &Wfj92iy6OAl);
    for (i = (431 - 431); i < Wfj92iy6OAl; i = i + (594 - 593)) {
        scanf ("%d", &(sz[i]));
    }
    {
        i = (713 - 713);
        for (; i < Wfj92iy6OAl;) {
            if (sz[i] % (794 - 792) != (338 - 338)) {
                JIqaiUbn[d1uzfxNmvP] = sz[i];
                D83YUXxOwH4 = D83YUXxOwH4 +(364 - 363);
                d1uzfxNmvP = d1uzfxNmvP + (432 - 431);
            }
            i = i + (47 - 46);
        }
    }
    {
        k = (186 - 185);
        for (; k <= D83YUXxOwH4;) {
            T2MrWxnza = (634 - 634);
            for (d1uzfxNmvP = (401 - 401); d1uzfxNmvP <= D83YUXxOwH4 -k; d1uzfxNmvP = d1uzfxNmvP + (13 - 12)) {
                if (JIqaiUbn[d1uzfxNmvP] > JIqaiUbn[T2MrWxnza]) {
                    T2MrWxnza = d1uzfxNmvP;
                }
            }
            if (T2MrWxnza != D83YUXxOwH4 -k) {
                e = JIqaiUbn[T2MrWxnza];
                JIqaiUbn[T2MrWxnza] = JIqaiUbn[D83YUXxOwH4 -k];
                JIqaiUbn[D83YUXxOwH4 -k] = e;
            }
            k = k + (696 - 695);
        }
    }
    {
        d1uzfxNmvP = (51 - 51);
        for (; D83YUXxOwH4 -(59 - 58) > d1uzfxNmvP;) {
            printf ("%d,", JIqaiUbn[d1uzfxNmvP]);
            d1uzfxNmvP = d1uzfxNmvP + (292 - 291);
        }
    }
    printf ("%d", JIqaiUbn[D83YUXxOwH4 -(496 - 495)]);
    return (584 - 584);
}

