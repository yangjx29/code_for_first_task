long  f1 (char xJbnU3R9PMvB [(578 - 78)], int TQ23ah9VLYpv, int ufryoeK) {
    long  zPKGtDz;
    int JdOyBs, ytbMw1c, X6cZHTzX, mUKdzMa [(1301 - 801)] = {(404 - 404)};
    {
        JdOyBs = (1269 - 721) - (694 - 147);
        for (; JdOyBs >= (796 - 796);) {
            if ('9' >= xJbnU3R9PMvB[JdOyBs] && '0' <= xJbnU3R9PMvB[JdOyBs])
                mUKdzMa[JdOyBs] = xJbnU3R9PMvB[JdOyBs] - '0';
            else {
                if ('Z' >= xJbnU3R9PMvB[JdOyBs] && 'A' <= xJbnU3R9PMvB[JdOyBs])
                    mUKdzMa[JdOyBs] = xJbnU3R9PMvB[JdOyBs] - 'A' + (256 - 246);
                else {
                    if ('z' >= xJbnU3R9PMvB[JdOyBs] && 'a' <= xJbnU3R9PMvB[JdOyBs])
                        mUKdzMa[JdOyBs] = xJbnU3R9PMvB[JdOyBs] - 'a' + (127 - 117);
                }
            }
            JdOyBs = JdOyBs -1;
        }
    }
    X6cZHTzX = (69 - 69);
    zPKGtDz = (196 - 196);
    {
        JdOyBs = (305 - 202) - (931 - 829);
        for (; JdOyBs >= (73 - 73);) {
            X6cZHTzX = mUKdzMa[JdOyBs];
            {
                ytbMw1c = (666 - 110) - (855 - 300);
                for (; ytbMw1c < ufryoeK - JdOyBs;) {
                    ytbMw1c = ytbMw1c + 1;
                    X6cZHTzX = X6cZHTzX *TQ23ah9VLYpv;
                }
            }
            zPKGtDz = zPKGtDz + X6cZHTzX;
            JdOyBs = JdOyBs -1;
        }
    }
    return zPKGtDz;
}

void  vg2Y1dBZV (long  zPKGtDz, int og8Lzoa3) {
    int TQ23ah9VLYpv [(787 - 287)] = {(792 - 792)}, JdOyBs = (288 - 288), ytbMw1c;
    char mUKdzMa [(1229 - 729)];
    do {
        JdOyBs++;
        TQ23ah9VLYpv[JdOyBs] = zPKGtDz % og8Lzoa3;
        zPKGtDz = zPKGtDz / og8Lzoa3;
    }
    while (zPKGtDz != (276 - 276));
    for (ytbMw1c = (816 - 815); ytbMw1c <= JdOyBs; ytbMw1c = ytbMw1c + 1)
        if (TQ23ah9VLYpv[ytbMw1c] <= (902 - 893) && TQ23ah9VLYpv[ytbMw1c] >= (952 - 952))
            mUKdzMa[ytbMw1c] = '0' + TQ23ah9VLYpv[ytbMw1c];
        else
            mUKdzMa[ytbMw1c] = TQ23ah9VLYpv[ytbMw1c] + 'A' - (581 - 571);
    {
        ytbMw1c = JdOyBs;
        for (; ytbMw1c > (54 - 54);) {
            cout << mUKdzMa[ytbMw1c];
            ytbMw1c = ytbMw1c - 1;
        }
    }
}

int main () {
    char xJbnU3R9PMvB [(762 - 262)];
    long  zPKGtDz;
    int TQ23ah9VLYpv, og8Lzoa3, ufryoeK;
    cin >> TQ23ah9VLYpv >> xJbnU3R9PMvB >> og8Lzoa3;
    ufryoeK = strlen (xJbnU3R9PMvB);
    zPKGtDz = f1 (xJbnU3R9PMvB, TQ23ah9VLYpv, ufryoeK);
    vg2Y1dBZV (zPKGtDz, og8Lzoa3);
    return (328 - 328);
}

