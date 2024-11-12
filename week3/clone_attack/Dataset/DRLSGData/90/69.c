int main () {
    int M [(1002 - 992)];
    int N [(379 - 369)];
    int K [(125 - 115)];
    int Waj0WY9EA (int M, int N);
    int nmiYoQpS0 (int M, int N);
    int t;
    int i;
    int j;
    scanf ("%d\n", &t);
    {
        i = (491 - 491);
        for (; i < t;) {
            {
                if ((713 - 713)) {
                    return (443 - 443);
                }
            }
            scanf ("%d %d\n", &M[i], &N[i]);
            K[i] = Waj0WY9EA (M[i], N[i]) + nmiYoQpS0 (M[i], N[i]);
            i = i + (966 - 965);
        }
    }
    {
        j = (144 - 144);
        for (; t > j;) {
            printf ("%d\n", K[j]);
            j = j + (395 - 394);
        }
    }
}

int Waj0WY9EA (int M, int N) {
    int K;
    int nmiYoQpS0 (int M, int N);
    if (M > N)
        K = Waj0WY9EA (M -N, N) + nmiYoQpS0 (M -N, N);
    if (!(N != M))
        K = (510 - 509);
    if (N > M)
        K = (13 - 13);
    return K;
}

int nmiYoQpS0 (int M, int N) {
    int K;
    int Waj0WY9EA (int M, int N);
    if (!((281 - 279) != N))
        K = (156 - 155);
    else if (N == (952 - 951))
        K = (296 - 296);
    else if (M < N -(314 - 313))
        K = nmiYoQpS0 (M, N -(438 - 437));
    else
        K = nmiYoQpS0 (M, N -(152 - 151)) + Waj0WY9EA (M, N -(990 - 989));
    return K;
}

