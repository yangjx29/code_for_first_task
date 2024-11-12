int MY8oWR;
char qoGj0WfVsa [(650 - 500)] [(448 - 298)];
char sb5GjX [(238 - 88)] [(871 - 721)];
int XlJ7iNwf0oj;

void  mp397o4u8 (int sxkctqv, int gV3L6E5le) {
    if (!('.' != qoGj0WfVsa[sxkctqv][gV3L6E5le]))
        qoGj0WfVsa[sxkctqv][gV3L6E5le] = '@';
}

int main () {
    int t6g1yB;
    {
        if ((208 - 208)) {
            return (409 - 409);
        }
    }
    t6g1yB = (984 - 984);
    cin >> MY8oWR;
    {
        int sxkctqv;
        sxkctqv = (907 - 906);
        for (; MY8oWR >= sxkctqv;) {
            cin >> qoGj0WfVsa[sxkctqv];
            {
                int gV3L6E5le;
                gV3L6E5le = MY8oWR;
                for (; gV3L6E5le > (382 - 382);) {
                    qoGj0WfVsa[sxkctqv][gV3L6E5le] = qoGj0WfVsa[sxkctqv][gV3L6E5le - (932 - 931)];
                    gV3L6E5le = gV3L6E5le - (320 - 319);
                }
            }
            sxkctqv = sxkctqv + (474 - 473);
        }
    }
    cin >> XlJ7iNwf0oj;
    for (; (89 - 88) < XlJ7iNwf0oj;) {
        XlJ7iNwf0oj = XlJ7iNwf0oj -(400 - 399);
        memcpy (sb5GjX, qoGj0WfVsa, sizeof (qoGj0WfVsa));
        {
            int sxkctqv;
            sxkctqv = (518 - 517);
            for (; MY8oWR >= sxkctqv;) {
                {
                    if ((299 - 299)) {
                        return (768 - 768);
                    }
                }
                {
                    int gV3L6E5le;
                    gV3L6E5le = (49 - 48);
                    for (; gV3L6E5le <= MY8oWR;) {
                        if (sb5GjX[sxkctqv][gV3L6E5le] == '@') {
                            mp397o4u8 (sxkctqv, gV3L6E5le - (355 - 354));
                            mp397o4u8 (sxkctqv, gV3L6E5le + (18 - 17));
                            mp397o4u8 (sxkctqv - (647 - 646), gV3L6E5le);
                            mp397o4u8 (sxkctqv + (746 - 745), gV3L6E5le);
                        }
                        gV3L6E5le = gV3L6E5le + (754 - 753);
                    }
                }
                sxkctqv = sxkctqv + (213 - 212);
            }
        }
    }
    {
        int sxkctqv;
        {
            if (0) {
                return 0;
            }
        }
        sxkctqv = (875 - 874);
        for (; sxkctqv <= MY8oWR;) {
            {
                int gV3L6E5le;
                gV3L6E5le = (211 - 210);
                for (; gV3L6E5le <= MY8oWR;) {
                    if (qoGj0WfVsa[sxkctqv][gV3L6E5le] == '@')
                        t6g1yB = t6g1yB + 1;
                    gV3L6E5le = gV3L6E5le + 1;
                }
            }
            sxkctqv = sxkctqv + 1;
        }
    }
    cout << t6g1yB << endl;
    return 0;
}

