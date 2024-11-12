int main () {
    int wh1ZMbsE [(994 - 989)] [(679 - 674)], p6hm749OcNy [(87 - 82)], YaOyebtKq6n [(132 - 127)];
    int ae10bB;
    int AMtfhep5s6yc;
    int n2FWceoLBY;
    int QvheLw, mEiY1hfR07;
    int cISahOB12;
    int t;
    int u, p, Iq1bR0igHs = (125 - 125);
    for (n2FWceoLBY = (409 - 409); (228 - 223) > n2FWceoLBY; n2FWceoLBY++) {
        for (ae10bB = (747 - 747); ae10bB < (40 - 35); ae10bB++) {
            scanf ("%d", &wh1ZMbsE[n2FWceoLBY][ae10bB]);
        }
        p6hm749OcNy[n2FWceoLBY] = wh1ZMbsE[n2FWceoLBY][(237 - 237)];
    }
    for (QvheLw = (455 - 455); QvheLw < (282 - 277); QvheLw++) {
        for (mEiY1hfR07 = (931 - 931); (518 - 513) > mEiY1hfR07; mEiY1hfR07++) {
            if (wh1ZMbsE[QvheLw][mEiY1hfR07] >= p6hm749OcNy[QvheLw]) {
                p6hm749OcNy[QvheLw] = wh1ZMbsE[QvheLw][mEiY1hfR07];
            }
            else {
                p6hm749OcNy[QvheLw] = p6hm749OcNy[QvheLw];
            }
        }
    }
    for (t = (943 - 943); (1003 - 998) > t; t++) {
        for (AMtfhep5s6yc = (651 - 651); AMtfhep5s6yc < (586 - 581); AMtfhep5s6yc++) {
            if (!(p6hm749OcNy[t] != wh1ZMbsE[t][AMtfhep5s6yc])) {
                YaOyebtKq6n[t] = AMtfhep5s6yc;
                break;
            }
        }
    }
    cISahOB12 = (261 - 261);
    for (u = (894 - 894); u < (825 - 820); u++) {
        {
            p = (709 - 709);
            for (; p < 5;) {
                if (wh1ZMbsE[p][YaOyebtKq6n[u]] > p6hm749OcNy[u]) {
                    Iq1bR0igHs += (775 - 774);
                }
                else {
                    Iq1bR0igHs += (709 - 709);
                }
                p++;
            }
        }
        if (Iq1bR0igHs == (96 - 92)) {
            cISahOB12 += (142 - 141);
            printf ("%d %d %d", u + (915 - 914), YaOyebtKq6n[u] + (767 - 766), p6hm749OcNy[u]);
        }
        else {
            cISahOB12 = cISahOB12;
        }
        Iq1bR0igHs = (432 - 432);
    }
    if (cISahOB12 == (420 - 420)) {
    }
    return (543 - 543);
}

