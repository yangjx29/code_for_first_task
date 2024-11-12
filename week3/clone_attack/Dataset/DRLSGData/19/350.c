int nJgEBT (int);
const  int i8LMlspVO = 100 + 1;
char zno6exA3W8D [i8LMlspVO], M8uiOtwEBv [i8LMlspVO], f7Rt3PMwW [i8LMlspVO], rFxXB9L [i8LMlspVO];
int P82gFzkCMRfc = (339 - 339), Tx8Uqko2DZw = 0;

int main () {
    int kWNZfQK;
    kWNZfQK = 0;
    cin.getline (zno6exA3W8D, i8LMlspVO);
    cin >> M8uiOtwEBv >> f7Rt3PMwW;
    P82gFzkCMRfc = strlen (M8uiOtwEBv);
    Tx8Uqko2DZw = strlen (zno6exA3W8D);
    if (!(M8uiOtwEBv[0] != zno6exA3W8D[kWNZfQK]))
        kWNZfQK = kWNZfQK + nJgEBT (kWNZfQK);
    for (; Tx8Uqko2DZw > kWNZfQK;) {
        if ((!(M8uiOtwEBv[0] != zno6exA3W8D[kWNZfQK])) && (!(' ' != zno6exA3W8D[kWNZfQK - 1])))
            kWNZfQK = kWNZfQK + nJgEBT (kWNZfQK);
        else {
            cout << zno6exA3W8D[kWNZfQK];
            kWNZfQK = kWNZfQK + 1;
        }
    }
    cout << endl;
    return 0;
}

int nJgEBT (int kWNZfQK) {
    int p9am7u1EYW;
    int OJv6nFaY4;
    {
        OJv6nFaY4 = 0;
        while (P82gFzkCMRfc > OJv6nFaY4) {
            if (zno6exA3W8D[kWNZfQK + OJv6nFaY4] != M8uiOtwEBv[OJv6nFaY4])
                break;
            OJv6nFaY4 = OJv6nFaY4 +1;
        }
    }
    if ((!(P82gFzkCMRfc != OJv6nFaY4)) && (!(' ' != zno6exA3W8D[kWNZfQK + P82gFzkCMRfc]) || !('\0' != zno6exA3W8D[kWNZfQK + P82gFzkCMRfc]))) {
        cout << f7Rt3PMwW;
        return OJv6nFaY4;
    }
    {
        p9am7u1EYW = 0;
        for (; OJv6nFaY4 > p9am7u1EYW;) {
            cout << zno6exA3W8D[kWNZfQK + p9am7u1EYW];
            p9am7u1EYW = p9am7u1EYW + 1;
        }
    }
    return OJv6nFaY4;
}

