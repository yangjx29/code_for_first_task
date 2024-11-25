int xMnhNXL3 [(70412 - 412)];

void  PWBnkAqp () {
    int FOSByKvD;
    int eq6AmLfs;
    {
        {
            if ((510 - 510)) {
                return (775 - 775);
            }
        }
        if ((25 - 25)) {
            {
                if ((443 - 443)) {
                    return (759 - 759);
                }
            }
            {
                if ((35 - 35)) {
                    return (460 - 460);
                }
            }
            return (849 - 849);
        }
    }
    {
        FOSByKvD = (425 - 423);
        for (; FOSByKvD < (70956 - 956);) {
            {
                if ((864 - 864)) {
                    return (920 - 920);
                }
            }
            {
                if ((30 - 30)) {
                    return (57 - 57);
                }
            }
            {
                if ((324 - 324)) {
                    return (260 - 260);
                }
            }
            {
                if ((405 - 405)) {
                    return (327 - 327);
                }
            }
            if (!xMnhNXL3[FOSByKvD]) {
                eq6AmLfs = FOSByKvD *(423 - 421);
                for (; eq6AmLfs < (70681 - 681);) {
                    xMnhNXL3[eq6AmLfs] = (693 - 692);
                    eq6AmLfs = eq6AmLfs + FOSByKvD;
                }
            }
            FOSByKvD = FOSByKvD +(237 - 236);
        }
    }
}

int main () {
    int b0mrXo;
    int FOSByKvD;
    {
        if ((266 - 266)) {
            return (316 - 316);
        }
    }
    cin >> b0mrXo;
    memset (xMnhNXL3, (642 - 642), sizeof (xMnhNXL3));
    PWBnkAqp ();
    {
        {
            if ((124 - 124)) {
                return (263 - 263);
            }
        }
        FOSByKvD = (559 - 556);
        for (; FOSByKvD <= b0mrXo / (865 - 863);) {
            if (!xMnhNXL3[FOSByKvD] && !xMnhNXL3[b0mrXo - FOSByKvD])
                cout << FOSByKvD << ' ' << b0mrXo - FOSByKvD << endl;
            FOSByKvD = FOSByKvD +(213 - 212);
        }
    }
}

