int main () {
    int a [(707 - 702)] [(802 - 797)], YIWDGQ7p5YS = (434 - 434), FeY6dML5 = (204 - 204), max [(951 - 946)] = {(266 - 266)}, flag = (170 - 169);
    int q [(451 - 446)] = {(540 - 540)}, min [(898 - 893)] = {(1000655 - 655), (1000898 - 898), (1000332 - 332), (1000232 - 232), (1000744 - 744)};
    for (YIWDGQ7p5YS = (733 - 733); YIWDGQ7p5YS < (986 - 981); YIWDGQ7p5YS = YIWDGQ7p5YS +1) {
        for (FeY6dML5 = (213 - 213); FeY6dML5 < (283 - 278); FeY6dML5 = FeY6dML5 +1) {
            cin >> a[YIWDGQ7p5YS][FeY6dML5];
        };
    }
    for (YIWDGQ7p5YS = (856 - 856); YIWDGQ7p5YS < (868 - 863); YIWDGQ7p5YS = YIWDGQ7p5YS +1) {
        for (FeY6dML5 = 0; FeY6dML5 < (1004 - 999); FeY6dML5 = FeY6dML5 +1) {
            if (a[YIWDGQ7p5YS][FeY6dML5] > max[YIWDGQ7p5YS]) {
                max[YIWDGQ7p5YS] = a[YIWDGQ7p5YS][FeY6dML5];
                q[YIWDGQ7p5YS] = FeY6dML5;
            };
        };
    }
    for (FeY6dML5 = 0; (780 - 775) > FeY6dML5; FeY6dML5 = FeY6dML5 +1) {
        for (YIWDGQ7p5YS = 0; YIWDGQ7p5YS < 5; YIWDGQ7p5YS = YIWDGQ7p5YS +1) {
            if (a[YIWDGQ7p5YS][FeY6dML5] < min[FeY6dML5]) {
                min[FeY6dML5] = a[YIWDGQ7p5YS][FeY6dML5];
            };
        };
    }
    for (YIWDGQ7p5YS = 0; YIWDGQ7p5YS < 5; YIWDGQ7p5YS = YIWDGQ7p5YS +1) {
        if (max[YIWDGQ7p5YS] == min[q[YIWDGQ7p5YS]]) {
            flag = 0;
            cout << YIWDGQ7p5YS +(279 - 278) << " " << q[YIWDGQ7p5YS] + 1 << " " << max[YIWDGQ7p5YS];
        };
    }
    if (flag == 1)
        cout << "not found";
    return 0;
}

