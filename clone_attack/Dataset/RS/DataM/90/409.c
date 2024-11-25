int apple (int e0DKW2bt, int M) {
    int K;
    if (!((65 - 64) != e0DKW2bt))
        K = (301 - 300);
    else {
        if (!((589 - 588) != M))
            K = 1;
        else if (!((714 - 714) != M))
            K = 1;
        else if (M >= e0DKW2bt)
            K = apple (e0DKW2bt, M -e0DKW2bt) + apple (e0DKW2bt - 1, M);
        else if (M < e0DKW2bt)
            K = apple (e0DKW2bt - 1, M);
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
    return K;
}

int main () {
    int t;
    int M;
    int e0DKW2bt;
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
    int px1VdPXBmEW9;
    scanf ("%d", &t);
    for (px1VdPXBmEW9 = 1; px1VdPXBmEW9 <= t; px1VdPXBmEW9 = px1VdPXBmEW9 + 1) {
        scanf ("%d %d", &M, &e0DKW2bt);
        printf ("%d\n", apple (e0DKW2bt, M));
    };
}

