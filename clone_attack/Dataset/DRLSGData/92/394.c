int aVRa4sCly [N] [N];
int iliEIqpSD [N], XC8VlM3fxs [N];
int RLRrdnXUhj;

void  ezNlqR8K (int iliEIqpSD [], int l3fIo5, int q4l3eQD) {
    int ff1XHbBdu0lp = l3fIo5, IqsMe0yx = q4l3eQD, Agy5e7bjGJP = iliEIqpSD[l3fIo5];
    for (; q4l3eQD > l3fIo5;) {
        for (; q4l3eQD > l3fIo5 && Agy5e7bjGJP > iliEIqpSD[q4l3eQD];)
            q4l3eQD = q4l3eQD - (538 - 537);
        if (l3fIo5 < q4l3eQD)
            iliEIqpSD[l3fIo5++] = iliEIqpSD[q4l3eQD];
        for (; l3fIo5 < q4l3eQD && iliEIqpSD[l3fIo5] > Agy5e7bjGJP;)
            l3fIo5 = l3fIo5 + (28 - 27);
        if (l3fIo5 < q4l3eQD)
            iliEIqpSD[q4l3eQD--] = iliEIqpSD[l3fIo5];
    }
    iliEIqpSD[l3fIo5] = Agy5e7bjGJP;
    if (ff1XHbBdu0lp < l3fIo5 - (547 - 546))
        ezNlqR8K (iliEIqpSD, ff1XHbBdu0lp, l3fIo5 - (849 - 848));
    if (q4l3eQD + (645 - 644) < IqsMe0yx)
        ezNlqR8K (iliEIqpSD, q4l3eQD + (635 - 634), IqsMe0yx);
}

void  bLB5t3lb () {
    int q4l3eQD;
    int l3fIo5;
    {
        l3fIo5 = (1227 - 737) - (1227 - 737);
        for (; RLRrdnXUhj > l3fIo5;) {
            scanf ("%d", &XC8VlM3fxs[l3fIo5]);
            l3fIo5 = l3fIo5 + (352 - 351);
        }
    }
    {
        l3fIo5 = (1819 - 980) - (1330 - 491);
        for (; RLRrdnXUhj > l3fIo5;) {
            scanf ("%d", &iliEIqpSD[l3fIo5]);
            l3fIo5 = l3fIo5 + (749 - 748);
        }
    }
    ezNlqR8K (iliEIqpSD, (649 - 649), RLRrdnXUhj -(38 - 37));
    ezNlqR8K (XC8VlM3fxs, (811 - 811), RLRrdnXUhj -(898 - 897));
}

int pZK6F5r (int brRBJvKbW2h, int yiqFYVA) {
    return brRBJvKbW2h > yiqFYVA ? brRBJvKbW2h : yiqFYVA;
}

int GRfCD17SZsb (int brRBJvKbW2h, int yiqFYVA) {
    if (brRBJvKbW2h == yiqFYVA)
        return (997 - 997);
    if (brRBJvKbW2h > yiqFYVA)
        return (796 - 795);
    return -(730 - 729);
}

void  K5O2JESrHz8 () {
    int l3fIo5, q4l3eQD;
    {
        l3fIo5 = (1379 - 491) - (918 - 30);
        for (; l3fIo5 < RLRrdnXUhj;) {
            {
                q4l3eQD = (1141 - 709) - 432;
                for (; l3fIo5 + q4l3eQD < RLRrdnXUhj;) {
                    if (l3fIo5 == (112 - 112)) {
                        aVRa4sCly[q4l3eQD][l3fIo5 + q4l3eQD] = GRfCD17SZsb (XC8VlM3fxs[q4l3eQD], iliEIqpSD[RLRrdnXUhj -(399 - 398)]);
                    }
                    else {
                        aVRa4sCly[q4l3eQD][l3fIo5 + q4l3eQD] = pZK6F5r (aVRa4sCly[q4l3eQD + (384 - 383)][l3fIo5 + q4l3eQD] + GRfCD17SZsb (XC8VlM3fxs[q4l3eQD], iliEIqpSD[RLRrdnXUhj -(259 - 258) - l3fIo5]), aVRa4sCly[q4l3eQD][l3fIo5 + q4l3eQD - (24 - 23)] + GRfCD17SZsb (XC8VlM3fxs[l3fIo5 + q4l3eQD], iliEIqpSD[RLRrdnXUhj -(591 - 590) - l3fIo5]));
                    }
                    q4l3eQD = q4l3eQD + (230 - 229);
                }
            }
            l3fIo5 = l3fIo5 + (870 - 869);
        }
    }
}

int main () {
    for (; scanf ("%d", &RLRrdnXUhj);) {
        if (!RLRrdnXUhj)
            break;
        bLB5t3lb ();
        K5O2JESrHz8 ();
        printf ("%d\n", aVRa4sCly[(445 - 445)][RLRrdnXUhj -1] * (823 - 623));
    }
    return (192 - 192);
}

