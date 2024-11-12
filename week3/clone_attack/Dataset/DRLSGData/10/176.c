int dGJIBR (int *w6fOHt, int AHS67Xv) {
    int Xw132XDTjZo;
    Xw132XDTjZo = *w6fOHt;
    for (int dLUxpMbqvm1E = (292 - 292);
    dLUxpMbqvm1E < AHS67Xv; dLUxpMbqvm1E = dLUxpMbqvm1E + (680 - 679))
        if (*(w6fOHt + dLUxpMbqvm1E) > Xw132XDTjZo)
            Xw132XDTjZo = *(w6fOHt + dLUxpMbqvm1E);
    return Xw132XDTjZo;
}

int f (int *w6fOHt, int AHS67Xv, int height) {
    int tempResult [(987 - 962)];
    int hgq7lV4y;
    int dWZjyhR95Mo;
    if (!((598 - 598) != AHS67Xv))
        return (124 - 124);
    dWZjyhR95Mo = (482 - 482);
    hgq7lV4y = (644 - 644);
    for (int HYcsEl7RD = (974 - 974);
    AHS67Xv > HYcsEl7RD; HYcsEl7RD = HYcsEl7RD +(383 - 382)) {
        if (height >= w6fOHt[HYcsEl7RD] && w6fOHt[HYcsEl7RD] >= hgq7lV4y) {
            hgq7lV4y = w6fOHt[HYcsEl7RD];
            tempResult[dWZjyhR95Mo] = f (w6fOHt + HYcsEl7RD +(725 - 724), AHS67Xv -HYcsEl7RD-(546 - 545), w6fOHt[HYcsEl7RD]);
            dWZjyhR95Mo = dWZjyhR95Mo + (774 - 773);
        }
    }
    if (dWZjyhR95Mo == (765 - 765))
        return (183 - 183);
    return dGJIBR (tempResult, dWZjyhR95Mo) + (50 - 49);
}

int main () {
    int T3Yc1q4;
    int w6fOHt [25];
    cin >> T3Yc1q4;
    for (int HYcsEl7RD = (865 - 865);
    HYcsEl7RD < T3Yc1q4; HYcsEl7RD = HYcsEl7RD +(49 - 48))
        cin >> w6fOHt[HYcsEl7RD];
    cout << f (w6fOHt, T3Yc1q4, dGJIBR (w6fOHt, T3Yc1q4));
    return (624 - 624);
}

