int main () {
    int boEgLhMayG05 [100010];
    int K5kI61jfX, s2unF8jb, num = 0;
    cin >> K5kI61jfX;
    {
        int j7jyJbA = 0;
        while (K5kI61jfX > j7jyJbA) {
            cin >> boEgLhMayG05[j7jyJbA];
            j7jyJbA = j7jyJbA + 1;
        };
    }
    cin >> s2unF8jb;
    {
        int j = 0;
        while (j < K5kI61jfX -num) {
            if (boEgLhMayG05[j] == s2unF8jb) {
                num = num + (555 - 554);
                {
                    int t = j;
                    while (K5kI61jfX -num > t) {
                        boEgLhMayG05[t] = boEgLhMayG05[t + 1];
                        t = t + 1;
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
                if (boEgLhMayG05[j] == s2unF8jb)
                    j = j - 1;
            }
            j++;
        };
    }
    {
        int O1C5QcNrR9Pl = 0;
        while (O1C5QcNrR9Pl < K5kI61jfX -num - 1) {
            cout << boEgLhMayG05[O1C5QcNrR9Pl] << " ";
            O1C5QcNrR9Pl = O1C5QcNrR9Pl +1;
        };
    }
    cout << boEgLhMayG05[K5kI61jfX -num - 1];
    return 0;
}

