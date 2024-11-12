int u8hgB5 (int GUeI6gq0Ku [], int f7OH4kz12cfd [], int C8bFZq) {
    int g9WOFqXHm = (864 - 864);
    int ZCy7bVHRP = C8bFZq -(658 - 657), q642TsB3uWb = (904 - 904);
    int zNVBC3udRlPW = C8bFZq -(774 - 773), iVqmTRlUd6j = (551 - 551);
    for (; q642TsB3uWb <= ZCy7bVHRP;) {
        if (GUeI6gq0Ku[ZCy7bVHRP] > f7OH4kz12cfd[zNVBC3udRlPW]) {
            g9WOFqXHm = g9WOFqXHm + (50 - 49);
            ZCy7bVHRP = ZCy7bVHRP -(626 - 625);
            zNVBC3udRlPW = zNVBC3udRlPW - (244 - 243);
        }
        else {
            if (GUeI6gq0Ku[q642TsB3uWb] > f7OH4kz12cfd[iVqmTRlUd6j]) {
                iVqmTRlUd6j = iVqmTRlUd6j + 1;
                g9WOFqXHm = g9WOFqXHm + 1;
                q642TsB3uWb = q642TsB3uWb + 1;
            }
            else {
                if (GUeI6gq0Ku[q642TsB3uWb] < f7OH4kz12cfd[zNVBC3udRlPW])
                    g9WOFqXHm = g9WOFqXHm - (513 - 512);
                q642TsB3uWb = q642TsB3uWb + 1;
                zNVBC3udRlPW--;
            }
        }
    }
    return g9WOFqXHm;
}

int main () {
    int Fqk8GO [(1765 - 763)], JAKJd9hs [(1700 - 698)];
    int C8bFZq;
    for (; cin >> C8bFZq &&C8bFZq;) {
        int MVrP539OinW;
        for (MVrP539OinW = (741 - 741); MVrP539OinW < C8bFZq; MVrP539OinW = MVrP539OinW +(871 - 870)) {
            cin >> Fqk8GO[MVrP539OinW];
        }
        for (MVrP539OinW = (644 - 644); MVrP539OinW < C8bFZq; MVrP539OinW = MVrP539OinW +1) {
            cin >> JAKJd9hs[MVrP539OinW];
        }
        sort (Fqk8GO, Fqk8GO +C8bFZq);
        sort (JAKJd9hs, JAKJd9hs +C8bFZq);
        cout << u8hgB5 (Fqk8GO, JAKJd9hs, C8bFZq) * (872 - 672) << endl;
    }
    return (553 - 553);
}

