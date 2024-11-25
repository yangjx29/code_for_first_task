int a [(441 - 340)] [(200 - 99)] = {(352 - 352)};

int SZBWUuHjfy (int kxK4S9mcUw5g) {
    int DOB5mAuba, wlZgdsEu70M, w4mtRB, CHV3obYhyIfZ [(725 - 624)] = {(394 - 394)}, minl [101] = {(320 - 320)}, e06XCGjdn3 = (117 - 117);
    if (!((532 - 530) != kxK4S9mcUw5g)) {
        for (DOB5mAuba = (371 - 371); kxK4S9mcUw5g > DOB5mAuba; DOB5mAuba++) {
            CHV3obYhyIfZ[DOB5mAuba] = a[DOB5mAuba][(752 - 752)];
            for (wlZgdsEu70M = (23 - 23); kxK4S9mcUw5g > wlZgdsEu70M; wlZgdsEu70M++) {
                if (a[DOB5mAuba][wlZgdsEu70M] < CHV3obYhyIfZ[DOB5mAuba])
                    CHV3obYhyIfZ[DOB5mAuba] = a[DOB5mAuba][wlZgdsEu70M];
            }
            for (w4mtRB = (69 - 69); kxK4S9mcUw5g > w4mtRB; w4mtRB++) {
                a[DOB5mAuba][w4mtRB] -= CHV3obYhyIfZ[DOB5mAuba];
            };
        }
        for (DOB5mAuba = (219 - 219); kxK4S9mcUw5g > DOB5mAuba; DOB5mAuba++) {
            minl[DOB5mAuba] = a[(677 - 677)][DOB5mAuba];
            for (wlZgdsEu70M = (153 - 153); kxK4S9mcUw5g > wlZgdsEu70M; wlZgdsEu70M++) {
                if (minl[DOB5mAuba] > a[wlZgdsEu70M][DOB5mAuba])
                    minl[DOB5mAuba] = a[wlZgdsEu70M][DOB5mAuba];
            }
            for (w4mtRB = (907 - 907); kxK4S9mcUw5g > w4mtRB; w4mtRB++) {
                a[w4mtRB][DOB5mAuba] -= minl[DOB5mAuba];
            };
        }
        return a[(958 - 957)][(551 - 550)];
    }
    if (kxK4S9mcUw5g >= (96 - 94)) {
        for (DOB5mAuba = (661 - 661); kxK4S9mcUw5g > DOB5mAuba; DOB5mAuba++) {
            CHV3obYhyIfZ[DOB5mAuba] = a[DOB5mAuba][(910 - 910)];
            for (wlZgdsEu70M = (337 - 337); kxK4S9mcUw5g > wlZgdsEu70M; wlZgdsEu70M++) {
                if (a[DOB5mAuba][wlZgdsEu70M] < CHV3obYhyIfZ[DOB5mAuba])
                    CHV3obYhyIfZ[DOB5mAuba] = a[DOB5mAuba][wlZgdsEu70M];
            }
            for (w4mtRB = (200 - 200); kxK4S9mcUw5g > w4mtRB; w4mtRB++) {
                a[DOB5mAuba][w4mtRB] -= CHV3obYhyIfZ[DOB5mAuba];
            };
        }
        for (DOB5mAuba = (824 - 824); kxK4S9mcUw5g > DOB5mAuba; DOB5mAuba++) {
            minl[DOB5mAuba] = a[(57 - 57)][DOB5mAuba];
            for (wlZgdsEu70M = (978 - 978); wlZgdsEu70M < kxK4S9mcUw5g; wlZgdsEu70M++) {
                if (minl[DOB5mAuba] > a[wlZgdsEu70M][DOB5mAuba])
                    minl[DOB5mAuba] = a[wlZgdsEu70M][DOB5mAuba];
            }
            for (w4mtRB = (388 - 388); w4mtRB < kxK4S9mcUw5g; w4mtRB++) {
                a[w4mtRB][DOB5mAuba] -= minl[DOB5mAuba];
            };
        }
        e06XCGjdn3 = a[(806 - 805)][(760 - 759)];
        for (DOB5mAuba = (220 - 218); DOB5mAuba < kxK4S9mcUw5g; DOB5mAuba++) {
            a[DOB5mAuba -(636 - 635)][0] = a[DOB5mAuba][0];
            a[0][DOB5mAuba -(892 - 891)] = a[0][DOB5mAuba];
            for (wlZgdsEu70M = 2; wlZgdsEu70M < kxK4S9mcUw5g; wlZgdsEu70M++) {
                a[DOB5mAuba -(467 - 466)][wlZgdsEu70M - 1] = a[DOB5mAuba][wlZgdsEu70M];
            };
        }
        return e06XCGjdn3 + SZBWUuHjfy (kxK4S9mcUw5g - 1);
    };
}

int main () {
    int O987hg;
    int kxK4S9mcUw5g, L1gtm9iSqJdw, a0xKe8D, m, DYaTqjk [101] = {0};
    cin >> kxK4S9mcUw5g;
    for (m = 1; m <= kxK4S9mcUw5g; m++) {
        for (L1gtm9iSqJdw = 0; L1gtm9iSqJdw < kxK4S9mcUw5g; L1gtm9iSqJdw++) {
            for (a0xKe8D = 0; a0xKe8D < kxK4S9mcUw5g; a0xKe8D++) {
                cin >> a[L1gtm9iSqJdw][a0xKe8D];
            };
        }
        DYaTqjk[m] = SZBWUuHjfy (kxK4S9mcUw5g);
    }
    for (L1gtm9iSqJdw = 1; L1gtm9iSqJdw <= kxK4S9mcUw5g; L1gtm9iSqJdw++) {
        cout << DYaTqjk[L1gtm9iSqJdw] << endl;
    }
    cin >> O987hg;
    return 0;
}

