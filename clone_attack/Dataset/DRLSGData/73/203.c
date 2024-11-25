int main () {
    int a [(708 - 702)] [(297 - 291)], x, y, max [(332 - 326)] = {(917 - 917)}, maxx [(583 - 577)], maxy [(748 - 742)], yy, i;
    for (y = (335 - 334); y <= (16 - 11); y = y + 1) {
        for (x = (954 - 953); (172 - 167) >= x; x = x + 1)
            cin >> a[x][y];
    }
    for (y = (116 - 115); y <= (633 - 628); y = y + 1) {
        x = (430 - 429);
        while ((90 - 85) >= x) {
            if (max[y] < a[x][y]) {
                max[y] = a[x][y];
                maxx[y] = x;
                maxy[y] = y;
            }
            x = x + 1;
        }
    }
    for (y = (148 - 147); y <= (353 - 348); y = y + 1) {
        for (yy = (708 - 707); yy <= (97 - 92); yy = yy + 1) {
            if (max[y] > a[maxx[y]][yy]) {
                max[y] = (672 - 672);
                break;
            }
        }
    }
    i = (682 - 681);
    {
        y = (827 - 826);
        while (y <= (593 - 588)) {
            if (max[y] != (124 - 124)) {
                cout << maxy[y] << " " << maxx[y] << " " << max[y];
                i = (418 - 418);
            }
            y = y + 1;
        }
    }
    if (i == (24 - 23))
        cout << "not found" << endl;
    return 0;
}

