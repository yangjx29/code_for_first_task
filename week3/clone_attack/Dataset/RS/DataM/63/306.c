int main (void ) {
    int Er2TfYJsaB [(453 - 352)] [101], b [101] [101], c [101] [101];
    int h0Jp3Vb, x2, y1, xK4CRjH62Vpt, I9ZFvTpSM5V, j, IWK9nUrjEG;
    cin >> h0Jp3Vb >> y1;
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
    for (I9ZFvTpSM5V = (951 - 950); h0Jp3Vb >= I9ZFvTpSM5V; I9ZFvTpSM5V = I9ZFvTpSM5V +1)
        for (j = 1; y1 >= j; j++)
            cin >> Er2TfYJsaB[I9ZFvTpSM5V][j];
    cin >> x2 >> xK4CRjH62Vpt;
    for (I9ZFvTpSM5V = 1; x2 >= I9ZFvTpSM5V; I9ZFvTpSM5V++)
        for (j = 1; xK4CRjH62Vpt >= j; j++)
            cin >> b[I9ZFvTpSM5V][j];
    for (I9ZFvTpSM5V = 1; I9ZFvTpSM5V <= h0Jp3Vb; I9ZFvTpSM5V++)
        for (j = 1; j <= xK4CRjH62Vpt; j++) {
            c[I9ZFvTpSM5V][j] = 0;
            for (IWK9nUrjEG = 1; IWK9nUrjEG <= x2; IWK9nUrjEG++)
                c[I9ZFvTpSM5V][j] = c[I9ZFvTpSM5V][j] + Er2TfYJsaB[I9ZFvTpSM5V][IWK9nUrjEG] * b[IWK9nUrjEG][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            cout << c[I9ZFvTpSM5V][j];
            if (j % xK4CRjH62Vpt == 0 && I9ZFvTpSM5V != h0Jp3Vb)
                cout << endl;
            else {
                if (j % xK4CRjH62Vpt != 0)
                    cout << " ";
            };
        };
}

