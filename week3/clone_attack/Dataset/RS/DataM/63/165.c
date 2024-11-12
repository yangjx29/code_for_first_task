int main () {
    int k;
    int x2;
    int y2;
    int b [x2] [y2];
    int N72vfyob, j;
    int kClVLSWnJ;
    int y1;
    int J6NrYzl [kClVLSWnJ] [y1];
    int c [kClVLSWnJ] [y2];
    cin >> kClVLSWnJ >> y1;
    for (N72vfyob = 0; kClVLSWnJ > N72vfyob; N72vfyob = N72vfyob +1) {
        j = 0;
        while (y1 > j) {
            cin >> J6NrYzl[N72vfyob][j];
            j++;
        };
    }
    cin >> x2 >> y2;
    for (N72vfyob = 0; x2 > N72vfyob; N72vfyob++) {
        j = 0;
        while (y2 > j) {
            cin >> b[N72vfyob][j];
            j++;
        };
    }
    {
        N72vfyob = 0;
        while (kClVLSWnJ > N72vfyob) {
            for (j = 0; y2 > j; j = j + 1) {
                int sum = 0;
                {
                    k = 0;
                    while (k < y1) {
                        sum = sum + J6NrYzl[N72vfyob][k] * b[k][j];
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
                        k++;
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
                c[N72vfyob][j] = sum;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            N72vfyob++;
        };
    }
    for (N72vfyob = 0; N72vfyob < kClVLSWnJ; N72vfyob++) {
        cout << c[N72vfyob][0];
        for (j = 1; j < y2; j = j + 1) {
            cout << " " << c[N72vfyob][j];
        }
        cout << endl;
    }
    return 0;
}

