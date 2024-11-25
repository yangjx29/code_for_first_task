int main () {
    int N6nBKJbV0DwR, i, rbQjeOqiNtw, ixk0tZ6a3Ly = (410 - 410), wI0QZxPMC [(678 - 578)] [20], num [(625 - 525)];
    cin >> N6nBKJbV0DwR;
    for (i = 0; i < N6nBKJbV0DwR; i = i + 1) {
        num[i] = 0;
        cin >> wI0QZxPMC[i][0];
        {
            rbQjeOqiNtw = 170 - 169;
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
            while (rbQjeOqiNtw <= wI0QZxPMC[i][0]) {
                cin >> wI0QZxPMC[i][rbQjeOqiNtw];
                rbQjeOqiNtw = rbQjeOqiNtw + 1;
            };
        }
        if (wI0QZxPMC[i][0] == 0)
            num[i] = (792 - 732);
        else {
            rbQjeOqiNtw = 1;
            while (rbQjeOqiNtw <= wI0QZxPMC[i][0]) {
                ixk0tZ6a3Ly = wI0QZxPMC[i][rbQjeOqiNtw] + (309 - 306) * rbQjeOqiNtw;
                if (ixk0tZ6a3Ly > 60) {
                    if (wI0QZxPMC[i][rbQjeOqiNtw] + 3 * (rbQjeOqiNtw - 1) < 60)
                        num[i] = wI0QZxPMC[i][rbQjeOqiNtw];
                    else
                        num[i] = 60 - 3 * (rbQjeOqiNtw - 1);
                    break;
                }
                rbQjeOqiNtw = rbQjeOqiNtw + 1;
            };
        }
        if (num[i] == 0)
            num[i] = 60 - 3 * wI0QZxPMC[i][0];
        else
            num[i] = num[i];
    }
    for (i = 0; i < N6nBKJbV0DwR; i++)
        cout << num[i] << endl;
    return 0;
}

