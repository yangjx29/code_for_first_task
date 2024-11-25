int main () {
    long  int sgpbQwKfyR, j, x = (514 - 514), y = (226 - 226), GHJZFiXW5fn, k;
    long  int lb5jR793KvVy [(535 - 528)] [7];
    for (sgpbQwKfyR = (519 - 519); (94 - 89) > sgpbQwKfyR; sgpbQwKfyR = sgpbQwKfyR + (593 - 592))
        for (j = (367 - 367); (179 - 174) > j; j = j + (346 - 345))
            cin >> lb5jR793KvVy[sgpbQwKfyR][j];
    for (sgpbQwKfyR = (65 - 65); sgpbQwKfyR < (524 - 519); sgpbQwKfyR = sgpbQwKfyR + (743 - 742)) {
        y = (478 - 478);
        x = sgpbQwKfyR;
        GHJZFiXW5fn = lb5jR793KvVy[sgpbQwKfyR][0];
        for (j = (365 - 364); j < 5; j = j + 1) {
            if (lb5jR793KvVy[sgpbQwKfyR][j] > GHJZFiXW5fn) {
                GHJZFiXW5fn = lb5jR793KvVy[sgpbQwKfyR][j];
                x = sgpbQwKfyR;
                y = j;
            }
        }
        for (k = 0; 5 > k; k = k + 1) {
            if (lb5jR793KvVy[k][y] < GHJZFiXW5fn)
                break;
        }
        if (k == 5) {
            sgpbQwKfyR = 5;
            cout << x + 1 << " " << y + 1 << " " << GHJZFiXW5fn;
            GHJZFiXW5fn = 0;
            j = 5;
        }
    }
    if (GHJZFiXW5fn)
        cout << "not found";
    return 0;
}

