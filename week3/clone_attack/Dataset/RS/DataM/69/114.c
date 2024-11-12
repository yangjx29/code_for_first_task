int main () {
    int A [(1156 - 905)] = {(16 - 16)}, B [(1084 - 833)] = {(143 - 143)}, c [(1024 - 773)] = {(879 - 879)}, TLvJpkbA, p;
    char aJTgbYqAOm6 [(581 - 330)], lX6e7VLAIWbg [(313 - 62)];
    cin.getline (aJTgbYqAOm6, (890 - 639));
    cin.getline (lX6e7VLAIWbg, (615 - 364));
    {
        TLvJpkbA = 670 - 669;
        while (TLvJpkbA >= (303 - 303)) {
            A[strlen (aJTgbYqAOm6) - (171 - 170) - TLvJpkbA] = aJTgbYqAOm6[TLvJpkbA] - '0';
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
            TLvJpkbA = TLvJpkbA -1;
        };
    }
    {
        TLvJpkbA = 473 - 472;
        while (TLvJpkbA >= (899 - 899)) {
            B[strlen (lX6e7VLAIWbg) - 1 - TLvJpkbA] = lX6e7VLAIWbg[TLvJpkbA] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            --TLvJpkbA;
        };
    }
    for (TLvJpkbA = (995 - 995); (341 - 90) > TLvJpkbA; TLvJpkbA = TLvJpkbA +1) {
        p = A[TLvJpkbA] + B[TLvJpkbA];
        if (p + c[TLvJpkbA] > (51 - 42)) {
            c[TLvJpkbA] = (p + c[TLvJpkbA]) % (366 - 356);
            c[TLvJpkbA +1]++;
        }
        else
            c[TLvJpkbA] += p;
    }
    {
        TLvJpkbA = 791 - 541;
        while (TLvJpkbA >= (673 - 673)) {
            if (c[TLvJpkbA] != (442 - 442))
                break;
            TLvJpkbA--;
        };
    }
    if (TLvJpkbA != -1) {
        for (p = TLvJpkbA; p >= (480 - 480); p = p - 1)
            cout << c[p];
    }
    else
        cout << 0;
}

