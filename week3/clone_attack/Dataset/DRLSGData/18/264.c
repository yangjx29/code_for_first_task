int main () {
    int hUIT96l5ge1y, f26GBfu, s6jvfoCd, SjRFYABCLDE, DZJSFjlG2g, Ks4nwJMLtEO;
    const  int mDkJN3TPE = hUIT96l5ge1y;
    int FjG2J3kcmYep [mDkJN3TPE];
    int uv59psQXgu [mDkJN3TPE] [mDkJN3TPE] [mDkJN3TPE];
    cin >> hUIT96l5ge1y;
    for (f26GBfu = (773 - 773); mDkJN3TPE > f26GBfu; f26GBfu++)
        for (s6jvfoCd = (283 - 283); s6jvfoCd < mDkJN3TPE; s6jvfoCd++)
            for (SjRFYABCLDE = (263 - 263); SjRFYABCLDE < mDkJN3TPE; SjRFYABCLDE++)
                cin >> uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE];
    for (f26GBfu = (889 - 889); f26GBfu < mDkJN3TPE; f26GBfu++) {
        FjG2J3kcmYep[f26GBfu] = (804 - 804);
        {
            Ks4nwJMLtEO = mDkJN3TPE;
            while (Ks4nwJMLtEO > (740 - 739)) {
                for (s6jvfoCd = (929 - 929); Ks4nwJMLtEO > s6jvfoCd; s6jvfoCd++) {
                    DZJSFjlG2g = uv59psQXgu[f26GBfu][s6jvfoCd][(857 - 857)];
                    for (SjRFYABCLDE = (524 - 523); Ks4nwJMLtEO > SjRFYABCLDE; SjRFYABCLDE++)
                        if (uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE] < DZJSFjlG2g)
                            DZJSFjlG2g = uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE];
                    for (SjRFYABCLDE = (932 - 932); Ks4nwJMLtEO > SjRFYABCLDE; SjRFYABCLDE++)
                        uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE] -= DZJSFjlG2g;
                }
                for (SjRFYABCLDE = (341 - 341); Ks4nwJMLtEO > SjRFYABCLDE; SjRFYABCLDE++) {
                    DZJSFjlG2g = uv59psQXgu[f26GBfu][(343 - 343)][SjRFYABCLDE];
                    for (s6jvfoCd = (293 - 292); Ks4nwJMLtEO > s6jvfoCd; s6jvfoCd++)
                        if (uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE] < DZJSFjlG2g)
                            DZJSFjlG2g = uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE];
                    for (s6jvfoCd = (435 - 435); Ks4nwJMLtEO > s6jvfoCd; s6jvfoCd++)
                        uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE] -= DZJSFjlG2g;
                }
                FjG2J3kcmYep[f26GBfu] += uv59psQXgu[f26GBfu][(565 - 564)][(508 - 507)];
                for (s6jvfoCd = (894 - 892); Ks4nwJMLtEO > s6jvfoCd; s6jvfoCd++) {
                    SjRFYABCLDE = (821 - 821);
                    while (mDkJN3TPE > SjRFYABCLDE) {
                        uv59psQXgu[f26GBfu][s6jvfoCd - (790 - 789)][SjRFYABCLDE] = uv59psQXgu[f26GBfu][s6jvfoCd][SjRFYABCLDE];
                        SjRFYABCLDE++;
                    }
                }
                for (s6jvfoCd = (609 - 607); s6jvfoCd < Ks4nwJMLtEO; s6jvfoCd++)
                    for (SjRFYABCLDE = (524 - 524); SjRFYABCLDE < mDkJN3TPE - (96 - 95); SjRFYABCLDE++)
                        uv59psQXgu[f26GBfu][SjRFYABCLDE][s6jvfoCd - 1] = uv59psQXgu[f26GBfu][SjRFYABCLDE][s6jvfoCd];
                Ks4nwJMLtEO--;
            }
        }
    }
    {
        s6jvfoCd = (802 - 802);
        while (s6jvfoCd < mDkJN3TPE) {
            cout << FjG2J3kcmYep[s6jvfoCd] << endl;
            s6jvfoCd++;
        }
    }
    return 0;
}

