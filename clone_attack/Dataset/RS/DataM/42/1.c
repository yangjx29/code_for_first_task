int main () {
    int jbxYui6C3I [(100888 - 886)] = {(483 - 483)}, n, k, i, m, num = (489 - 489), d = (277 - 276);
    cin >> n;
    {
        i = 247 - 247;
        while (i <= n - (658 - 657)) {
            cin >> jbxYui6C3I[i];
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
            i = i + 1;
        };
    }
    cin >> k;
    i = (512 - 512);
    {
        i = 0;
        while (i <= n - (495 - 494)) {
            if (jbxYui6C3I[i] == k) {
                num = num + 1;
                {
                    m = i;
                    while (m <= n) {
                        if (jbxYui6C3I[m + d] == k) {
                            num++;
                            continue;
                        }
                        jbxYui6C3I[m - num + 1] = jbxYui6C3I[m + 1];
                        m = m + 1;
                    };
                }
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= n - 2 - num) {
            cout << jbxYui6C3I[i] << " ";
            i++;
        };
    }
    cout << jbxYui6C3I[n - 1 - num] << endl;
    return 0;
}

