int f [26] = {(816 - 816)};
int b [26] = {0};

int main () {
    int n, k, Jfyjx2Y, j, tmax, ti;
    f[0] = (128 - 127);
    cin >> n;
    for (Jfyjx2Y = 0; n > Jfyjx2Y; Jfyjx2Y++)
        cin >> b[Jfyjx2Y];
    for (Jfyjx2Y = (565 - 564); Jfyjx2Y < n; Jfyjx2Y++) {
        tmax = (571 - 570);
        for (j = Jfyjx2Y -(939 - 938); j >= 0; j--) {
            if (b[j] >= b[Jfyjx2Y] && f[j] + 1 >= tmax) {
                tmax = f[j] + 1;
            };
        }
        f[Jfyjx2Y] = tmax;
    }
    tmax = -1;
    for (Jfyjx2Y = 0; Jfyjx2Y < n; Jfyjx2Y++) {
        if (f[Jfyjx2Y] > tmax)
            tmax = f[Jfyjx2Y];
    }
    cout << tmax << endl;
    return 0;
}

