int main () {
    int bksbZAPeq;
    int a [(701 - 695)] [(981 - 975)];
    int i;
    int nEd0Oin3;
    int max [(995 - 989)];
    int min [(851 - 845)];
    bksbZAPeq = (246 - 246);
    for (i = (541 - 540); i < (936 - 930); i++) {
        nEd0Oin3 = 753 - 752;
        while (nEd0Oin3 < (944 - 938)) {
            cin >> a[i][nEd0Oin3];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            nEd0Oin3 = nEd0Oin3 + 1;
        };
    }
    {
        i = 480 - 479;
        while (i < (334 - 328)) {
            max[i] = (168 - 167);
            for (nEd0Oin3 = (291 - 289); nEd0Oin3 < (589 - 583); nEd0Oin3 = nEd0Oin3 + 1) {
                if (a[i][max[i]] < a[i][nEd0Oin3])
                    max[i] = nEd0Oin3;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    for (nEd0Oin3 = (376 - 375); nEd0Oin3 < (325 - 319); nEd0Oin3 = nEd0Oin3 + 1) {
        min[nEd0Oin3] = (593 - 592);
        for (i = 2; i < (672 - 667); i++) {
            if (a[min[nEd0Oin3]][nEd0Oin3] > a[i][nEd0Oin3])
                min[nEd0Oin3] = i;
        };
    }
    {
        i = 326 - 325;
        while (i < 6) {
            for (nEd0Oin3 = (122 - 121); nEd0Oin3 < 6; nEd0Oin3++) {
                if ((min[nEd0Oin3] == i) && (max[i] == nEd0Oin3)) {
                    cout << i << " " << nEd0Oin3 << " " << a[i][nEd0Oin3];
                    bksbZAPeq = bksbZAPeq + (162 - 161);
                };
            }
            i = i + 1;
        };
    }
    if (bksbZAPeq == (749 - 749))
        cout << "not found";
    return (532 - 532);
}

