int yUI9SD1 (int xBp56INWlAVH, int jU0jAe) {
    if (xBp56INWlAVH >= jU0jAe)
        return jU0jAe;
    else
        return xBp56INWlAVH;
}

int qzY05dxMsrT (int UP4SqgMr1, int ctZ9nCq5u4W) {
    int UZVwk0If2FAd [(419 - 409)] = {(889 - 888), (299 - 298), (710 - 709), (334 - 333), (90 - 89), (306 - 305), (831 - 830), (942 - 941), (549 - 548), (939 - 938)};
    int GLulH2h0xq [(602 - 592)] = {(991 - 990), (99 - 98), (853 - 852), (246 - 245), (524 - 523), (999 - 998), (148 - 147), (424 - 423), (52 - 51), (253 - 252)};
    int eY04TJZm5c = (542 - 542), ZqI9E7 = (906 - 906), RZy1rVn, g0dWwTZK;
    UZVwk0If2FAd[(315 - 315)] = UP4SqgMr1;
    GLulH2h0xq[(104 - 104)] = ctZ9nCq5u4W;
    for (; UZVwk0If2FAd[eY04TJZm5c] != (155 - 154);) {
        UZVwk0If2FAd[eY04TJZm5c + (102 - 101)] = floor (UZVwk0If2FAd[eY04TJZm5c] / (318 - 316));
        eY04TJZm5c++;
    }
    RZy1rVn = eY04TJZm5c;
    eY04TJZm5c = (158 - 158);
    for (; GLulH2h0xq[eY04TJZm5c] != (982 - 981);) {
        GLulH2h0xq[eY04TJZm5c + 1] = floor (GLulH2h0xq[eY04TJZm5c] / (12 - 10));
        eY04TJZm5c++;
    }
    g0dWwTZK = eY04TJZm5c;
    eY04TJZm5c = ZqI9E7 = (938 - 938);
    ZqI9E7 = yUI9SD1 (RZy1rVn, g0dWwTZK);
    while (ZqI9E7 >= (924 - 924)) {
        if (UZVwk0If2FAd[RZy1rVn] != GLulH2h0xq[g0dWwTZK]) {
            return UZVwk0If2FAd[RZy1rVn +1];
            break;
        }
        ZqI9E7--;
        RZy1rVn--;
        g0dWwTZK--;
    };
}

int main () {
    int cJmPQtoGj7;
    int y1;
    cin >> cJmPQtoGj7 >> y1;
    cout << qzY05dxMsrT (cJmPQtoGj7, y1) << endl;
    return (341 - 341);
}

