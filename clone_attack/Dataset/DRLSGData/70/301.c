int main () {
    int TMlf8Fnk2U;
    cin >> TMlf8Fnk2U;
    double  gRh3VGm [100] [2], E6XB7aoK = 0;
    for (int yt7W3Z8C = 1;
    yt7W3Z8C <= TMlf8Fnk2U; yt7W3Z8C++) {
        cin >> gRh3VGm[yt7W3Z8C][0] >> gRh3VGm[yt7W3Z8C][1];
        for (int BazYHq = 1;
        BazYHq < yt7W3Z8C; BazYHq = BazYHq +1) {
            E6XB7aoK = max (E6XB7aoK, sqrt ((gRh3VGm[BazYHq][0] - gRh3VGm[yt7W3Z8C][0]) * (gRh3VGm[BazYHq][0] - gRh3VGm[yt7W3Z8C][0]) + (gRh3VGm[BazYHq][1] - gRh3VGm[yt7W3Z8C][1]) * (gRh3VGm[BazYHq][1] - gRh3VGm[yt7W3Z8C][1])));
        }
    }
    cout << fixed;
    cout << setprecision (4) << E6XB7aoK << endl;
    return 0;
}

