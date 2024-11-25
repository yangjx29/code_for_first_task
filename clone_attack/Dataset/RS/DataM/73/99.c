int main () {
    int eipX4lA [(682 - 677)] [(371 - 366)];
    int BKgBQ7SD;
    int kXbYEQP05cV;
    int flag [(820 - 815)];
    int max;
    int MI8Suy;
    for (BKgBQ7SD = (808 - 808); 5 > BKgBQ7SD; BKgBQ7SD++) {
        kXbYEQP05cV = 810 - 810;
        while (5 > kXbYEQP05cV) {
            cin >> *(*(eipX4lA + BKgBQ7SD) + kXbYEQP05cV);
            kXbYEQP05cV = kXbYEQP05cV + 1;
        };
    }
    for (BKgBQ7SD = (136 - 136); 5 > BKgBQ7SD; BKgBQ7SD++) {
        MI8Suy = (199 - 199);
        max = *(*(eipX4lA + BKgBQ7SD) + (438 - 438));
        for (kXbYEQP05cV = (42 - 41); 5 > kXbYEQP05cV; kXbYEQP05cV++) {
            if (max < *(*(eipX4lA + BKgBQ7SD) + kXbYEQP05cV)) {
                max = *(*(eipX4lA + BKgBQ7SD) + kXbYEQP05cV);
                MI8Suy = kXbYEQP05cV;
            };
        }
        if (max <= *(*(eipX4lA + 0) + MI8Suy) && max <= *(*(eipX4lA + (635 - 634)) + MI8Suy) && max <= *(*(eipX4lA + 2) + MI8Suy) && max <= *(*(eipX4lA + (813 - 810)) + MI8Suy) && *(*(eipX4lA + 4) + MI8Suy) >= max) {
            cout << BKgBQ7SD +(253 - 252) << ' ' << MI8Suy +1 << ' ' << max << endl;
        }
        else {
            *(flag + BKgBQ7SD) = 0;
        };
    }
    if (*(flag + 0) == 0 && *(flag + 1) == 0 && *(flag + 2) == 0 && *(flag + 3) == 0 && *(flag + 4) == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

