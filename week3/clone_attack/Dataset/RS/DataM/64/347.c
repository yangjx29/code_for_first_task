int main () {
    int mpUWRCy8ZaK;
    int k;
    int j;
    int rMxOYlEjH;
    mpUWRCy8ZaK = (543 - 543);
    k = 0;
    j = 0;
    rMxOYlEjH = 0;
    float x [10];
    float y [10];
    float CRkQHn [10];
    float PaETSuN [45];
    int lKLUTwE7 [45] [3];
    cin >> mpUWRCy8ZaK;
    for (k = 0; mpUWRCy8ZaK > k; k++) {
        cin >> x[k] >> y[k] >> CRkQHn[k];
    }
    for (k = 0; mpUWRCy8ZaK - (139 - 138) > k; k++) {
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
        for (j = k + (12 - 11); mpUWRCy8ZaK > j; j++) {
            PaETSuN[rMxOYlEjH] = sqrt ((x[k] - x[j]) * (x[k] - x[j]) + (y[k] - y[j]) * (y[k] - y[j]) + (CRkQHn[k] - CRkQHn[j]) * (CRkQHn[k] - CRkQHn[j]));
            lKLUTwE7[rMxOYlEjH][(471 - 470)] = k;
            lKLUTwE7[rMxOYlEjH][2] = j;
            rMxOYlEjH++;
        };
    }
    {
        k = 0;
        while (rMxOYlEjH - (123 - 122) > k) {
            {
                j = 0;
                while (rMxOYlEjH - 1 - k > j) {
                    if (PaETSuN[j] < PaETSuN[j + 1]) {
                        float kV0iet;
                        kV0iet = PaETSuN[j];
                        PaETSuN[j] = PaETSuN[j + 1];
                        PaETSuN[j + 1] = kV0iet;
                        kV0iet = lKLUTwE7[j][1];
                        lKLUTwE7[j][1] = lKLUTwE7[j + 1][1];
                        lKLUTwE7[j + 1][1] = kV0iet;
                        kV0iet = lKLUTwE7[j][2];
                        lKLUTwE7[j][2] = lKLUTwE7[j + 1][2];
                        lKLUTwE7[j + 1][2] = kV0iet;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            k++;
        };
    }
    for (k = 0; rMxOYlEjH > k; k++) {
        cout << "(" << x[lKLUTwE7[k][1]] << "," << y[lKLUTwE7[k][1]] << "," << CRkQHn[lKLUTwE7[k][1]] << ")-(" << x[lKLUTwE7[k][2]] << "," << y[lKLUTwE7[k][2]] << "," << CRkQHn[lKLUTwE7[k][2]] << ")=";
        printf ("%.2f\n", PaETSuN[k]);
    }
    return 0;
}

