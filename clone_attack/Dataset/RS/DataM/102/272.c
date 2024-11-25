int main () {
    int kaLT7KQYO, male1 = (566 - 566), No0gBTUx = (113 - 113), w3mJuHwVj, j;
    float wQZwCRtD4lFJ [(125 - 84)], male [41], female [41], sKnOmW71v;
    char k8e0v3 [41] [(44 - 37)];
    cin >> kaLT7KQYO;
    for (w3mJuHwVj = (835 - 834); kaLT7KQYO >= w3mJuHwVj; w3mJuHwVj++) {
        cin >> k8e0v3[w3mJuHwVj] >> wQZwCRtD4lFJ[w3mJuHwVj];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((143 - 143) != strcmp (k8e0v3[w3mJuHwVj], "male"))) {
            male1 += (207 - 206);
            male[male1] = wQZwCRtD4lFJ[w3mJuHwVj];
        }
        else {
            No0gBTUx += (753 - 752);
            female[No0gBTUx] = wQZwCRtD4lFJ[w3mJuHwVj];
        };
    }
    for (w3mJuHwVj = 1; w3mJuHwVj < male1; w3mJuHwVj++) {
        j = 1;
        while (j <= male1 - w3mJuHwVj) {
            if (male[j] > male[j + 1]) {
                sKnOmW71v = male[j];
                male[j] = male[j + 1];
                male[j + 1] = sKnOmW71v;
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
            j++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (w3mJuHwVj = 1; w3mJuHwVj < No0gBTUx; w3mJuHwVj++)
        for (j = 1; j <= No0gBTUx -w3mJuHwVj; j++)
            if (female[j] < female[j + 1]) {
                sKnOmW71v = female[j];
                female[j] = female[j + 1];
                female[j + 1] = sKnOmW71v;
            }
    {
        w3mJuHwVj = 1;
        while (w3mJuHwVj <= male1) {
            cout << fixed << setprecision ((181 - 179)) << male[w3mJuHwVj] << " ";
            w3mJuHwVj = w3mJuHwVj + 1;
        };
    }
    for (w3mJuHwVj = 1; w3mJuHwVj < No0gBTUx; w3mJuHwVj++)
        cout << fixed << setprecision (2) << female[w3mJuHwVj] << " ";
    cout << female[No0gBTUx] << endl;
    return 0;
}

