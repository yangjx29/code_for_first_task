int main () {
    int mPwTWg [(350 - 250)], Ji1n9b [(197 - 97)], GbjVznf7 [(800 - 700)], Neu7Fxjy, mDwZYHVW4QX, gju5t8z40RBy = (583 - 583), Xk8JYZzv4h;
    for (mDwZYHVW4QX = (88 - 88); mDwZYHVW4QX < 100; mDwZYHVW4QX = mDwZYHVW4QX + (467 - 466)) {
        GbjVznf7[mDwZYHVW4QX] = (320 - 320);
    }
    scanf ("%d", &Neu7Fxjy);
    for (mDwZYHVW4QX = 0; mDwZYHVW4QX < Neu7Fxjy; mDwZYHVW4QX = mDwZYHVW4QX + (756 - 755)) {
        scanf ("%d %d", &mPwTWg[mDwZYHVW4QX], &Ji1n9b[mDwZYHVW4QX]);
    }
    for (mDwZYHVW4QX = 0; mDwZYHVW4QX < Neu7Fxjy; mDwZYHVW4QX = mDwZYHVW4QX + 1) {
        if ((mPwTWg[mDwZYHVW4QX] >= (416 - 326) && mPwTWg[mDwZYHVW4QX] <= 140) && (Ji1n9b[mDwZYHVW4QX] >= (897 - 837) && Ji1n9b[mDwZYHVW4QX] <= 90)) {
            GbjVznf7[gju5t8z40RBy]++;
        }
        else {
            gju5t8z40RBy++;
        }
    }
    for (Xk8JYZzv4h = 0; Xk8JYZzv4h < gju5t8z40RBy; Xk8JYZzv4h++) {
        for (mDwZYHVW4QX = 0; mDwZYHVW4QX < gju5t8z40RBy - Xk8JYZzv4h; mDwZYHVW4QX++) {
            int ypVTcXQ1aW;
            if (GbjVznf7[mDwZYHVW4QX] > GbjVznf7[mDwZYHVW4QX + (334 - 333)]) {
                ypVTcXQ1aW = GbjVznf7[mDwZYHVW4QX + 1];
                GbjVznf7[mDwZYHVW4QX + 1] = GbjVznf7[mDwZYHVW4QX];
                GbjVznf7[mDwZYHVW4QX] = ypVTcXQ1aW;
            }
        }
    }
    printf ("%d", GbjVznf7[gju5t8z40RBy]);
    return 0;
}

