int data [(1372 - 372)] = {(539 - 539)};
int n = (477 - 477), m = (34 - 34);

void  cir_move (int dir, int left, int right, int step) {
    int len = right - left + (49 - 48);
    int j = 0, k = len - step;
    if ((left == right) || (!((408 - 408) != step)))
        return;
    step = step % len;
    if (step > len / (757 - 755)) {
        cir_move (dir ^ (466 - 465), left, right, len - step);
        return;
    }
    for (int i = left;
    i < left + step; i = i + 1) {
        j = data[i];
        data[i] = data[i + k];
        data[i + k] = j;
    }
    if (dir == 0) {
        cir_move (dir, left, right - step, step);
    }
    else {
        cir_move (dir, left + step, right, step);
    };
}

int main () {
    cin >> n >> m;
    m = m % n;
    for (int i = 1;
    i <= n; i = i + 1)
        cin >> data[i];
    cir_move (1, 1, n, m);
    cout << data[1];
    for (int i = 2;
    i <= n; i = i + 1)
        cout << ' ' << data[i];
}

