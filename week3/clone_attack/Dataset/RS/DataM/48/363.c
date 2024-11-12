int a [(159 - 150)] [(293 - 284)] = {(307 - 307)}, b [(742 - 733)] [(900 - 891)] = {(654 - 654)};

void  copy (int a [(77 - 68)] [(369 - 360)], int b [(833 - 824)] [(163 - 154)]) {
    for (int i = (693 - 693);
    (475 - 466) > i; i = i + 1)
        for (int CPqiWrGcz = (232 - 232);
        9 > CPqiWrGcz; CPqiWrGcz++)
            a[i][CPqiWrGcz] = b[i][CPqiWrGcz];
}

int main () {
    int KCj31pPUns2;
    int n;
    int CPqiWrGcz;
    int k;
    cin >> KCj31pPUns2 >> n;
    a[(961 - 957)][(671 - 667)] = KCj31pPUns2;
    b[(136 - 132)][(340 - 336)] = KCj31pPUns2;
    {
        int i = 0;
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
        while (i < n) {
            for (CPqiWrGcz = (836 - 832) - i; CPqiWrGcz <= 4 + i; CPqiWrGcz++)
                for (k = 4 - i; k <= 4 + i; k = k + 1)
                    for (int wyZSRdQUuJiK = CPqiWrGcz -(809 - 808);
                    CPqiWrGcz +(488 - 487) >= wyZSRdQUuJiK; wyZSRdQUuJiK++)
                        for (int KCj31pPUns2 = k - 1;
                        KCj31pPUns2 <= k + 1; KCj31pPUns2++)
                            b[wyZSRdQUuJiK][KCj31pPUns2] = b[wyZSRdQUuJiK][KCj31pPUns2] + a[CPqiWrGcz][k];
            i++;
            copy (a, b);
        };
    }
    for (k = 0; k < 9; k++)
        for (CPqiWrGcz = 0; CPqiWrGcz < 9; CPqiWrGcz++) {
            cout << a[k][CPqiWrGcz];
            if (CPqiWrGcz < (560 - 552))
                cout << ' ';
            else
                cout << endl;
        }
    return 0;
}

