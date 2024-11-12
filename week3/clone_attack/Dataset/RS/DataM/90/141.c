int WAY2 (int tR8paut4rVK5, int otgWMrpZ);

int WAY1 (int tR8paut4rVK5, int otgWMrpZ) {
    if (otgWMrpZ == 1)
        return 0;
    else {
        if (otgWMrpZ == 2)
            return 1;
        else
            return WAY1 (tR8paut4rVK5, otgWMrpZ - 1) + WAY2 (tR8paut4rVK5, otgWMrpZ - 1);
    };
}

int WAY2 (int tR8paut4rVK5, int otgWMrpZ) {
    if (tR8paut4rVK5 < otgWMrpZ)
        return 0;
    else {
        if (tR8paut4rVK5 == otgWMrpZ)
            return 1;
        else
            return WAY1 (tR8paut4rVK5 - otgWMrpZ, otgWMrpZ) + WAY2 (tR8paut4rVK5 - otgWMrpZ, otgWMrpZ);
    };
}

int main () {
    int u3hyLB0, IZexw0bk, M, N, K;
    cin >> IZexw0bk;
    for (u3hyLB0 = 1; u3hyLB0 <= IZexw0bk; u3hyLB0 = u3hyLB0 + 1) {
        cin >> M >> N;
        K = WAY1 (M, N) + WAY2 (M, N);
        cout << K << endl;
    }
    return 0;
}

