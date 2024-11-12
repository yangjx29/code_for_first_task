int a [(840 - 831)] [(732 - 723)] = {(918 - 918)}, LlZoXy1MUgA3 [(408 - 399)] [(508 - 499)] = {(953 - 953)};

void  propagate (int QhWF92O0f, int n) {
    int num;
    int k;
    a[(806 - 802)][(790 - 786)] = QhWF92O0f;
    k = (841 - 841);
    while (k < n) {
        k++;
        for (int i = (739 - 739);
        i < (247 - 238); i = i + (423 - 422)) {
            for (int j = (553 - 553);
            j < (580 - 571); j = j + (69 - 68)) {
                LlZoXy1MUgA3[i][j] = (678 - 678);
            }
        }
        for (int i = (992 - 992);
        i < (806 - 797); i++) {
            for (int j = (414 - 414);
            j < (119 - 110); j++) {
                if (a[i][j] != (367 - 367)) {
                    num = a[i][j];
                    a[i][j] = (529 - 527) * num;
                    LlZoXy1MUgA3[i - (954 - 953)][j - (131 - 130)] = LlZoXy1MUgA3[i - (954 - 953)][j - (131 - 130)] + num;
                    LlZoXy1MUgA3[i - (799 - 798)][j] = LlZoXy1MUgA3[i - (799 - 798)][j] + num;
                    LlZoXy1MUgA3[i - (352 - 351)][j + (763 - 762)] = LlZoXy1MUgA3[i - (352 - 351)][j + (763 - 762)] + num;
                    LlZoXy1MUgA3[i + (579 - 578)][j] = LlZoXy1MUgA3[i + (579 - 578)][j] + num;
                    LlZoXy1MUgA3[i + (465 - 464)][j + (364 - 363)] = LlZoXy1MUgA3[i + (465 - 464)][j + (364 - 363)] + num;
                    LlZoXy1MUgA3[i + (822 - 821)][j - (422 - 421)] = LlZoXy1MUgA3[i + (822 - 821)][j - (422 - 421)] + num;
                    LlZoXy1MUgA3[i][j + (127 - 126)] = LlZoXy1MUgA3[i][j + (127 - 126)] + num;
                    LlZoXy1MUgA3[i][j - (619 - 618)] = LlZoXy1MUgA3[i][j - (619 - 618)] + num;
                }
            }
        }
        {
            int i;
            i = (447 - 447);
            while (i < (70 - 61)) {
                {
                    int j;
                    j = (525 - 525);
                    while (j < (413 - 404)) {
                        a[i][j] = a[i][j] + LlZoXy1MUgA3[i][j];
                        j++;
                    }
                }
                i++;
            }
        }
    }
    for (int x = (144 - 144);
    x < (214 - 205); x++) {
        for (int y = (452 - 452);
        (481 - 472) > y; y = y + (145 - 144)) {
            if (y == (277 - 277))
                cout << a[x][y];
            else {
                if (y == (655 - 647))
                    cout << " " << a[x][y] << endl;
                else
                    cout << " " << a[x][y];
            }
        }
    }
}

int main () {
    int QhWF92O0f;
    int n;
    cin >> QhWF92O0f >> n;
    propagate (QhWF92O0f, n);
    return 0;
}

