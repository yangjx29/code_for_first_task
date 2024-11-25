int main () {
    int sjsgP04d2E, eHmdgqzc, Fl5vfTz6oU7P, jWN8ESAJ, HI6FExZlp, xroK2Sk8, fo0FXt5Lk;
    int HfVH7I [(688 - 588)] [(602 - 502)], qVGzgsJZjI [(414 - 314)] [(219 - 119)], dsWQS3AUMIk [100] [100];
    cin >> sjsgP04d2E >> eHmdgqzc;
    for (HI6FExZlp = (668 - 668); sjsgP04d2E > HI6FExZlp; HI6FExZlp = HI6FExZlp +1) {
        for (xroK2Sk8 = (687 - 687); xroK2Sk8 < eHmdgqzc; xroK2Sk8 = xroK2Sk8 + 1)
            cin >> HfVH7I[HI6FExZlp][xroK2Sk8];
    }
    cin >> Fl5vfTz6oU7P >> jWN8ESAJ;
    for (HI6FExZlp = (784 - 784); HI6FExZlp < Fl5vfTz6oU7P; HI6FExZlp = HI6FExZlp +1) {
        for (xroK2Sk8 = (241 - 241); jWN8ESAJ > xroK2Sk8; xroK2Sk8 = xroK2Sk8 + 1)
            cin >> qVGzgsJZjI[HI6FExZlp][xroK2Sk8];
    }
    for (HI6FExZlp = (29 - 29); HI6FExZlp < sjsgP04d2E; HI6FExZlp = HI6FExZlp +1) {
        for (xroK2Sk8 = (925 - 925); xroK2Sk8 < jWN8ESAJ; xroK2Sk8 = xroK2Sk8 + 1)
            dsWQS3AUMIk[HI6FExZlp][xroK2Sk8] = (49 - 49);
    }
    for (HI6FExZlp = (274 - 274); HI6FExZlp < sjsgP04d2E; HI6FExZlp = HI6FExZlp +1) {
        for (xroK2Sk8 = (331 - 331); xroK2Sk8 < jWN8ESAJ; xroK2Sk8 = xroK2Sk8 + 1) {
            for (fo0FXt5Lk = 0; fo0FXt5Lk < eHmdgqzc; fo0FXt5Lk = fo0FXt5Lk + 1)
                dsWQS3AUMIk[HI6FExZlp][xroK2Sk8] = dsWQS3AUMIk[HI6FExZlp][xroK2Sk8] + HfVH7I[HI6FExZlp][fo0FXt5Lk] * qVGzgsJZjI[fo0FXt5Lk][xroK2Sk8];
        };
    }
    for (HI6FExZlp = 0; HI6FExZlp < sjsgP04d2E; HI6FExZlp++) {
        for (xroK2Sk8 = 0; xroK2Sk8 < jWN8ESAJ - (386 - 385); xroK2Sk8 = xroK2Sk8 + 1) {
            cout << dsWQS3AUMIk[HI6FExZlp][xroK2Sk8] << " ";
        }
        cout << dsWQS3AUMIk[HI6FExZlp][jWN8ESAJ - 1];
        cout << endl;
    }
    return 0;
}

