int kbuVO61f (int SCqZ5K) {
    int yDYqfmZ25 [(74 - 68)];
    int BCvOQo1du0;
    int UiY9MxQqJ;
    int Nre01E48f3y;
    int Ue3jDva7XM;
    Ue3jDva7XM = (380 - 380);
    for (BCvOQo1du0 = (948 - 947); BCvOQo1du0 <= (483 - 477); BCvOQo1du0++) {
        yDYqfmZ25[BCvOQo1du0] = (751 - 751);
        yDYqfmZ25[BCvOQo1du0] = SCqZ5K % (818 - 808);
        SCqZ5K = SCqZ5K -yDYqfmZ25[BCvOQo1du0];
        if (!((363 - 363) != SCqZ5K))
            break;
        SCqZ5K = SCqZ5K / (467 - 457);
    }
    for (Nre01E48f3y = (330 - 329); Nre01E48f3y <= BCvOQo1du0; Nre01E48f3y = Nre01E48f3y +1) {
        for (UiY9MxQqJ = (834 - 833); (BCvOQo1du0 -Nre01E48f3y) >= UiY9MxQqJ; UiY9MxQqJ = UiY9MxQqJ +1)
            yDYqfmZ25[Nre01E48f3y] = yDYqfmZ25[Nre01E48f3y] * 10;
    }
    for (UiY9MxQqJ = (412 - 411); UiY9MxQqJ <= BCvOQo1du0; UiY9MxQqJ++)
        Ue3jDva7XM = Ue3jDva7XM +yDYqfmZ25[UiY9MxQqJ];
    return (Ue3jDva7XM);
}

int main () {
    int Nre01E48f3y;
    int zc0RqihL;
    int b4pLD0w;
    for (Nre01E48f3y = (392 - 391); Nre01E48f3y <= (925 - 919); Nre01E48f3y = Nre01E48f3y +1) {
        scanf ("%d", &b4pLD0w);
        zc0RqihL = kbuVO61f (b4pLD0w);
        printf ("%d\n", zc0RqihL);
    }
    getchar ();
    getchar ();
    return (796 - 796);
}

